static void __init setup_legacy_serial_console(int console)
{
struct legacy_serial_info *info = &legacy_serial_infos[console];
struct plat_serial8250_port *port = &legacy_serial_ports[console];
void __iomem *addr;
unsigned int stride;

stride = 1 << port->regshift;


if (info->taddr) {
addr = ioremap(info->taddr, 0x1000);
if (addr == NULL)
return;
udbg_uart_init_mmio(addr, stride);
} else {

if (port->iotype == UPIO_PORT && isa_io_special)
udbg_uart_init_pio(port->iobase, stride);
else
return;
}


if (info->speed == 0)
info->speed = udbg_probe_uart_speed(info->clock);


DBG("default console speed = %d\n", info->speed);
udbg_uart_setup(info->speed, info->clock);
}