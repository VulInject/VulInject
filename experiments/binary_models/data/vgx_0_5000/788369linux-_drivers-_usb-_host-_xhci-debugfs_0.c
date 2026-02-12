void xhci_debugfs_create_slot(struct xhci_hcd *xhci, int slot_id)
{
struct xhci_slot_priv	*priv;
struct xhci_virt_device	*dev = xhci->devs[slot_id];

priv = kzalloc(sizeof(*priv), GFP_KERNEL);
if (!priv)
return;

snprintf(priv->name, sizeof(priv->name), "%02d", slot_id);
priv->root = debugfs_create_dir(priv->name, xhci->debugfs_slots);
priv->dev = dev;
dev->debugfs_private = priv;

xhci_debugfs_create_ring_dir(xhci, &dev->eps[0].ring,
"ep00", priv->root);

xhci_debugfs_create_context_files(xhci, priv->root, slot_id);
}