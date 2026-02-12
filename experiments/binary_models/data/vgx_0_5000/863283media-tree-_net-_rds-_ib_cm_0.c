static u32 rds_ib_protocol_compatible(struct rdma_cm_event *event)
{
const struct rds_ib_connect_private *dp = event->param.conn.private_data;
u16 common;
u32 version = 0;




if (!event->param.conn.private_data_len) {
printk(KERN_NOTICE "RDS incoming connection has no private data, "
"rejecting\n");
return 0;
}


if (event->param.conn.private_data_len < sizeof (*dp) ||
dp->dp_protocol_major == 0)
return RDS_PROTOCOL_3_0;

common = be16_to_cpu(dp->dp_protocol_minor_mask) & RDS_IB_SUPPORTED_PROTOCOLS;
if (dp->dp_protocol_major == 3 && common) {
version = RDS_PROTOCOL_3_0;
while ((common >>= 1) != 0)
version++;
} else
printk_ratelimited(KERN_NOTICE "RDS: Connection from %pI4 using incompatible protocol version %u.%u\n",
&dp->dp_saddr,
dp->dp_protocol_major,
dp->dp_protocol_minor);
return version;
}