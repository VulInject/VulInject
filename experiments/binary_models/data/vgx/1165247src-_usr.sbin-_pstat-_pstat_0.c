void
FUN1(struct VAR1 *VAR2)
{
char *VAR3, VAR4[20];
int VAR5, VAR6;

if (VAR7 || (VAR3 = FUN2(VAR2->VAR8, VAR9)) == NULL)
(void)FUN3("", FUN4(VAR2->VAR8), FUN5(VAR2->VAR8));
else
(void)FUN3("", VAR3);
(void)FUN3("", VAR2->VAR10, VAR2->VAR11);
(void)FUN3("", VAR2->VAR12,
VAR2->VAR13, VAR2->VAR14, VAR2->VAR15);
for (VAR5 = VAR6 = 0; VAR16[VAR5].VAR17; VAR5++)
if (VAR2->VAR18&VAR16[VAR5].VAR17)
VAR4[VAR6++] = VAR16[VAR5].VAR19;
if (VAR6 == 0)
VAR4[VAR6++] = '';
VAR4[VAR6] = '';
(void)FUN3("", VAR4,
VAR20 ? 0 : (VAR21)VAR2->VAR22 & 0xffffffff);
(void)FUN3("", VAR2->VAR23);
switch (VAR2->VAR24) {
case VAR25:
(void)FUN3("");
break;
case VAR26:
(void)FUN3("");
break;
case VAR27:
(void)FUN3("");
break;
default:
(void)FUN3("", VAR2->VAR24);
break;
}
}