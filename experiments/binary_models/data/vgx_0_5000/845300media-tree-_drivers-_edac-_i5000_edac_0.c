static int i5000_init_csrows(struct mem_ctl_info *mci)
{
struct i5000_pvt *pvt;
struct dimm_info *dimm;
int empty, channel_count;
int max_csrows;
int mtr;
int csrow_megs;
int channel;
int slot;

pvt = mci->pvt_info;

channel_count = pvt->maxch;
max_csrows = pvt->maxdimmperch * 2;

empty = 1;		


for (slot = 0; slot < max_csrows; slot++) {
for (channel = 0; channel < pvt->maxch; channel++) {

mtr = determine_mtr(pvt, slot, channel);

if (!MTR_DIMMS_PRESENT(mtr))
continue;

dimm = EDAC_DIMM_PTR(mci->layers, mci->dimms, mci->n_layers,
channel / MAX_BRANCHES,
channel % MAX_BRANCHES, slot);

csrow_megs = pvt->dimm_info[slot][channel].megabytes;
dimm->grain = 8;


dimm->mtype = MEM_FB_DDR2;


if (MTR_DRAM_WIDTH(mtr) == 8)
dimm->dtype = DEV_X8;
else
dimm->dtype = DEV_X4;

dimm->edac_mode = EDAC_S8ECD8ED;
dimm->nr_pages = csrow_megs << 8;
}

empty = 0;
}

return empty;
}