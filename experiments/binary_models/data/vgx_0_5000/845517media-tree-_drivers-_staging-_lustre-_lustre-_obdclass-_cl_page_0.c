}
EXPORT_SYMBOL(cl_page_own_try);


void cl_page_assume(const struct lu_env *env,
struct cl_io *io, struct cl_page *pg)
{
PINVRNT(env, pg, cl_object_same(pg->cp_obj, io->ci_obj));

io = cl_io_top(io);

cl_page_invoid(env, io, pg, CL_PAGE_OP(cpo_assume));
PASSERT(env, pg, !pg->cp_owner);
pg->cp_owner = cl_io_top(io);
cl_page_owner_set(pg);
cl_page_state_set(env, pg, CPS_OWNED);
}