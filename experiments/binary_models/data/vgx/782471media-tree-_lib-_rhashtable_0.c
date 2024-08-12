static void *FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, unsigned int VAR5,
const void *VAR6, struct VAR7 *VAR8)
{
struct rhashtable_compare_arg VAR9 = {
.VAR2 = VAR2,
.VAR6 = VAR6,
};
struct rhash_head VAR10 **VAR11;
struct VAR7 *VAR12;
int VAR13;

VAR13 = VAR14;
VAR11 = FUN2(VAR4, VAR5);
FUN3(VAR12, *VAR11, VAR4, VAR5) {
struct VAR15 *VAR16;
struct VAR15 *VAR17;

VAR13--;
if (!VAR6 ||
(VAR2->VAR18.VAR19 ?
VAR2->VAR18.FUN4(&VAR9, FUN5(VAR2, VAR12)) :
FUN6(&VAR9, FUN5(VAR2, VAR12))))
continue;

if (!VAR2->VAR20)
return FUN5(VAR2, VAR12);

VAR16 = FUN7(VAR8, struct VAR15, VAR21);
VAR17 = FUN7(VAR12, struct VAR15, VAR21);

FUN8(VAR16->VAR22, VAR17);
VAR12 = FUN9(VAR12->VAR22, VAR4, VAR5);
FUN8(VAR16->VAR21.VAR22, VAR12);
FUN10(*VAR11, VAR8);

return NULL;
}

if (VAR13 <= 0)
return FUN11(-VAR23);

return FUN11(-VAR24);
}