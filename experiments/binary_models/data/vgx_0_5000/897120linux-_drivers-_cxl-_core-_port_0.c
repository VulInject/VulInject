static ssize_t emit_target_list(struct cxl_switch_decoder *cxlsd, char *buf)
{
struct cxl_decoder *cxld = &cxlsd->cxld;
ssize_t offset = 0;
int i, rc = 0;

for (i = 0; i < cxld->interleave_ways; i++) {
struct cxl_dport *dport = cxlsd->target[i];
struct cxl_dport *next = NULL;

if (!dport)
break;

if (i + 1 < cxld->interleave_ways)
next = cxlsd->target[i + 1];
rc = sysfs_emit_at(buf, offset, "%d%s", dport->port_id,
next ? "," : "");
if (rc < 0)
return rc;
offset += rc;
}

return offset;
}