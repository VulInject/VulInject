FUN1 (struct VAR1 *VAR2)
{
char VAR3[32];
int VAR4, VAR5;

if (!VAR6)
return;

VAR4 = (VAR7) ?
VAR8 : VAR2->VAR9;

VAR5 = ((VAR4 - 1) *
FUN2(VAR10)) / 100;
if (VAR5 < 1)
VAR5 = 1;
else if (VAR5 > VAR4 - 1)
VAR5 = VAR4 - 1;

switch (VAR2->VAR11->VAR12)
{
case VAR13:
if (!VAR2->VAR3->VAR14)
{
FUN3 (VAR2, &VAR2->VAR3->VAR15,
&VAR2->VAR3->VAR16,
(VAR2->VAR3->VAR15) ?
(-1) * (VAR5) :
(-1) * (VAR5 + VAR4 - 1));
FUN4 (VAR2->VAR11, 2);
}
break;
case VAR17:
if (VAR2->VAR3->VAR15)
{
snprintf (VAR3, sizeof (VAR3), "",
VAR5 + 1);
FUN5 (VAR2, VAR3);
(void) FUN6 ("",
VAR18, VAR2);
}
break;
case VAR19:
break;
}
}