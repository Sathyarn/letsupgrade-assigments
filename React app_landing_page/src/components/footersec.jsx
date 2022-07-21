import React from "react";
import playstore from "../images/playstore.png";
import appstore from "../images/appstore.png";
function Footersec() {
    return (
        <div>
            <div className="trial">
                <div className="container2">
                    <h2>Try it now</h2>
                    <img src={playstore} alt="playstore" />
                    <img src={appstore} alt="appstore" />
                </div>
            </div>
            <div className="container3">
                <div className="footer">
                    <div className="col-sm-6 col-md-6 col-lg-6 col-xl-6 footer-text">
                        <a href="#">About</a>
                        <a href="#">Privacy</a>
                        <a href="#">Contact</a>
                        <a href="#">Terms of use</a>
                        <p>&copy;Develop by Sathya</p>
                    </div>
                    <div className="col-sm-6 col-md-6 col-lg-6 col-xl-6">
                        <i className="fas fa-cloud"></i>
                        <i className="fas fa-heart"></i>
                    </div>
                </div>
            </div>

        </div>
    )
}

export default Footersec;