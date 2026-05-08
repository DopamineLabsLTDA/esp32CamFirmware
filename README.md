# exp32CamFirmware

>[!IMPORTANT]
> This is a fork of the project by @rzeldent: [ESP32CAM-RTSP](https://github.com/rzeldent/esp32cam-rtsp).
> This incorporates additional functionalities needed for the proper integration with the `Curious Beagle` platform. 


>[!NOTE]
> A tool for flashing cameras tailored to the `Curious Beagle` platform is also provided on: [rexCameras](https://github.com/DopamineLabsLTDA/rexCameras).


**This firmware allows to deploy a RTSP stram and configuration web-interface onto the ESP32 based cameras.**


## Summary 

The firmware implements a simple web-server onto each of the cameras. By connecting directly onto the camera's assigned IP, one can access to the camera's configuration panel and perform basic information changes, network changes and image and video changes. 

A RTSP stream is generated from the MJPEG stream of the camera. This allows for better video and connectivity with the backend. 

>[!WARNING]
>This type of MJPEG RTSP stream is not supported by typical streaming platforms, for example, cloudflare's stream platfors, as they are expecting a H.264 video stream.
>To relay the stream to this type of platforms, transcoding is required. 
> go2RTC project allows to properly deliver this MJPEG RTSP withouth transcoding to end-users. One of the reasons why it was selected as the `Curious Beagle` platform video module. 

The firmware also detects the presence of a network change. In the event the camera cannot connect to the network, for any reason (i.e password change), the camera will setup an access-point (AP) on which one can connect and directly stream or configurate the device. 

## Additional functionalities



## Manual flashing


## Known issues