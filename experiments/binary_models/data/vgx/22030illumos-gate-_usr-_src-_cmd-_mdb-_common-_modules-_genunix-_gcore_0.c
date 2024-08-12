static void
FUN1(VAR1 *VAR2, char *VAR3, size_t VAR4)
{
VAR5	*VAR6 = VAR2->VAR7;

VAR3[0] = '';
if (VAR6->VAR8 != 0) {
VAR9	*VAR10 = VAR2->VAR11;
mdb_as_t	VAR12;
mdb_proc_t	VAR13;
mdb_vnode_t	VAR14;

if (FUN2(&VAR14, "", "", VAR6->VAR8, 0)
== -1) {
return;
}

if (FUN2(&VAR12, "", "", VAR10->VAR15, 0)
== -1) {
return;
}

if (FUN2(&VAR13, "", "", VAR12.VAR16, 0)
== -1) {
return;
}

if (VAR14.VAR17 == VAR18 && VAR6->VAR8 == VAR13.VAR19) {
(void) strncpy(VAR3, "", VAR4);
}


}
}