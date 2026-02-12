int hax_host_create_vm(struct hax_state *hax, int *vmid)
{
int ret;
int vm_id = 0;
DWORD dSize = 0;

if (hax_invalid_fd(hax->fd)) {
return -EINVAL;
}

if (hax->vm) {
return 0;
}

ret = DeviceIoControl(hax->fd,
HAX_IOCTL_CREATE_VM,
NULL, 0, &vm_id, sizeof(vm_id), &dSize,
(LPOVERLAPPED) NULL);
if (!ret) {
fprintf(stderr, "Failed to create VM. Error code: %lu\n",
GetLastError());
return -1;
}
*vmid = vm_id;
return 0;
}