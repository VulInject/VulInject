static int
FUN1(struct VAR1 *VAR2, caddr_t VAR3, int VAR4,
void *VAR5)
{
struct partition64	VAR6;
int			VAR7 = 0;
uint_t			VAR8;
VAR9		*VAR10;
VAR11		*VAR12;
diskaddr_t		VAR13;
int			VAR14 = 0;

if (FUN2((const void *)VAR3, &VAR6,
sizeof (struct VAR15), VAR4)) {
return (VAR16);
}

VAR12 = FUN3(VAR2->VAR17, VAR18);
VAR7 = FUN4(VAR2, VAR12, 1, VAR2->VAR17, VAR5);
if (VAR7 != 0)
goto VAR19;

FUN5(VAR12);

if ((VAR7 = FUN6(VAR12)) != 0)
goto VAR19;

VAR8 = VAR12->VAR20;
VAR13 = VAR12->VAR21;
if (VAR6.VAR22 >= VAR8) {

VAR7 = VAR23;
goto VAR19;
}

VAR14 = VAR2->VAR17 / sizeof (VAR9);
VAR13 += VAR6.VAR22 / VAR14;
VAR7 = FUN4(VAR2, VAR12, VAR13, VAR2->VAR17, VAR5);

if (VAR7) {
goto VAR19;
}
VAR10 = (VAR9 *)VAR12;
VAR10 += VAR6.VAR22 % VAR14;


FUN7(1, VAR10);

bcopy(&VAR10->VAR24, &VAR6.VAR25,
sizeof (struct VAR26));
VAR6.VAR27 = VAR10->VAR28;
VAR6.VAR29 = VAR10->VAR30 -
VAR6.VAR27 + 1;

if (FUN8(&VAR6, (void *)VAR3, sizeof (struct VAR15), VAR4))
VAR7 = VAR16;

VAR19:
FUN9(VAR12, VAR2->VAR17);
return (VAR7);
}