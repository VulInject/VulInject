void
kbd_get_encs(int fd, struct wskbd_encoding_data *encs)
{
int nencodings = 64;

encs->nencodings = nencodings;
while (encs->nencodings == nencodings) {
encs->encodings = reallocarray(encs->encodings,
encs->nencodings, sizeof(kbd_t));
if (encs->encodings == NULL)
err(1, NULL);
if (ioctl(fd, WSKBDIO_GETENCODINGS, encs) == -1)
err(1, "WSKBDIO_GETENCODINGS");
if (encs->nencodings == nencodings) {
nencodings *= 2;
encs->nencodings = nencodings;
}
}
}