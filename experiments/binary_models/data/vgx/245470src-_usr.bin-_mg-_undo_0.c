int
FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
struct region	VAR6;
struct	VAR7 *VAR8;
int	VAR9;

if (!VAR10)
return (VAR11);

memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR12 = VAR2;
VAR6.VAR13 = VAR3;
VAR6.VAR14 = VAR4;

VAR9 = FUN2(VAR2, VAR3);

if (VAR3 == FUN3(VAR2))	
FUN4(VAR15, 1);
else if ((VAR8 = FUN5(&VAR16->VAR17)) != NULL) {

if (!VAR5 && VAR8->VAR18 == VAR19) {
if (VAR8->VAR9 - VAR8->VAR20.VAR14 != VAR9)
FUN4(VAR15, 1);
}
}
VAR8 = FUN6();
VAR8->VAR9 = VAR9;
if (VAR5)
VAR8->VAR18 = VAR21;
else
VAR8->VAR18 = VAR19;
memmove(&VAR8->VAR20, &VAR6, sizeof(struct VAR20));
do {
VAR8->VAR22 = malloc(VAR6.VAR14 + 1);
} while ((VAR8->VAR22 == NULL) && FUN7());

if (VAR8->VAR22 == NULL)
FUN8("");

FUN9(&VAR6, VAR8->VAR22, VAR6.VAR14);

if (VAR5 || FUN10() != VAR19)
FUN4(VAR15, 1);

FUN11(&VAR16->VAR17, VAR8, VAR23);

return (VAR11);
}