static bool vgic_its_check_event_id(struct vgic_its *its, struct its_device *device,
u32 event_id)
{
const struct vgic_its_abi *abi = vgic_its_get_abi(its);
int ite_esz = abi->ite_esz;
gpa_t gpa;


if (event_id >= BIT_ULL(device->num_eventid_bits))
return false;

gpa = device->itt_addr + event_id * ite_esz;
return __is_visible_gfn_locked(its, gpa);
}