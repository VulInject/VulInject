static struct node *
hc_fmri_nodeize(nvlist_t *hcfmri)
{
struct node *pathtree = NULL;
struct node *tmpn;
nvlist_t **hc_prs;
uint_t hc_nprs;
const char *sname;
char *ename;
char *eid;
int e, r;




if (nvlist_lookup_nvlist_array(hcfmri, FM_FMRI_HC_LIST,
&hc_prs, &hc_nprs) != 0) {
out(O_ALTFP, "XFILE: hc FMRI missing %s", FM_FMRI_HC_LIST);
return (NULL);
}

for (e = 0; e < hc_nprs; e++) {
ename = NULL;
eid = NULL;
r = nvlist_lookup_string(hc_prs[e], FM_FMRI_HC_NAME, &ename);
r |= nvlist_lookup_string(hc_prs[e], FM_FMRI_HC_ID, &eid);
if (r != 0) {

continue;
}
sname = stable(ename);
tmpn = tree_name_iterator(
tree_name(sname, IT_VERTICAL, NULL, 0),
tree_num(eid, NULL, 0));

if (pathtree == NULL)
pathtree = tmpn;
else
(void) tree_name_append(pathtree, tmpn);
}

return (pathtree);
}