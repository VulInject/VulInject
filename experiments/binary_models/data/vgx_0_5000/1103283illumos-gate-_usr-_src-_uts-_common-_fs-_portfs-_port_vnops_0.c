static int
port_getattr(struct vnode *vp, struct vattr *vap, int flags, cred_t *cr,
caller_context_t *ct)
{
port_t	*pp;
extern dev_t portdev;

pp = VTOEP(vp);

vap->va_type = vp->v_type;	
vap->va_mode = 0;		
vap->va_uid = pp->port_uid;	
vap->va_gid = pp->port_gid;	
vap->va_fsid = portdev;		
vap->va_nodeid = (ino64_t)0;	
vap->va_nlink = vp->v_count;	
vap->va_size = (u_offset_t)pp->port_queue.portq_nent; 
vap->va_atime = pp->port_ctime;	
vap->va_mtime = pp->port_ctime;	
vap->va_ctime = pp->port_ctime;	
vap->va_rdev = portdev;		
vap->va_blksize = 0;		
vap->va_nblocks = (fsblkcnt64_t)0;	
vap->va_seq = 0;		

return (0);
}