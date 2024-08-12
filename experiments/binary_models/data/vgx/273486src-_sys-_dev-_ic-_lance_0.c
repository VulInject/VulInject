struct VAR1 *
FUN1(struct VAR2 *VAR3, int VAR4, int VAR5)
{
struct VAR1 *VAR6;
struct VAR7 *VAR8 = &VAR3->VAR9.VAR10;
struct VAR11 *VAR12;

if (VAR5 <= sizeof(struct VAR11) ||
VAR5 > ((VAR8->VAR13 & VAR14) ?
VAR15 + VAR16 + sizeof(struct VAR11) :
VAR16 + sizeof(struct VAR11))) {
FUN2("",
VAR3->VAR17.VAR18, VAR5);
VAR8->VAR19++;
return (NULL);
}


VAR6 = FUN3(VAR3, VAR4, VAR5);
if (VAR6 == NULL) {
VAR8->VAR19++;
return (NULL);
}

VAR12 = FUN4(VAR6, struct VAR11 *);


if (FUN5(VAR12->VAR20, VAR3->VAR9.VAR21) &&
FUN5(VAR12->VAR20, VAR22)) {
FUN6(VAR6);
return (NULL);
}


if (!FUN5(VAR12->VAR23, VAR3->VAR9.VAR21)) {
FUN6(VAR6);
return (NULL);
}

return (VAR6);
}