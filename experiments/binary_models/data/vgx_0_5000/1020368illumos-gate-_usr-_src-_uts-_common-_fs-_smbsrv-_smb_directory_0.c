* The creator's access rights to the new directory are be determined by
* local policy on the server.
*
* Server Response                    Description
* ================================== =================================
* UCHAR WordCount;                   Count of parameter words = 0
* USHORT ByteCount;                  Count of data bytes = 0
*/
smb_sdrc_t
smb_pre_create_directory(smb_request_t *sr)
{
int rc;

rc = smbsr_decode_data(sr, "%S", sr,
&sr->arg.dirop.fqi.fq_path.pn_path);

DTRACE_SMB_START(op__CreateDirectory, smb_request_t *, sr);

return ((rc == 0) ? SDRC_SUCCESS : SDRC_ERROR);
}