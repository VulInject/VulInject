static int
smb_query_pathname(smb_request_t *sr, smb_node_t *node, boolean_t include_share,
smb_queryinfo_t *qinfo)
{
smb_tree_t *tree = sr->tid_tree;
char *buf = qinfo->qi_name;
size_t buflen = MAXPATHLEN;
size_t len;
int rc;

if (include_share) {
len = snprintf(buf, buflen, "\\%s", tree->t_sharename);
if (len == (buflen - 1))
return (ENAMETOOLONG);

buf += len;
buflen -= len;
}

if (node == tree->t_snode) {
if (!include_share)
(void) strlcpy(buf, "\\", buflen);
return (0);
}

rc =  smb_node_getshrpath(node, tree, buf, buflen);
if (rc == 0) {
qinfo->qi_namelen =
smb_ascii_or_unicode_strlen(sr, qinfo->qi_name);
if (qinfo->qi_namelen == 1)
qinfo->qi_namelen = 2;
}
return (rc);
}