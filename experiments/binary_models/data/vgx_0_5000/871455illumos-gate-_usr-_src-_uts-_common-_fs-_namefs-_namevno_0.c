static int
nm_close(vnode_t *vp, int flag, int count, offset_t offset, cred_t *crp,
caller_context_t *ct)
{
struct namenode *nodep = VTONM(vp);
int error = 0;

(void) cleanlocks(vp, ttoproc(curthread)->p_pid, 0);
cleanshares(vp, ttoproc(curthread)->p_pid);
error = VOP_CLOSE(nodep->nm_filevp, flag, count, offset, crp, ct);
if (count == 1) {
(void) VOP_FSYNC(nodep->nm_filevp, FSYNC, crp, ct);

if ((nodep->nm_flag & NMNMNT) != 0) {
mutex_enter(&ntable_lock);
nameremove(nodep);
mutex_exit(&ntable_lock);
}
VN_RELE(nodep->nm_filevp);
}
return (error);
}