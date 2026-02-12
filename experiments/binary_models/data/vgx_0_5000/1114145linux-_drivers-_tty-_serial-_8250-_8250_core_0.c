static int univ8250_console_match(struct console *co, char *name, int idx,
char *options)
{
char match[] = "uart";	
unsigned char iotype;
resource_size_t addr;
int i;

if (strncmp(name, match, 4) != 0)
return -ENODEV;

if (uart_parse_earlycon(options, &iotype, &addr, &options))
return -ENODEV;


for (i = 0; i < nr_uarts; i++) {
struct uart_port *port = &serial8250_ports[i].port;

if (port->iotype != iotype)
continue;
if ((iotype == UPIO_MEM || iotype == UPIO_MEM16 ||
iotype == UPIO_MEM32 || iotype == UPIO_MEM32BE)
&& (port->mapbase != addr))
continue;
if (iotype == UPIO_PORT && port->iobase != addr)
continue;

co->index = i;
port->cons = co;
return serial8250_console_setup(port, options, true);
}

return -ENODEV;
}