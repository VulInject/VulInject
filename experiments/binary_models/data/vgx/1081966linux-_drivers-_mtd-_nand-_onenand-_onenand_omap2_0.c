static inline int FUN1(struct VAR1 *VAR2,
dma_addr_t VAR3, dma_addr_t VAR4,
size_t VAR5)
{
struct VAR6 *VAR7;
dma_cookie_t VAR8;

VAR7 = FUN2(VAR2->VAR9, VAR4, VAR3, VAR5,
VAR10 | VAR11);
if (!VAR7) {
FUN3(&VAR2->VAR12->VAR13, "");
return -VAR14;
}

FUN4(&VAR2->VAR15);

VAR7->VAR16 = VAR17;
VAR7->VAR18 = &VAR2->VAR15;

VAR8 = VAR7->FUN5(VAR7);
if (FUN6(VAR8)) {
FUN3(&VAR2->VAR12->VAR13, "");
return -VAR14;
}

FUN7(VAR2->VAR9);

if (!FUN8(&VAR2->VAR15,
FUN9(20))) {
FUN10(VAR2->VAR9);
return -VAR19;
}

return 0;
}