static struct ceph_snap_realm *ceph_create_snap_realm(
struct ceph_mds_client *mdsc,
u64 ino)
{
struct ceph_snap_realm *realm;

realm = kzalloc(sizeof(*realm), GFP_NOFS);
if (!realm)
return ERR_PTR(-ENOMEM);

atomic_set(&realm->nref, 1);    
realm->ino = ino;
INIT_LIST_HEAD(&realm->children);
INIT_LIST_HEAD(&realm->child_item);
INIT_LIST_HEAD(&realm->empty_item);
INIT_LIST_HEAD(&realm->dirty_item);
INIT_LIST_HEAD(&realm->inodes_with_caps);
spin_lock_init(&realm->inodes_with_caps_lock);
__insert_snap_realm(&mdsc->snap_realms, realm);
dout("create_snap_realm %llx %p\n", realm->ino, realm);
return realm;
}