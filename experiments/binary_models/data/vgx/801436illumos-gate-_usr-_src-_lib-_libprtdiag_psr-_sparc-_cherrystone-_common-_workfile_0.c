VAR1
FUN1(picl_nodehdl_t VAR2, char *VAR3,
VAR1 *VAR4, VAR5 *VAR6[])
{
int32_t		VAR7;
int		VAR8;
picl_prophdl_t	VAR9;
picl_prophdl_t	VAR10;
int		VAR11 = 0;

VAR7 = FUN2(VAR2, VAR3, &VAR9,
sizeof (VAR12));
if ((VAR7 != VAR13) && (VAR7 != VAR14)) {
FUN3(FUN4(VAR15,
""
""),
FUN5(VAR7));
return (VAR7);
}

VAR10 = VAR9;
while (FUN6(VAR10, &VAR10) == 0)
++VAR11;

*VAR6 = calloc((VAR11), sizeof (VAR5));
if (*VAR6 == NULL) {

FUN3(FUN4(VAR15,
""
""));
return (VAR16);
}

VAR10 = VAR9;
for (VAR8 = 0; VAR8 < VAR11; VAR8++) {
VAR7 = FUN6(VAR10, &VAR10);
if (VAR7 != 0) {
FUN3(FUN4(VAR15,
""
""),
FUN5(VAR7));
return (VAR7);
}


VAR7 = FUN7(VAR10, &((*VAR6)[VAR8]),
sizeof (VAR5));
if (VAR7 != 0) {
FUN3(FUN4(VAR15,
""
""), FUN5(VAR7));

return (VAR7);
}
}
*VAR4 = VAR11;
return (VAR7);
}