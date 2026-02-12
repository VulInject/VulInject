static int op_mix_use(struct MixmasterPrivateData *priv, int op)
{

if (win_chain_get_length(priv->win_chain) == 0)
op_mix_insert(priv, op);

if (win_chain_validate(priv->win_chain))
return FR_DONE;

return FR_SUCCESS;
}




struct MixmasterFunction MixmasterFunctions[] = {

{ OP_EXIT,                 op_exit           },
{ OP_GENERIC_SELECT_ENTRY, op_mix_append     },
{ OP_MIX_APPEND,           op_mix_append     },
{ OP_MIX_CHAIN_NEXT,       op_mix_chain_next },
{ OP_MIX_CHAIN_PREV,       op_mix_chain_prev },
{ OP_MIX_DELETE,           op_mix_delete     },
{ OP_MIX_INSERT,           op_mix_insert     },
{ OP_MIX_USE,              op_mix_use        },
{ 0, NULL },

};