static int wm831x_rtc_stop_alarm ( struct wm831x_rtc * wm831x_rtc ) { return wm831x_set_bits ( wm831x_rtc -> wm831x , WM831X_RTC_CONTROL , WM831X_RTC_ALM_ENA , 0 ) ; } 