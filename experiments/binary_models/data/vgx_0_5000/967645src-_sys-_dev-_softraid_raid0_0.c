int
sr_raid0_create(struct sr_discipline *sd, struct bioc_createraid *bc,
int no_chunk, int64_t coerced_size)
{
if (no_chunk < 2) {
sr_error(sd->sd_sc, "%s requires two or more chunks",
sd->sd_name);
return EINVAL;
}


sd->sd_meta->ssdi.ssd_strip_size = MAXPHYS;
sd->sd_meta->ssdi.ssd_size = (coerced_size &
~(((u_int64_t)sd->sd_meta->ssdi.ssd_strip_size >>
DEV_BSHIFT) - 1)) * no_chunk;

return sr_raid0_init(sd);
}