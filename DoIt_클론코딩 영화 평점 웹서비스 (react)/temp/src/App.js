import Food from './Food'
import Dog from './Dog'
import Container from 'react-bootstrap/Container';
import Row from 'react-bootstrap/Row';
import Col from 'react-bootstrap/Col';
import Nav from 'react-bootstrap/Nav';
function App() {
  return (
    <Container>
      <Nav defaultActiveKey="/home" as="ul">
  <Nav.Item as="li">
    <Nav.Link href="/home">Active</Nav.Link>
  </Nav.Item>
  <Nav.Item as="li">
    <Nav.Link eventKey="link-1">Link</Nav.Link>
  </Nav.Item>
  <Nav.Item as="li">
    <Nav.Link eventKey="link-2">Link</Nav.Link>
  </Nav.Item>
</Nav>
      <Row>
        <Col><Food name="김치" info="매움"></Food></Col>
        <Col><Food name="김치" info="매움"></Food></Col>
        <Col><Food name="김치" info="매움"></Food></Col>
        <Dog></Dog>
      </Row>
</Container>

  );
}

export default App;
