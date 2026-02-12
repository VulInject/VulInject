void acrn_ioreq_request_clear(struct acrn_vm *vm)
{
struct acrn_ioreq_client *client;
bool has_pending = false;
unsigned long vcpu;
int retry = 10;


set_bit(ACRN_VM_FLAG_CLEARING_IOREQ, &vm->flags);


do {
spin_lock_bh(&vm->ioreq_clients_lock);
list_for_each_entry(client, &vm->ioreq_clients, list) {
has_pending = has_pending_request(client);
if (has_pending)
break;
}
spin_unlock_bh(&vm->ioreq_clients_lock);

if (has_pending)
schedule_timeout_interruptible(HZ / 100);
} while (has_pending && --retry > 0);
if (retry == 0)
dev_warn(acrn_dev.this_device,
"%s cannot flush pending request!\n", client->name);


spin_lock_bh(&vm->ioreq_clients_lock);
client = vm->default_client;
if (client) {
for_each_set_bit(vcpu, client->ioreqs_map, ACRN_IO_REQUEST_MAX)
acrn_ioreq_complete_request(client, vcpu, NULL);
}
spin_unlock_bh(&vm->ioreq_clients_lock);


clear_bit(ACRN_VM_FLAG_CLEARING_IOREQ, &vm->flags);
}