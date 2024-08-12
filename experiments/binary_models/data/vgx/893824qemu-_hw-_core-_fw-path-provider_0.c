char *FUN1(VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6)
{
VAR7 *VAR8 = (VAR7 *)
FUN2(VAR2, VAR9);

if (VAR8) {
return FUN3(VAR8, VAR4, VAR6);
}

return NULL;
}

static const TypeInfo VAR10 = {
.VAR11          = VAR9,
.VAR12        = VAR13,
.VAR14    = sizeof(VAR15),
};