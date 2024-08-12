static void
FUN1(const char *VAR1, int VAR2)
{
VAR3		   *VAR4;
struct VAR5 *VAR6;
char		VAR7[VAR8 * 2];


FUN2((VAR2 & (VAR9 | VAR10)) != 0);


if ((VAR2 & VAR9) != 0)
{
VAR11	   *VAR12;
HASHCTL		VAR13;


VAR13.VAR14 = sizeof(VAR15);
VAR13.VAR16 = sizeof(VAR17);
VAR13.VAR18 = VAR19;
VAR12 = FUN3("", 32, &VAR13,
VAR20 | VAR21 | VAR22);


VAR4 = FUN4(VAR1);
while ((VAR6 = FUN5(VAR4, VAR1)) != NULL)
{
ForkNumber	VAR23;
int			VAR24;
unlogged_relation_entry VAR25;


if (!FUN6(VAR6->VAR26, &VAR24,
&VAR23))
continue;


if (VAR23 != VAR27)
continue;


VAR25.VAR28 = FUN7(VAR6->VAR26);
(void) FUN8(VAR12, &VAR25, VAR29, NULL);
}


FUN9(VAR4);


if (FUN10(VAR12) == 0)
{
FUN11(VAR12);
return;
}


VAR4 = FUN4(VAR1);
while ((VAR6 = FUN5(VAR4, VAR1)) != NULL)
{
ForkNumber	VAR23;
int			VAR24;
unlogged_relation_entry VAR25;


if (!FUN6(VAR6->VAR26, &VAR24,
&VAR23))
continue;


if (VAR23 == VAR27)
continue;


VAR25.VAR28 = FUN7(VAR6->VAR26);
if (FUN8(VAR12, &VAR25, VAR30, NULL))
{
snprintf(VAR7, sizeof(VAR7), "",
VAR1, VAR6->VAR26);
if (unlink(VAR7) < 0)
FUN12(VAR31,
(FUN13(),
FUN14(""%VAR32\"",
VAR7)));
else
FUN15(VAR33, ""%VAR32\"", VAR7);
}
}


FUN9(VAR4);
FUN11(VAR12);
}


if ((VAR2 & VAR10) != 0)
{

VAR4 = FUN4(VAR1);
while ((VAR6 = FUN5(VAR4, VAR1)) != NULL)
{
ForkNumber	VAR23;
int			VAR24;
char		VAR34[VAR35 + 1];
char		VAR36[VAR8 * 2];
char		VAR37[VAR8];


if (!FUN6(VAR6->VAR26, &VAR24,
&VAR23))
continue;


if (VAR23 != VAR27)
continue;


snprintf(VAR36, sizeof(VAR36), "",
VAR1, VAR6->VAR26);


memcpy(VAR34, VAR6->VAR26, VAR24);
VAR34[VAR24] = '';
snprintf(VAR37, sizeof(VAR37), "",
VAR1, VAR34, VAR6->VAR26 + VAR24 + 1 +
strlen(VAR38[VAR27]));


FUN15(VAR33, "", VAR36, VAR37);
FUN16(VAR36, VAR37);
}

FUN9(VAR4);


VAR4 = FUN4(VAR1);
while ((VAR6 = FUN5(VAR4, VAR1)) != NULL)
{
ForkNumber	VAR23;
int			VAR24;
char		VAR34[VAR35 + 1];
char		VAR39[VAR8];


if (!FUN6(VAR6->VAR26, &VAR24,
&VAR23))
continue;


if (VAR23 != VAR27)
continue;


memcpy(VAR34, VAR6->VAR26, VAR24);
VAR34[VAR24] = '';
snprintf(VAR39, sizeof(VAR39), "",
VAR1, VAR34, VAR6->VAR26 + VAR24 + 1 +
strlen(VAR38[VAR27]));

FUN17(VAR39, false);
}

FUN9(VAR4);


FUN17(VAR1, true);
}
}