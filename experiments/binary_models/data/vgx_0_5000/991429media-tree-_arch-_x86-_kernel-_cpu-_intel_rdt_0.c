static bool rdt_get_mem_config(struct rdt_resource *r)
{
union cpuid_0x10_3_eax eax;
union cpuid_0x10_x_edx edx;
u32 ebx, ecx;

cpuid_count(0x00000010, 3, &eax.full, &ebx, &ecx, &edx.full);
r->num_closid = edx.split.cos_max + 1;
r->membw.max_delay = eax.split.max_delay + 1;
r->default_ctrl = MAX_MBA_BW;
if (ecx & MBA_IS_LINEAR) {
r->membw.delay_linear = true;
r->membw.min_bw = MAX_MBA_BW - r->membw.max_delay;
r->membw.bw_gran = MAX_MBA_BW - r->membw.max_delay;
} else {
if (!rdt_get_mb_table(r))
return false;
}
r->data_width = 3;
rdt_get_mba_infofile(r);

r->capable = true;
r->enabled = true;

return true;
}