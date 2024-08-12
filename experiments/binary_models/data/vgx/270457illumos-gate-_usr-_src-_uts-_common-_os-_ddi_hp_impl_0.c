int
FUN1(VAR1 *VAR2)
{
ddi_hp_cn_state_t	VAR3;
int			VAR4;

FUN2((VAR5, "",
(void *)VAR2->VAR6, (void *)VAR2));

FUN3(FUN4(VAR2->VAR6));

FUN5(VAR2, VAR7,
NULL, (void *)&VAR3, VAR4);
if (VAR4 != VAR8) {
FUN2((VAR5, ""
"", (void *)VAR2));

return (VAR4);
}

FUN2((VAR5, ""
"",
(void *)VAR2, VAR2->VAR9.VAR10, VAR3));

if (VAR3 != VAR2->VAR9.VAR10) {
VAR2->VAR9.VAR10 = VAR3;
FUN6(VAR2);
}

return (VAR4);
}