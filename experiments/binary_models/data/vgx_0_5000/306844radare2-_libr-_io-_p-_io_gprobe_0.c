static int sp_open(struct gport *port) {
int ret;
DWORD errors;
COMSTAT status;
DCB dcb;


char *escaped_port_name = r_str_newf ("\\\\.\\%s", port->name);
LPTSTR filename_ = r_sys_conv_utf8_to_win (escaped_port_name);

port->hdl = CreateFile (filename_, GENERIC_READ | GENERIC_WRITE, 0, 0,
OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED, 0);

free (escaped_port_name);

if (port->hdl == INVALID_HANDLE_VALUE) {
return -1;
}


port->timeouts.ReadIntervalTimeout = 0;
port->timeouts.ReadTotalTimeoutMultiplier = 0;
port->timeouts.ReadTotalTimeoutConstant = 0;
port->timeouts.WriteTotalTimeoutMultiplier = 0;
port->timeouts.WriteTotalTimeoutConstant = 0;

if (SetCommTimeouts (port->hdl, &port->timeouts) == 0) {
sp_close (port);
return -1;
}


do {                                                                                             \
memset (&port->ovl, 0, sizeof (port->ovl));                                              \
port->ovl.hEvent = INVALID_HANDLE_VALUE;                                                 \
if ((port->ovl.hEvent = CreateEvent (NULL, TRUE, TRUE, NULL)) == INVALID_HANDLE_VALUE) { \
sp_close (port);                                                                 \
return -1;                                                                       \
}                                                                                        \
} while (0)

INIT_OVERLAPPED (read_ovl);
INIT_OVERLAPPED (write_ovl);
INIT_OVERLAPPED (wait_ovl);


if (SetCommMask (port->hdl, EV_RXCHAR | EV_ERR) == 0) {
sp_close (port);
return -1;
}

port->writing = FALSE;
port->wait_running = FALSE;

ret = restart_wait (port);

if (ret < 0) {
sp_close (port);
return -1;
}

dcb.fBinary = TRUE;
dcb.fDsrSensitivity = FALSE;
dcb.fErrorChar = FALSE;
dcb.fNull = FALSE;
dcb.fAbortOnError = FALSE;

if (ClearCommError (port->hdl, &errors, &status) == 0) {
return -1;
}

dcb.BaudRate = CBR_115200;

dcb.ByteSize = 8;
dcb.Parity = NOPARITY;
dcb.StopBits = ONESTOPBIT;
dcb.fRtsControl = RTS_CONTROL_DISABLE;
dcb.fOutxCtsFlow = FALSE;
dcb.fDtrControl = DTR_CONTROL_DISABLE;
dcb.fOutxDsrFlow = FALSE;
dcb.fInX = FALSE;
dcb.fOutX = FALSE;

if (!SetCommState (port->hdl, &dcb)) {
return -1;
}

return 0;
struct termios tty = {0};

if ((port->fd = r_sandbox_open (port->name, O_NONBLOCK | O_NOCTTY | O_RDWR, 0)) < 0) {
return -1;
}

if (tcgetattr (port->fd, &tty) != 0) {
sp_close (port);
return -1;
}

cfsetospeed (&tty, B115200);
cfsetispeed (&tty, B115200);

tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;
tty.c_iflag &= ~IGNBRK;
tty.c_lflag = 0;
tty.c_oflag = 0;
tty.c_cc[VMIN] = 0;
tty.c_cc[VTIME] = 0;
tty.c_iflag &= ~(IXON | IXOFF | IXANY);

tty.c_cflag |= (CLOCAL | CREAD);
tty.c_cflag &= ~(PARENB | PARODD);
tty.c_cflag &= ~CSTOPB;
tty.c_cflag &= ~CRTSCTS;
tty.c_cflag &= ~020000000000;

if (tcsetattr (port->fd, TCSANOW, &tty) != 0) {
return -1;
}

return 0;
}