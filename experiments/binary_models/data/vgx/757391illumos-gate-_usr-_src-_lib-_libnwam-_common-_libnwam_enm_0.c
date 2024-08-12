static int
FUN1(struct VAR1 *VAR2, uint64_t VAR3, void *VAR4)
{
nwam_enm_handle_t VAR5 = VAR2;
uint64_t VAR6, VAR7, VAR8;
nwam_value_t VAR9;


if (FUN2(VAR5, VAR10,
&VAR9) != VAR11) {
return (VAR12);
}
if (FUN3(VAR9, &VAR6) != VAR11) {
FUN4(VAR9);
return (VAR12);
}

VAR7 = FUN5(VAR6);
FUN4(VAR9);
if ((VAR8 = VAR3 & VAR13) == 0)
VAR8 = VAR14;
if (VAR7 & VAR8)
return (VAR11);
return (VAR12);
}