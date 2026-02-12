void
wpa_supplicant_scan(void *eloop_ctx, void *timeout_ctx)
{
struct wpa_supplicant *wpa_s = eloop_ctx;
struct wpa_ssid *ssid;

if (wpa_s->conf == NULL)
return;

if (wpa_s->wpa_state == WPA_DISCONNECTED)
wpa_s->wpa_state = WPA_SCANNING;

ssid = wpa_s->conf->ssid;
wpa_printf(MSG_DEBUG, "Starting AP scan (%s SSID)",
ssid ? "specific": "broadcast");

if (ssid) {
wpa_printf(MSG_DEBUG, "Scan SSID: %s", ssid->ssid);
}

if (wpa_s->driver->scan(wpa_s->handle, wpa_s->linkid)) {
wpa_printf(MSG_WARNING, "Failed to initiate AP scan.");
}
}