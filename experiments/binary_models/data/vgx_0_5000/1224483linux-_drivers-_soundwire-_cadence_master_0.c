struct sdw_cdns_pdi *sdw_cdns_alloc_pdi(struct sdw_cdns *cdns,
struct sdw_cdns_streams *stream,
u32 ch, u32 dir, int dai_id)
{
struct sdw_cdns_pdi *pdi = NULL;

if (dir == SDW_DATA_DIR_RX)
pdi = cdns_find_pdi(cdns, 0, stream->num_in, stream->in,
dai_id);
else
pdi = cdns_find_pdi(cdns, 0, stream->num_out, stream->out,
dai_id);


if (!pdi)
pdi = cdns_find_pdi(cdns, 2, stream->num_bd, stream->bd,
dai_id);

if (pdi) {
pdi->l_ch_num = 0;
pdi->h_ch_num = ch - 1;
pdi->dir = dir;
pdi->ch_count = ch;
}

return pdi;
}