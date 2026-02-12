static int vc4_v3d_debugfs_ident(struct seq_file *m, void *unused)
{
struct drm_debugfs_entry *entry = m->private;
struct drm_device *dev = entry->dev;
struct vc4_dev *vc4 = to_vc4_dev(dev);
int ret = vc4_v3d_pm_get(vc4);

if (ret == 0) {
uint32_t ident1 = V3D_READ(V3D_IDENT1);
uint32_t nslc = VC4_GET_FIELD(ident1, V3D_IDENT1_NSLC);
uint32_t tups = VC4_GET_FIELD(ident1, V3D_IDENT1_TUPS);
uint32_t qups = VC4_GET_FIELD(ident1, V3D_IDENT1_QUPS);

seq_printf(m, "Revision:   %d\n",
VC4_GET_FIELD(ident1, V3D_IDENT1_REV));
seq_printf(m, "Slices:     %d\n", nslc);
seq_printf(m, "TMUs:       %d\n", nslc * tups);
seq_printf(m, "QPUs:       %d\n", nslc * qups);
seq_printf(m, "Semaphores: %d\n",
VC4_GET_FIELD(ident1, V3D_IDENT1_NSEM));
vc4_v3d_pm_put(vc4);
}

return 0;
}