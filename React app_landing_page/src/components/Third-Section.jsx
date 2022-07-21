import React from "react";
import secimg1 from "../images/secimg1.png";
import secimg2 from "../images/secimg2.png";
import secimg3 from "../images/secimg3.png";
function Imgtext() {
    return (
        <div>
            <div className="thirdsection">
                <div className="sec-section">
                    <div className="row">
                        <div className="col-sm-4 col-md-4 col-lg-4 col-xl-4">
                            <img src={secimg1} className="secimg" alt="mangalyan img" />
                            <h3>Good Vision</h3>
                            <p>This theme will look great on any device, no matter the size!</p>
                        </div>
                        <div className="col-sm-4 col-md-4 col-lg-4 col-xl-4">
                            <img src={secimg2} className="secimg" alt="mangalyan img" />
                            <h3>Understanding science</h3>
                            <p>This theme will look great on any device, no matter the size!</p>
                        </div>
                        <div className="col-sm-4 col-md-4 col-lg-4 col-xl-4">
                            <img src={secimg3} className="secimg" alt="mangalyan img" />
                            <h3>Creating source</h3>
                            <p>This theme will look great on any device, no matter the size!</p>
                        </div>
                    </div>
                </div>
            </div>
            <div>
                <div className="tdird-section">
                    <div className="row">
                        <div className="col-sm-6 col-md-6 col-lg-6 col-xl-6 order-lg-2 sec-img1">
                        </div>
                        <div className="col-sm-6 col-md-6 col-lg-6 col-xl-6 order-lg-1 sec-text1" >
                            <h2>Mangalyaan</h2>
                            <p>tde Mars Orbiter Mission, also called Mangalyaan, is a space probe orbiting Mars since 24 September 2014. It
                                was launched on 5 November 2013 by tde Indian Space Research Organisation.</p>
                            <button type="button" className="seemorebtn"><a href="https://en.wikipedia.org/wiki/Mars_Orbiter_Mission"
                                target="_blank">See more</a></button>
                        </div>

                    </div>
                </div>
                <div className="fourth-section">
                    <div className="row">
                        <div className="col-sm-6 col-md-6 col-lg-6 col-xl-6 sec-img2">
                        </div>
                        <div className="col-sm-6 col-md-6 col-lg-6 col-xl-6 sec-text2" >
                            <h2>Chandrayaan</h2>
                            <p>Chandrayaan-1 was tde first Indian lunar probe under tde Chandrayaan program. It was launched by tde Indian
                                Space Research Organisation in October 2008, and operated until August 2009. tde mission included a lunar
                                orbiter and an impactor.</p>
                            <button type="button" className="seemorebtn"><a href="https://en.wikipedia.org/wiki/Chandrayaan-1"
                                target="_blank">See more</a></button>
                        </div>
                    </div>
                </div>
                <div className="fifth-section">
                    <div className="row">
                        <div className="col-sm-6 col-md-6 col-lg-6 col-xl-6 order-lg-2 sec-img3">
                        </div>
                        <div className="col-sm-6 col-md-6 col-lg-6 col-xl-6 order-lg-1 sec-text3">
                            <h2>GSAT-7</h2>
                            <p>GSAT-7 or INSAT-4F is a multi-band military communications satellite developed by tde Indian Space Research
                                Organisation. tde Indian Navy is tde user of tde multi-band communication spacecraft, which has been
                                operational since September 2013.</p>
                            <button type="button" className="seemorebtn"><a href="https://en.wikipedia.org/wiki/GSAT-7"
                                target="_blank">See more</a></button>
                        </div>
                    </div>
                </div>
            </div>
        </div>

    )
}
export default Imgtext;