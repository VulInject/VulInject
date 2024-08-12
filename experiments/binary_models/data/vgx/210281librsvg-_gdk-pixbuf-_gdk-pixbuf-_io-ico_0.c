FUN1 (VAR1          *VAR2, 
VAR3     *VAR4, 
VAR5        **VAR6,
VAR5        **VAR7,
VAR8       **VAR9)
{
gint VAR10, VAR11;
VAR12 *VAR13;
VAR14 *VAR15 = NULL;


VAR13 = FUN2 (VAR12, 1);
VAR13->VAR16 = FUN3 (VAR4);
VAR13->VAR17 = FUN4 (VAR4);
VAR13->VAR18 = FUN5 (VAR4) ? 32 : 24;
VAR10 = -1;
VAR11 = -1;


if (VAR6 && *VAR6) {
VAR5 **VAR19;
VAR5 **VAR20;

for (VAR19 = VAR6, VAR20 = VAR7; *VAR19 && *VAR20; VAR19++, VAR20++) {
gint64 VAR21;
if (strcmp (*VAR19, "") == 0) {
if (!FUN6 (*VAR20, 1, 32,
&VAR21, VAR9))
return VAR22;
VAR13->VAR18 = VAR21;
}
else if (strcmp (*VAR19, "") == 0) {
if (!FUN6 (*VAR20, VAR23, VAR24,
&VAR21, VAR9))
return VAR22;
VAR10 = VAR21;
}
else if (strcmp (*VAR19, "") == 0) {
if (!FUN6 (*VAR20, VAR23, VAR24,
&VAR21, VAR9))
return VAR22;
VAR11 = VAR21;
}

}
}

if (!FUN7 (VAR13, VAR4, VAR10, VAR11, VAR9)) {
FUN8 (VAR13);
return VAR22;
}

VAR15 = FUN9 (VAR15, VAR13); 
FUN10 (VAR2, VAR15);

FUN11 (VAR15, (VAR25)VAR26, NULL);
FUN12 (VAR15);

return VAR27;
}