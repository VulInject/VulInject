static struct VAR1 *FUN1(struct VAR2 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR4);
struct VAR7 *VAR8;
struct VAR9 *VAR10;
u8 VAR11;

FUN3(!FUN4());


VAR8 = FUN5(VAR4);

if (!FUN6(VAR4))
return NULL;

VAR11 = (*(VAR12 *)VAR4->VAR13) & 0x7f;

FUN7(VAR10, &VAR2->VAR14.VAR15) {
struct VAR1 *VAR16 = FUN8(VAR10, struct VAR1, VAR10);

if (VAR16->VAR17 != VAR18 && VAR16->VAR17 != VAR6->VAR2)
continue;

if (VAR16->VAR19 != VAR11)
continue;

if (!FUN9(VAR16->VAR20, VAR8->VAR21))
continue;

return VAR16;
}

return NULL;
}