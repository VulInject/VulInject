int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR5 *VAR6;
int VAR7, VAR8;

switch (VAR4->argc) {
case 0:

VAR6 = VAR2->VAR6;
if (VAR2->VAR9 == NULL || FUN2(VAR6, VAR10)) {
if ((VAR6 = FUN3(VAR2, NULL)) == NULL)
return (1);
VAR7 = 0;
} else
VAR7 = 1;
VAR8 = 0;
break;
case 1:
if ((VAR6 = FUN3(VAR2, VAR4->argv[0]->VAR11)) == NULL)
return (1);
VAR7 = 0;
VAR8 = 1;
FUN4(VAR2, VAR4->argv[0]->VAR11);
break;
default:
FUN5();
}

if (FUN2(VAR4, VAR12))
return (FUN6(VAR2, VAR4, VAR6, VAR7));


if (FUN7(VAR2, FUN8(VAR4->VAR13, VAR14)))
return (1);


if (FUN9(VAR2, VAR6, NULL, (VAR8 ? VAR15 : 0) |
(FUN8(VAR4->VAR13, VAR14) ? VAR16 : 0)))
return (1);

FUN10(VAR2, VAR17);
return (0);
}