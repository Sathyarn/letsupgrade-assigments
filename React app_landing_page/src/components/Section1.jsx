import React from "react";
import logo2 from "../images/logo2.png";
const Section1 = () =>{
    return(
        <div class="jumbotron">
    <nav role="navigation" class="navbar navbar-inverse">
      <div class="container-fluid">
        <div class="navbar-header">
          <a class="navbar-brand" href="#"><img src={logo2} alt="logo2" class="logo2"/></a>
          <button type="button" class="navbar-toggle" data-target="#navbarCollapse" data-toggle="collapse">
            <span class="sr-only">Toggle navigation</span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </button>
        </div>
        <div class="navbar-collapse collapse" id="navbarCollapse">
          <ul class="nav navbar-nav navbar-right">
            <li><a href="#">Home</a></li>
            <li><a href="#">About</a></li>
            <li><a href="#">Portfolio</a></li>
            <li><a href="#">Contact</a></li>
          </ul>
        </div>
      </div>
    </nav>
    <div class="container">

      <div class="featured">
        <h3>Planet</h3>
        <h1>Earth</h1>
        <p>Space Advisor is tde interactive experience of tde documentary movie Beyond Eartd : tde beggining of new
          space in which tde user can explore space in an immersive 3D experience.</p>
        <a class="btn" href="#">Find more</a>
        <a class="btn" href="#">Download</a>
      </div>
    </div>
  </div>
    )
}
export default Section1;