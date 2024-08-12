int
FUN1(int VAR1, int VAR2, VAR3 *VAR4)
{
char *VAR5 = NULL;
int VAR6 = 0;
struct VAR7 *VAR8;
int VAR9;

VAR8 = malloc(sizeof (struct VAR7));
if (VAR8 == NULL)
return (VAR10);

VAR8->VAR11.VAR12 = VAR2;
if (VAR2 != VAR13) {
for (;;) {
VAR8->VAR11.VAR14 = VAR6;
VAR8->VAR11.VAR15 = VAR5;
do
VAR9 = FUN2(VAR1, VAR16, &VAR8->VAR11);
while (VAR9 == -1 && VAR10 == VAR17);
if (VAR9 == -1)
goto VAR18;
if (VAR8->VAR11.VAR14 <= VAR6)
break;

if (VAR5)
free(VAR5);
VAR6 = VAR8->VAR11.VAR14;
VAR5 = malloc(VAR6);
if (VAR5 == NULL)
goto VAR18;
}
if ((VAR10 = FUN3(VAR8->VAR11.VAR15,
VAR8->VAR11.VAR14, &VAR8->VAR19, 0)) != 0)
goto VAR18;

free(VAR5);
VAR5 = NULL;

} else {
VAR8->VAR11.VAR14 = 0;
VAR8->VAR19 = NULL;
if (FUN2(VAR1, VAR16, &VAR8->VAR11) == -1)
goto VAR18;
}

*VAR4 = VAR8;
return (0);

VAR18:
VAR9 = VAR10;
if (VAR5)
free(VAR5);
if (VAR8)
free(VAR8);
return (VAR9);
}