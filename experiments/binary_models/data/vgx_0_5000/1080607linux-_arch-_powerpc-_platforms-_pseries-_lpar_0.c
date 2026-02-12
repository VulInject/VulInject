static unsigned long call_block_remove(unsigned long idx, unsigned long *param,
bool retry_busy)
{
unsigned long i, rc, new_idx;
unsigned long retbuf[PLPAR_HCALL9_BUFSIZE];

if (idx < 2) {
pr_warn("Unexpected empty call to H_BLOCK_REMOVE");
return 0;
}
again:
new_idx = 0;
if (idx > PLPAR_HCALL9_BUFSIZE) {
pr_err("Too many PTEs (%lu) for H_BLOCK_REMOVE", idx);
idx = PLPAR_HCALL9_BUFSIZE;
} else if (idx < PLPAR_HCALL9_BUFSIZE)
param[idx] = HBR_END;

rc = plpar_hcall9(H_BLOCK_REMOVE, retbuf,
param[0], 
param[1],  param[2],  param[3],  param[4], 
param[5],  param[6],  param[7],  param[8]);
if (rc == H_SUCCESS)
return 0;

BUG_ON(rc != H_PARTIAL);


for (i = 0; i < idx-1; i++) {
unsigned long ctrl = retbuf[i] & HBLKR_CTRL_MASK;

if (ctrl == HBLKR_CTRL_ERRBUSY) {
param[++new_idx] = param[i+1];
continue;
}

BUG_ON(ctrl != HBLKR_CTRL_SUCCESS
&& ctrl != HBLKR_CTRL_ERRNOTFOUND);
}


if (new_idx && (retry_busy || new_idx == (PLPAR_HCALL9_BUFSIZE-1))) {
idx = new_idx + 1;
goto again;
}

return new_idx;
}