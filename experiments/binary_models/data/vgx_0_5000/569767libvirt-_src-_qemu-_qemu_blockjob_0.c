int
qemuBlockJobRegister(qemuBlockJobData *job,
virDomainObj *vm,
virDomainDiskDef *disk,
bool savestatus)
{
qemuDomainObjPrivate *priv = vm->privateData;

if (disk && QEMU_DOMAIN_DISK_PRIVATE(disk)->blockjob) {
virReportError(VIR_ERR_INTERNAL_ERROR,
_("disk '%s' has a blockjob assigned"), disk->dst);
return -1;
}

if (virHashAddEntry(priv->blockjobs, job->name, virObjectRef(job)) < 0) {
virObjectUnref(job);
return -1;
}

if (disk) {
job->disk = disk;
job->chain = virObjectRef(disk->src);
QEMU_DOMAIN_DISK_PRIVATE(disk)->blockjob = virObjectRef(job);
}

if (savestatus)
qemuDomainSaveStatus(vm);

return 0;
}