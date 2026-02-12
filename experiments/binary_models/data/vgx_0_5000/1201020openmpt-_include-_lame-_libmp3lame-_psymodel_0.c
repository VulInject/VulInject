static void
vbrpsy_apply_block_type(PsyStateVar_t * psv, int nch, int const *uselongblock, int *blocktype_d)
{
int     chn;


for (chn = 0; chn < nch; chn++) {
int     blocktype = NORM_TYPE;


if (uselongblock[chn]) {

assert(psv->blocktype_old[chn] != START_TYPE);
if (psv->blocktype_old[chn] == SHORT_TYPE)
blocktype = STOP_TYPE;
}
else {

blocktype = SHORT_TYPE;
if (psv->blocktype_old[chn] == NORM_TYPE) {
psv->blocktype_old[chn] = START_TYPE;
}
if (psv->blocktype_old[chn] == STOP_TYPE)
psv->blocktype_old[chn] = SHORT_TYPE;
}

blocktype_d[chn] = psv->blocktype_old[chn]; 
psv->blocktype_old[chn] = blocktype; 
}
}