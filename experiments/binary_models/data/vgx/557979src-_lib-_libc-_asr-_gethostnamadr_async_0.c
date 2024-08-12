static struct VAR1 *
FUN1(VAR2 *VAR3, int VAR4, int VAR5, const char *VAR6,
int VAR7)
{
char	*VAR8[VAR9], VAR10[16], VAR11[VAR12 + 1];
struct	 VAR1 *VAR13;
int	 VAR14, VAR15;

for (;;) {
VAR14 = FUN2(VAR3, VAR8, VAR9, VAR11, sizeof(VAR11));
if (VAR14 == -1) {
VAR16 = 0; 
return (NULL);
}


if (VAR14 < 2)
continue;

if (VAR4 == VAR17) {
for (VAR15 = 1; VAR15 < VAR14; VAR15++) {
if (FUN3(VAR6, VAR8[VAR15]))
continue;
if (FUN4(VAR5, VAR8[0], VAR10) == 1)
goto VAR18;
}
} else {
if (FUN4(VAR5, VAR8[0], VAR10) == 1 &&
memcmp(VAR10, VAR6, VAR7) == 0)
goto VAR18;
}
}

VAR18:
if ((VAR13 = FUN5(VAR5)) == NULL)
return (NULL);
if (FUN6(VAR13, VAR8[1], 0) == -1)
goto VAR19;
for (VAR15 = 2; VAR15 < VAR14; VAR15 ++)
if (FUN7(VAR13, VAR8[VAR15], 0) == -1)
goto VAR19;
if (FUN8(VAR13, VAR10, VAR13->VAR13.VAR20) == -1)
goto VAR19;
return (VAR13);
VAR19:
free(VAR13);
return (NULL);
}