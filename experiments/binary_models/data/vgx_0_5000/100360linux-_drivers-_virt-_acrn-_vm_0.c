
LIST_HEAD(acrn_vm_list);

DEFINE_RWLOCK(acrn_vm_list_lock);

struct acrn_vm *acrn_vm_create(struct acrn_vm *vm,
struct acrn_vm_creation *vm_param)
{
int ret;

ret = hcall_create_vm(virt_to_phys(vm_param));
if (ret < 0 || vm_param->vmid == ACRN_INVALID_VMID) {
dev_err(acrn_dev.this_device,
"Failed to create VM! Error: %d\n", ret);
return NULL;
}

mutex_init(&vm->regions_mapping_lock);
INIT_LIST_HEAD(&vm->ioreq_clients);
spin_lock_init(&vm->ioreq_clients_lock);
vm->vmid = vm_param->vmid;
vm->vcpu_num = vm_param->vcpu_num;

if (acrn_ioreq_init(vm, vm_param->ioreq_buf) < 0) {
hcall_destroy_vm(vm_param->vmid);
vm->vmid = ACRN_INVALID_VMID;
return NULL;
}

write_lock_bh(&acrn_vm_list_lock);
list_add(&vm->list, &acrn_vm_list);
write_unlock_bh(&acrn_vm_list_lock);

acrn_ioeventfd_init(vm);
acrn_irqfd_init(vm);
dev_dbg(acrn_dev.this_device, "VM %u created.\n", vm->vmid);
return vm;
}