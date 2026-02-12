static void nvmet_execute_identify_nslist(struct nvmet_req *req)
{
static const int buf_size = 4096;
struct nvmet_ctrl *ctrl = req->sq->ctrl;
struct nvmet_ns *ns;
u32 min_nsid = le32_to_cpu(req->cmd->identify.nsid);
__le32 *list;
u16 status = 0;
int i = 0;

list = kzalloc(buf_size, GFP_KERNEL);
if (!list) {
status = NVME_SC_INTERNAL;
goto out;
}

rcu_read_lock();
list_for_each_entry_rcu(ns, &ctrl->subsys->namespaces, dev_link) {
if (ns->nsid <= min_nsid)
continue;
list[i++] = cpu_to_le32(ns->nsid);
if (i == buf_size / sizeof(__le32))
break;
}
rcu_read_unlock();

status = nvmet_copy_to_sgl(req, 0, list, buf_size);

kfree(list);
out:
nvmet_req_complete(req, status);
}