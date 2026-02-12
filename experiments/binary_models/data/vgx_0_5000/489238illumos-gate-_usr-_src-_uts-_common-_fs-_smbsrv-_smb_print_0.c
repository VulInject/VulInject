smb_sdrc_t
smb_pre_open_print_file(smb_request_t *sr)
{
struct open_param	*op = &sr->arg.open;
char			*path;
char			*identifier;
uint32_t		new_id;
uint16_t		setup;
uint16_t		mode;
int			rc;
static uint32_t		tmp_id = 10000;

bzero(op, sizeof (sr->arg.open));
rc = smbsr_decode_vwv(sr, "ww", &setup, &mode);
if (rc == 0)
rc = smbsr_decode_data(sr, "%S", sr, &identifier);

if (rc == 0) {
path = smb_srm_zalloc(sr, MAXPATHLEN);
op->fqi.fq_path.pn_path = path;
new_id = atomic_inc_32_nv(&tmp_id);
(void) snprintf(path, MAXPATHLEN, "%s%05u", identifier, new_id);
}

op->create_disposition = FILE_OVERWRITE_IF;
op->create_options = FILE_NON_DIRECTORY_FILE;
DTRACE_SMB_START(op__OpenPrintFile, smb_request_t *, sr); 

return ((rc == 0) ? SDRC_SUCCESS : SDRC_ERROR);
}