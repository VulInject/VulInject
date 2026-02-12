static bool npclass_invoke_HasProperty(NPObject *npobj, NPIdentifier name)
{
npw_return_val_if_fail(rpc_method_invoke_possible(g_rpc_connection), false);

int error = rpc_method_invoke(g_rpc_connection,
RPC_METHOD_NPCLASS_HAS_PROPERTY,
RPC_TYPE_NP_OBJECT, npobj,
RPC_TYPE_NP_IDENTIFIER, &name,
RPC_TYPE_INVALID);

if (error != RPC_ERROR_NO_ERROR) {
npw_perror("NPClass::HasProperty() invoke", error);
return false;
}

uint32_t ret;
error = rpc_method_wait_for_reply(g_rpc_connection, RPC_TYPE_UINT32, &ret, RPC_TYPE_INVALID);

if (error != RPC_ERROR_NO_ERROR) {
npw_perror("NPClass::HasProperty() wait for reply", error);
return false;
}

return ret;
}