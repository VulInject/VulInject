FUN1 (VAR1 *VAR2,
VAR3        *VAR4)
{
ret_t               VAR5;
VAR3    *VAR6, *VAR7;
cherokee_boolean_t  VAR8 = false;

FUN2 (VAR6, VAR7, VAR4) {
VAR9 *VAR10 = FUN3 (VAR6, VAR9, VAR11);

if (VAR10->VAR12 > 0)
continue;

FUN4 (VAR13, "", VAR10->VAR14.VAR15 ? VAR10->VAR14.VAR15 : "");


if (! FUN5 (&VAR10->VAR14)) {
FUN6 (VAR10->VAR14.VAR15);
}


VAR5 = FUN7 (FUN8(VAR2), FUN9(VAR10), NULL);
if (FUN10 (VAR5 != VAR16)) {
VAR8 = true;
}
}

return (VAR8) ? VAR17 : VAR16;
}