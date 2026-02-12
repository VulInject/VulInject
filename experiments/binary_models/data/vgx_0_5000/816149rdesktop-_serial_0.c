static RD_NTSTATUS
serial_read(RD_NTHANDLE handle, uint8 * data, uint32 length, uint64 offset, uint32 * result)
{
UNUSED(offset);  
long timeout;
SERIAL_DEVICE *pser_inf;
struct termios *ptermios;
int bytes_inqueue;


timeout = 90;
pser_inf = get_serial_info(handle);
ptermios = pser_inf->ptermios;


if (pser_inf->read_total_timeout_multiplier | pser_inf->read_total_timeout_constant)
{
timeout =
(pser_inf->read_total_timeout_multiplier * length +
pser_inf->read_total_timeout_constant + 99) / 100;
}
else if (pser_inf->read_interval_timeout)
{
timeout = (pser_inf->read_interval_timeout * length + 99) / 100;
}


if (timeout == 0)
{
ptermios->c_cc[VTIME] = 0;
ptermios->c_cc[VMIN] = 0;
}
else
{
ptermios->c_cc[VTIME] = timeout;
ptermios->c_cc[VMIN] = 1;
}
tcsetattr(handle, TCSANOW, ptermios);

ioctl(handle, TIOCINQ, &bytes_inqueue);
logger(Core, Debug, "serial_read(), inqueue: %d expected %d\n", bytes_inqueue, length);

*result = read(handle, data, length);

logger(Core, Debug, "serial_read(), %d bytes read", *result);

return RD_STATUS_SUCCESS;
}