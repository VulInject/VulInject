static void xdr_encode_AFS_StoreStatus(__be32 **_bp, struct iattr *attr)
{
__be32 *bp = *_bp;
u32 mask = 0, mtime = 0, owner = 0, group = 0, mode = 0;

mask = 0;
if (attr->ia_valid & ATTR_MTIME) {
mask |= AFS_SET_MTIME;
mtime = attr->ia_mtime.tv_sec;
}

if (attr->ia_valid & ATTR_UID) {
mask |= AFS_SET_OWNER;
owner = from_kuid(&init_user_ns, attr->ia_uid);
}

if (attr->ia_valid & ATTR_GID) {
mask |= AFS_SET_GROUP;
group = from_kgid(&init_user_ns, attr->ia_gid);
}

if (attr->ia_valid & ATTR_MODE) {
mask |= AFS_SET_MODE;
mode = attr->ia_mode & S_IALLUGO;
}

*bp++ = htonl(mask);
*bp++ = htonl(mtime);
*bp++ = htonl(owner);
*bp++ = htonl(group);
*bp++ = htonl(mode);
*bp++ = 0;		
*_bp = bp;
}