static int dispatch_mmio_write(struct kvm_vcpu *vcpu, struct kvm_io_device *dev,
gpa_t addr, int len, const void *val)
{
struct vgic_io_device *iodev = kvm_to_vgic_iodev(dev);
const struct vgic_register_region *region;
unsigned long data = vgic_data_mmio_bus_to_host(val, len);

region = vgic_get_mmio_region(vcpu, iodev, addr, len);
if (!region)
return 0;

switch (iodev->iodev_type) {
case IODEV_CPUIF:
region->write(vcpu, addr, len, data);
break;
case IODEV_DIST:
region->write(vcpu, addr, len, data);
break;
case IODEV_REDIST:
region->write(iodev->redist_vcpu, addr, len, data);
break;
case IODEV_ITS:
region->its_write(vcpu->kvm, iodev->its, addr, len, data);
break;
}

return 0;
}