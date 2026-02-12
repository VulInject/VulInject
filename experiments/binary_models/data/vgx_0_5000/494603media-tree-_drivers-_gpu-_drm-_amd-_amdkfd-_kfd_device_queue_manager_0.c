static int create_compute_queue_nocpsch(struct device_queue_manager *dqm,
struct queue *q,
struct qcm_process_device *qpd)
{
int retval;
struct mqd_manager *mqd;

BUG_ON(!dqm || !q || !qpd);

mqd = dqm->ops.get_mqd_manager(dqm, KFD_MQD_TYPE_COMPUTE);
if (mqd == NULL)
return -ENOMEM;

retval = allocate_hqd(dqm, q);
if (retval != 0)
return retval;

retval = mqd->init_mqd(mqd, &q->mqd, &q->mqd_mem_obj,
&q->gart_mqd_addr, &q->properties);
if (retval != 0) {
deallocate_hqd(dqm, q);
return retval;
}

pr_debug("kfd: loading mqd to hqd on pipe (%d) queue (%d)\n",
q->pipe,
q->queue);

retval = mqd->load_mqd(mqd, q->mqd, q->pipe,
q->queue, (uint32_t __user *) q->properties.write_ptr);
if (retval != 0) {
deallocate_hqd(dqm, q);
mqd->uninit_mqd(mqd, q->mqd, q->mqd_mem_obj);
return retval;
}

return 0;
}