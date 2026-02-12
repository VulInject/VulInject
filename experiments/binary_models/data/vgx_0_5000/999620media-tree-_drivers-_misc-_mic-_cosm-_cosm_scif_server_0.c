static int cosm_scif_server(void *unused)
{
struct cosm_device *cdev;
scif_epd_t newepd;
struct scif_port_id port_id;
int rc;

allow_signal(SIGKILL);

while (!kthread_should_stop()) {
rc = scif_accept(listen_epd, &port_id, &newepd,
SCIF_ACCEPT_SYNC);
if (rc < 0) {
if (-ERESTARTSYS != rc)
pr_err("%s %d rc %d\n", __func__, __LINE__, rc);
continue;
}


cdev = cosm_find_cdev_by_id(port_id.node - 1);
if (!cdev)
continue;
cdev->newepd = newepd;
schedule_work(&cdev->scif_work);
}

pr_debug("%s %d Server thread stopped\n", __func__, __LINE__);
return 0;
}