static void set_local_comm_id(struct ib_mad *mad, u32 cm_id)
{
if (mad->mad_hdr.attr_id == CM_SIDR_REQ_ATTR_ID) {
struct cm_sidr_generic_msg *msg =
(struct cm_sidr_generic_msg *)mad;
msg->request_id = cpu_to_be32(cm_id);
} else if (mad->mad_hdr.attr_id == CM_SIDR_REP_ATTR_ID) {
pr_err("trying to set local_comm_id in SIDR_REP\n");
return;
} else {
struct cm_generic_msg *msg = (struct cm_generic_msg *)mad;
msg->local_comm_id = cpu_to_be32(cm_id);
}
}