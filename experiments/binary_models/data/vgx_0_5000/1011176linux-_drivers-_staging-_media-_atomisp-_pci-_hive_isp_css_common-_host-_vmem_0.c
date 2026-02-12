static void store_vector(
const isp_ID_t		ID,
t_vmem_elem		*to,
const t_vmem_elem	*from)
{
unsigned int i;
unsigned int size = sizeof(short) * ISP_NWAY;

VMEM_ARRAY(v, 2 * ISP_NWAY); 

hive_uedge *data = (hive_uedge *)v;

for (i = 0; i < ISP_NWAY; i++) {
hive_sim_wide_pack(data, (hive_wide)&from[i], ISP_VEC_ELEMBITS, i);
}
assert(ISP_BAMEM_BASE[ID] != (hrt_address) - 1);
ia_css_device_store(ISP_BAMEM_BASE[ID] + (unsigned long)to, &v, size);

hrt_master_port_store(ISP_BAMEM_BASE[ID] + (unsigned long)to, &v, size);
udelay(1); 
}