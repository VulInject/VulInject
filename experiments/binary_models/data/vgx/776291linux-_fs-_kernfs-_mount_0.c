static struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR4, int VAR5,
int VAR6, bool VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
struct VAR10 *VAR11;
struct VAR12 *VAR12;
u64 VAR13;

if (VAR5 < 2)
return NULL;

switch (VAR6) {
case VAR14:
VAR13 = *(VAR15 *)VAR4;
break;
case VAR16:
case VAR17:

VAR13 = ((VAR15)VAR4->VAR18.VAR19 << 32) | VAR4->VAR18.VAR20;
break;
default:
return NULL;
}

VAR11 = FUN3(VAR9->VAR21, VAR13);
if (!VAR11)
return FUN4(-VAR22);

if (VAR7) {
struct VAR10 *VAR23;

VAR23 = FUN5(VAR11);
FUN6(VAR11);
VAR11 = VAR23;
if (!VAR11)
return FUN4(-VAR22);
}

VAR12 = FUN7(VAR3, VAR11);
FUN6(VAR11);
if (!VAR12)
return FUN4(-VAR22);

return FUN8(VAR12);
}