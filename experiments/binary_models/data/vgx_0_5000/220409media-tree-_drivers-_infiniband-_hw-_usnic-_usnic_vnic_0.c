void usnic_vnic_put_resources(struct usnic_vnic_res_chunk *chunk)
{

struct usnic_vnic_res *res;
int i;
struct usnic_vnic *vnic = chunk->vnic;

if (chunk->cnt > 0) {
spin_lock(&vnic->res_lock);
while ((i = --chunk->cnt) >= 0) {
res = chunk->res[i];
chunk->res[i] = NULL;
res->owner = NULL;
vnic->chunks[res->type].free_cnt++;
}
spin_unlock(&vnic->res_lock);
}

kfree(chunk->res);
kfree(chunk);
}