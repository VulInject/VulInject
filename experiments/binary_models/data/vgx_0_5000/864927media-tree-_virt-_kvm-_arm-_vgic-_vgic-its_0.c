static int vgic_its_create(struct kvm_device *dev, u32 type)
{
struct vgic_its *its;

if (type != KVM_DEV_TYPE_ARM_VGIC_ITS)
return -ENODEV;

its = kzalloc(sizeof(struct vgic_its), GFP_KERNEL);
if (!its)
return -ENOMEM;

mutex_init(&its->its_lock);
mutex_init(&its->cmd_lock);

its->vgic_its_base = VGIC_ADDR_UNDEF;

INIT_LIST_HEAD(&its->device_list);
INIT_LIST_HEAD(&its->collection_list);

dev->kvm->arch.vgic.has_its = true;
its->enabled = false;
its->dev = dev;

its->baser_device_table = INITIAL_BASER_VALUE			|
((u64)GITS_BASER_TYPE_DEVICE << GITS_BASER_TYPE_SHIFT);
its->baser_coll_table = INITIAL_BASER_VALUE |
((u64)GITS_BASER_TYPE_COLLECTION << GITS_BASER_TYPE_SHIFT);
dev->kvm->arch.vgic.propbaser = INITIAL_PROPBASER_VALUE;

dev->private = its;

return vgic_its_set_abi(its, NR_ITS_ABIS - 1);
}