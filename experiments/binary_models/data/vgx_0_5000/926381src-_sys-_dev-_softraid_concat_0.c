int
sr_concat_create(struct sr_discipline *sd, struct bioc_createraid *bc,
int no_chunk, int64_t coerced_size)
{
int i;

if (no_chunk < 1) {
sr_error(sd->sd_sc, "%s requires one or more chunks",
sd->sd_name);
return EINVAL;
}

sd->sd_meta->ssdi.ssd_size = 0;
for (i = 0; i < no_chunk; i++) {
sd->sd_meta->ssdi.ssd_size +=
sd->sd_vol.sv_chunks[i]->src_size;
}

return sr_concat_init(sd);
}