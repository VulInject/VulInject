void qxl_debugfs_add_files(struct qxl_device *qdev,
struct drm_info_list *files,
unsigned int nfiles)
{
unsigned int i;

for (i = 0; i < qdev->debugfs_count; i++) {
if (qdev->debugfs[i].files == files) {

return;
}
}

i = qdev->debugfs_count + 1;
if (i > QXL_DEBUGFS_MAX_COMPONENTS) {
DRM_ERROR("Reached maximum number of debugfs components.\n");
DRM_ERROR("Report so we increase QXL_DEBUGFS_MAX_COMPONENTS.\n");
return;
}
qdev->debugfs[qdev->debugfs_count].files = files;
qdev->debugfs[qdev->debugfs_count].num_files = nfiles;
qdev->debugfs_count = i;
drm_debugfs_create_files(files, nfiles,
qdev->ddev.primary->debugfs_root,
qdev->ddev.primary);
}