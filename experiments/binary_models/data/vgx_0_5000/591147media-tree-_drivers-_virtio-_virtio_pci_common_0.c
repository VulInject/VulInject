module_param(force_legacy, bool, 0444);
MODULE_PARM_DESC(force_legacy,
"Force legacy mode for transitional virtio 1 devices");


void vp_synchronize_vectors(struct virtio_device *vdev)
{
struct virtio_pci_device *vp_dev = to_vp_device(vdev);
int i;

if (vp_dev->intx_enabled)
synchronize_irq(vp_dev->pci_dev->irq);

for (i = 0; i < vp_dev->msix_vectors; ++i)
synchronize_irq(pci_irq_vector(vp_dev->pci_dev, i));
}