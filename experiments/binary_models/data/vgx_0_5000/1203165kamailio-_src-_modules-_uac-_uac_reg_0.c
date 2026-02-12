static void rpc_uac_reg_active(rpc_t* rpc, void* ctx)
{
int omode;
int nmode;
void* th;

if(reg_active==NULL) {
rpc->fault(ctx, 500, "Not initialized");
return;
}
if(rpc->scan(ctx, "d", &nmode)<1) {
LM_ERR("missing parameter");
rpc->fault(ctx, 500, "Missing parameter");
return;
}
omode = *reg_active;
*reg_active = (nmode)?1:0;


if (rpc->add(ctx, "{", &th) < 0) {
rpc->fault(ctx, 500, "Internal error creating rpc struct");
return;
}
if(rpc->struct_add(th, "dd", "omode", omode, "nmode", nmode)<0) {
rpc->fault(ctx, 500, "Internal error creating response");
return;
}
}