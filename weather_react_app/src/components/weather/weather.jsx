import React, { useState } from "react";
import axios from "axios";
import "./weather_css.css";
function Weather() {
    const [data, setData] = useState({})
    const [location, setLocation] = useState('')
    const url = `https://api.openweathermap.org/data/2.5/weather?q=${location}&units=imperial&appid=05816e0ed65c33e18c545a0db33c90f1`
    const searchLocation = (event) => {
        if (event.key === 'Enter') {
            axios.get(url).then((response) => {
                setData(response.data)
                console.log(response.data)
            })
            setLocation('')
        }
    }
    function clock() {
        var c = new Date();
        //var d = document.getElementById;
        var hours = c.getHours();
        var mins = c.getMinutes();
        var secs = c.getSeconds();
        if (hours > 12) {
            hours = hours - 12;
        }
        if (mins < 10) {
            mins = "0" + mins;
        }
        if (secs < 10) {
            secs = "0" + secs;
        }
        document.getElementById("hour").innerHTML = hours;
        document.getElementById("min").innerHTML = mins;
        document.getElementById("sec").innerHTML = secs;
    }
    setInterval(clock, 1000);
    return (
        <div className="wapp">
            <div className="wheader">
                <h1>Check your city weather</h1>
            </div>
            <div id="time">
                <span id="hour"></span><span>:</span>
                <span id="min"></span><span>:</span>
                <span id="sec"></span>
            </div>
            <div className="search">
            <input value={location} onChange={event => setLocation(event.target.value)} onKeyPress={searchLocation} placeholder='Enter Location...' type="text" />
            </div>
            <div className="wcontainer">
                <div className="top">
                    <div className="location">
                        <h3>{data.name}</h3>
                    </div>
                    <div className="temp">
                        {data.main ? <h2>{Math.round((data.main.temp - 32) * (5 / 9))}°C</h2> : null}
                    </div>
                    <div className="description">
                        {data.weather ? <h4>{data.weather[0].main}</h4> : null}
                    </div>
                </div>
                {data.name !== undefined &&
                    <div className="bottom">
                        <div className="feels">
                            {data.main ? <p className="bold">{Math.round((data.main.feels_like - 32) * (5 / 9))}°C</p> : null}
                            <p>Feels Like</p>
                        </div>
                        <div className="humidity">
                            {data.main ? <p className="bold">{data.main.humidity.toFixed()}</p> : null}
                            <p>Humidity</p>
                        </div>
                        <div className="wind">
                            {data.wind ? <p className="bold">{data.wind.speed.toFixed()}MPH</p> : null}
                            <p>Wind Speed</p>
                        </div>
                    </div>
                }
            </div>
        </div>
    );
}
export default Weather;