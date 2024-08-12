static int
FUN1(picl_nodehdl_t VAR1, void *VAR2)
{
picl_nodehdl_t		VAR3;
uint32_t		VAR4;
int			VAR5;
ptree_propinfo_t	VAR6;

for (VAR5 = FUN2(VAR1, VAR7, &VAR3,
sizeof (VAR8)); VAR5 != VAR9;
VAR5 = FUN2(VAR3, VAR10, &VAR3,
sizeof (VAR8))) {
if (VAR5 != VAR11)
return (VAR5);

if (FUN3(VAR3, &VAR4) != 0)
continue;
(void) FUN4(&VAR6, VAR12,
VAR13, VAR14, sizeof (VAR15),
VAR16, NULL, NULL);
(void) FUN5(VAR3, &VAR6, &VAR4, NULL);
}

return (VAR17);
}