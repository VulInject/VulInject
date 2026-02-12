static int smic_get_result(struct si_sm_data *smic,
unsigned char *data, unsigned int length)
{
int i;

if (smic_debug & SMIC_DEBUG_MSG) {
dev_dbg(smic->io->dev, "smic_get result -");
for (i = 0; i < smic->read_pos; i++)
pr_cont(" %02x", smic->read_data[i]);
pr_cont("\n");
}
if (length < smic->read_pos) {
smic->read_pos = length;
smic->truncated = 1;
}
memcpy(data, smic->read_data, smic->read_pos);

if ((length >= 3) && (smic->read_pos < 3)) {
data[2] = IPMI_ERR_UNSPECIFIED;
smic->read_pos = 3;
}
if (smic->truncated) {
data[2] = IPMI_ERR_MSG_TRUNCATED;
smic->truncated = 0;
}
return smic->read_pos;
}