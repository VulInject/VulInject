void usb_port_reset ( USBPort * port ) { USBDevice * dev = port -> dev ; assert ( dev != NULL ) ; usb_detach ( port , NULL ) ; usb_attach ( port ) ; usb_device_reset ( dev ) ; } 