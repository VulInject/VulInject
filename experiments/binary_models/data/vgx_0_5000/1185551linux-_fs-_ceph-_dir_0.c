int ceph_trim_dentries(struct ceph_mds_client *mdsc)
{
struct ceph_lease_walk_control lwc;
unsigned long count;
unsigned long freed;

spin_lock(&mdsc->caps_list_lock);
if (mdsc->caps_use_max > 0 &&
mdsc->caps_use_count > mdsc->caps_use_max)
count = mdsc->caps_use_count - mdsc->caps_use_max;
else
count = 0;
spin_unlock(&mdsc->caps_list_lock);

lwc.dir_lease = false;
lwc.nr_to_scan  = CEPH_CAPS_PER_RELEASE * 2;
freed = __dentry_leases_walk(mdsc, &lwc, __dentry_lease_check);
if (!lwc.nr_to_scan) 
return -EAGAIN;

if (lwc.nr_to_scan < CEPH_CAPS_PER_RELEASE)
lwc.nr_to_scan = CEPH_CAPS_PER_RELEASE;

lwc.dir_lease = true;
lwc.expire_dir_lease = freed < count;
lwc.dir_lease_ttl = mdsc->fsc->mount_options->caps_wanted_delay_max * HZ;
freed +=__dentry_leases_walk(mdsc, &lwc, __dir_lease_check);
if (!lwc.nr_to_scan) 
return -EAGAIN;

return freed > 0 ? 1 : 0;
}