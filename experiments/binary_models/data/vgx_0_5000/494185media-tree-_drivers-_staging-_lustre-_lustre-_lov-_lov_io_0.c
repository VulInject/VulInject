int lov_io_init_raid0(const struct lu_env *env, struct cl_object *obj,
struct cl_io *io)
{
struct lov_io       *lio = lov_env_io(env);
struct lov_object   *lov = cl2lov(obj);

INIT_LIST_HEAD(&lio->lis_active);
io->ci_result = lov_io_slice_init(lio, lov, io);
if (io->ci_result == 0) {
io->ci_result = lov_io_subio_init(env, lio, io);
if (io->ci_result == 0) {
cl_io_slice_add(io, &lio->lis_cl, obj, &lov_io_ops);
atomic_inc(&lov->lo_active_ios);
}
}
return io->ci_result;
}