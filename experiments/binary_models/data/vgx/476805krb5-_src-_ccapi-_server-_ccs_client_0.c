cc_int32 FUN1 (ccs_client_t                VAR1,
ccs_generic_list_iterator_t VAR2)
{
cc_int32 VAR3 = VAR4;

if (!VAR1  ) { VAR3 = FUN2 (VAR5); }
if (!VAR2) { VAR3 = FUN2 (VAR5); }

if (!VAR3) {
VAR3 = FUN3 (VAR1->VAR6, VAR2,
FUN4 (VAR1->VAR6));
}

return FUN2 (VAR3);
}