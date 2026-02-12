static uint32_t
smb2_fsctl_copychunk_array(smb_request_t *sr, smb_ofile_t *src_of,
struct copychunk_resp *ccr)
{
copychunk_args_t *args = sr->arg.other;
chunk_t *cc;
uint64_t src_size = args->src_attr.sa_vattr.va_size;
uint32_t save_len;
uint32_t copied;
uint32_t status = 0;
int i;

for (i = 0; i < args->ccnt; i++) {
cc = &args->cvec[i];


if (cc->src_off > src_size ||
(cc->src_off + cc->length) < cc->src_off ||
(cc->src_off + cc->length) > src_size) {
status = NT_STATUS_INVALID_VIEW_SIZE;
goto out;
}

save_len = cc->length;
status = smb2_fsctl_copychunk_1(sr, src_of, cc);
if (status != 0) {

break;
}

copied = save_len - cc->length;
ccr->TotalBytesWritten += copied;
if (cc->length != 0) {

ccr->ChunkBytesWritten = copied;
break;
}

ccr->ChunksWritten++;
}
if (ccr->ChunksWritten > 0)
status = NT_STATUS_SUCCESS;

out:
return (status);
}