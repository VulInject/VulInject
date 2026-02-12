isc_result_t
isc_keyboard_getchar(isc_keyboard_t *keyboard, unsigned char *cp) {
ssize_t cc;
unsigned char c;
cc_t *controlchars;

REQUIRE(keyboard != NULL);
REQUIRE(cp != NULL);

cc = read(keyboard->fd, &c, 1);
if (cc < 0) {
keyboard->result = ISC_R_IOERROR;
return (keyboard->result);
}

controlchars = keyboard->saved_mode.c_cc;
if (c == controlchars[VINTR] || c == controlchars[VQUIT]) {
keyboard->result = ISC_R_CANCELED;
return (keyboard->result);
}

*cp = c;

return (ISC_R_SUCCESS);
}