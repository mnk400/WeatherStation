# Arduino with Node-Red

This project was made in a couple hours as a small project for the IOT class I took in my 5th semester. This could be a nice little project to get a hang of Node-Red/Arduino/sensors. It consists of the following :
- Arduino with a temperature and air quality sensor.
- Node-Red, with a dashboard running on my home network which lets me monitor all the sensor data.
- Arduino connects to Node-Red over serial communation.
- Twitter connection which tweets all the data every 5 minutes.
- Here is the said [twitter account.](https://twitter.com/data_at_mnk400)

#### This is how the dashboard looks like

![](https://i.imgur.com/So6l4bd.png)

There currently is a bug where after a power outage/restart I have to replug a sensor cable otherwise it throws zeros. Expect no further changes to this repository.
