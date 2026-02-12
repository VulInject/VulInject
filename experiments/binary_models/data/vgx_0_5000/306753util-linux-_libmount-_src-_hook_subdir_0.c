static void free_hookset_data(	struct libmnt_context *cxt,
const struct libmnt_hookset *hs)
{
struct hookset_data *hsd = mnt_context_get_hookset_data(cxt, hs);

if (!hsd)
return;
if (hsd->old_ns_fd >= 0)
tmptgt_cleanup(hsd->old_ns_fd);

free(hsd->org_target);
free(hsd->subdir);
free(hsd);

mnt_context_set_hookset_data(cxt, hs, NULL);
}