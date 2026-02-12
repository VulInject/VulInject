int rio_unregister_mport(struct rio_mport *port)
{
pr_debug("RIO: %s %s id=%d\n", __func__, port->name, port->id);


if (atomic_cmpxchg(&port->state,
RIO_DEVICE_RUNNING,
RIO_DEVICE_SHUTDOWN) != RIO_DEVICE_RUNNING) {
pr_err("RIO: %s unexpected state transition for mport %s\n",
__func__, port->name);
}

if (port->net && port->net->hport == port) {
rio_net_remove_children(port->net);
rio_free_net(port->net);
}


mutex_lock(&rio_mport_list_lock);
list_del(&port->node);
mutex_unlock(&rio_mport_list_lock);
device_unregister(&port->dev);

return 0;
}