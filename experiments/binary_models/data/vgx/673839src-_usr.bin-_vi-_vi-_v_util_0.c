int
FUN1(char *VAR1, size_t VAR2)
{
for (; VAR2--; ++VAR1)
if (!FUN2(*VAR1))
return (0);
return (1);
}


void
FUN3(VAR3 *VAR4, char *VAR1, vim_t VAR5)
{
switch (VAR5) {
case VAR6:
FUN4(VAR4, VAR7,
"");
break;
case VAR8:
FUN4(VAR4, VAR9, "");
break;
case VAR10:
FUN4(VAR4, VAR9, "");
break;
case VAR11:
FUN4(VAR4, VAR9, "");
break;
case VAR12:
case VAR13:
FUN4(VAR4,
VAR5 == VAR13 ? VAR9 : VAR7,
"", VAR1);
break;
case VAR14:
FUN4(VAR4, VAR7, "");
break;
case VAR15:
FUN4(VAR4, VAR7, "", VAR1);
break;
}
}