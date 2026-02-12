static int mux_remove(struct parisc_device *dev)
{
int i, j;
int port_count = (long)dev_get_drvdata(&dev->dev);


for(i = 0; i < port_cnt; ++i) {
if(mux_ports[i].port.mapbase == dev->hpa.start + MUX_OFFSET)
break;
}
BUG_ON(i + port_count > port_cnt);


for(j = 0; j < port_count; ++j, ++i) {
struct uart_port *port = &mux_ports[i].port;

uart_remove_one_port(&mux_driver, port);
if(port->membase)
iounmap(port->membase);
}

release_mem_region(dev->hpa.start + MUX_OFFSET, port_count * MUX_LINE_OFFSET);
return 0;
}