import React from "react";
import mylswamy1 from "../images/mylswamy1.png";
import radhakrishnan from "../images/radhakrishnan.jpg";
import sivan from "../images/sivan.jpeg";

function Fourthsec() {
    return (
        <div>
            <div className="sev-section">
                <h1>What people are saying...</h1>
                <div className="row">
                    <div className="col-sm-4 col-md-4 col-lg-4 col-xl-4">
                        <img src={mylswamy1} className="test-img" />

                            <h3>Mylswamy Annadurai</h3>
                            <p>Mylswamy Annadurai, popularly known as Moon Man of India, is an Indian scientist working as vice president
                                for Tamil Nadu State Council for Science and Technology, Chairman, Board of Governors, National Design and
                                Research Forum.</p>
                    </div>
                    <div className="col-sm-4 col-md-4 col-lg-4 col-xl-4">
                        <img src={radhakrishnan} className="test-img" />
                            <h3>Koppillil Radhakrishnan</h3>
                            <p>Koppillil Radhakrishnan is an Indian space scientist who headed the Indian Space Research Organisation
                                between November 2009 and December 2014 as Chairman of Space Commission, Secretary of the Department of Space
                                and Chairman of ISRO.</p>
                    </div>
                    <div className="col-sm-4 col-md-4 col-lg-4 col-xl-4">
                        <img className="test-img1" src={sivan}/>
                            <h3>Kailasavadivoo Sivan</h3>
                            <p>Kailasavadivoo Sivan is an Indian space scientist who served as the Secretary of the Department of Space and
                                chairman of Indian Space Research Organisation and Space Commission. He has previously served as the Director
                                of the Vikram Sarabhai Space Center and the Liquid Propulsion Systems Centre. </p>
                    </div>
                </div>
            </div>
        </div>
    )
}
export default Fourthsec;