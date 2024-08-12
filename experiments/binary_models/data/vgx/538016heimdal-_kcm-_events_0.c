VAR1
FUN1(krb5_context VAR2,
VAR3 *VAR4)
{
VAR3 **VAR5;

if (VAR4->VAR6 == VAR7)
return 0;

for (VAR5 = &VAR8; *VAR5 != NULL; VAR5 = &(*VAR5)->VAR9)
;

*VAR5 = (VAR3 *)malloc(sizeof(VAR3));
if (*VAR5 == NULL) {
return VAR10;
}

(*VAR5)->VAR11 = 1;
(*VAR5)->VAR12 = VAR4->VAR12;
(*VAR5)->VAR13 = 0;
(*VAR5)->VAR14 = VAR4->VAR14;
(*VAR5)->VAR15 = VAR4->VAR15;

(*VAR5)->VAR6 = VAR4->VAR6;

FUN2(VAR2, VAR4->VAR16);
(*VAR5)->VAR16 = VAR4->VAR16;
(*VAR5)->VAR9 = NULL;

FUN3(*VAR5, "");

return 0;
}