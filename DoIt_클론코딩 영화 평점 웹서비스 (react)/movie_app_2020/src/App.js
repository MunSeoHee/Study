import React from 'react';

// import Potato from './Potato';
// import PropTypes from 'prop-types';
// function Food({name, image, rating}){
//   return (
//     <div>
//       <h1>I like {name}</h1>
//       <h4>{rating}/5.0</h4>
//       <img src={image} alt=""/>
//     </div>
//   );
// }

// const foodLike=[{
//   id:1,
//   name:'kimchi',
//   image:'https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcS8cJ7niHMoHwx7SRNMnh91TCtCk8FCA90C4HdVATG-cmtXJOeLVjqXll0lKQ&usqp=CAc',
//   rating:5,
// },
// {
//   id:2,
//   name:'banana',
//   image:'data:image/jpeg;base64,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',
//   rating:4.9,
// }];

// function renderFood(dish){
//   return <Food key={dish.id} name={dish.name} image={dish.image} rating={dish.rating}/>
// }
// function App() {
//   return (
//   <div>
//     <h1>hello</h1>
//     {/* <Food fav='kimchi' />
//     <Food fav='banana' />
//     <Food fav='apple' /> */}
//     {foodLike.map(renderFood)}
//   </div>
  
//   );
// }

// Food.propTypes={
//   name:PropTypes.string.isRequired,
//   image:PropTypes.string.isRequired,
//   rating:PropTypes.number.isRequired,
// };

class App extends React.Component{
  componentWillUnmount(){
    console.log('unmount');
  }
  componentDidUpdate(){
    console.log('update');
  }
  componentDidMount(){
    console.log('component rendered');
  }
  constructor(props){
    super(props);
    console.log('hello');
  }
  state={
    count:0,
  };
  add=() =>{
    console.log('add');
    // this.setState({count:this.state.count+1});
    this.setState(current=>({
      count:current.count +1,
    }));
  }
  minus=()=>{
    console.log('minus');
    // this.setState({count:this.state.count-1});
    this.setState(current=>({
      count:current.count -1,
    }));
  }
  render(){
    console.log('rendering');
    return (
      <div>
        <h1>number : {this.state.count}</h1>
        <button onClick={this.add}>Add</button>
        <button onClick={this.minus}>Minus</button>
      </div>
    
    );
  }
}

export default App;
