int rvu_mbox_handler_mcs_flowid_entry_write(struct rvu *rvu,
struct mcs_flowid_entry_write_req *req,
struct msg_rsp *rsp)
{
struct secy_mem_map map;
struct mcs *mcs;

if (req->mcs_id >= rvu->mcs_blk_cnt)
return MCS_AF_ERR_INVALID_MCSID;

mcs = mcs_get_pdata(req->mcs_id);


mcs_flowid_entry_write(mcs, req->data, req->mask,
req->flow_id, req->dir);
map.secy = req->secy_id;
map.sc = req->sc_id;
map.ctrl_pkt = req->ctrl_pkt;
map.flow_id = req->flow_id;
map.sci = req->sci;
mcs->mcs_ops->mcs_flowid_secy_map(mcs, &map, req->dir);
if (req->ena)
mcs_ena_dis_flowid_entry(mcs, req->flow_id,
req->dir, true);
return 0;
}