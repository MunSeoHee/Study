import React from 'react';
import axios from 'axios';
import Movie from './Movie';
import './App.css';

class App extends React.Component {
  state = {
    isLoading: true,
    movies: [],
  };
  getMovies = async () => {
    // const movies = await axios.get('https://yts.mx/api/v2/list_movies.json');
    // console.log(movies.data.data.movies) 아래처럼 구조 분해 할당
    const {
      data: {
        data: { movies }
      },
    } = await axios.get('https://yts.mx/api/v2/list_movies.json?sort_by=rating');

    console.log(movies);

    // this.setState({movies:movies}); 아래와 같이 축약 가능
    this.setState({ movies, isLoading: false });
  }

  componentDidMount() {
    this.getMovies();
  }
  render() {
    const { isLoading, movies } = this.state;

    return (<section className="container">{isLoading ? (<div className="loader"><span className="loader__text">Loading...</span></div>) :
      (<div className="movies">{movies.map((movie) => {
        console.log(movie);
        return <Movie key={movie.id} id={movie.id} year={movie.year} title={movie.title} summary={movie.summary} poster={movie.medium_cover_image} genres={movie.genres} />;
      })}
      </div>
      )}
    </section>);
  }
}
export default App;
