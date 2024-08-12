void *FUN1(struct VAR1 *VAR2, size_t VAR3,
VAR4 *VAR5, gfp_t VAR6,
unsigned long VAR7)
{
unsigned long VAR8;
struct VAR9 *VAR9;
unsigned int VAR10 = FUN2(VAR3) >> VAR11;
dma_addr_t VAR12;

VAR8 = FUN3(VAR2, VAR6);

VAR6 &= ~VAR13;
VAR14:
VAR9 = NULL;

if (FUN4(VAR6)) {
VAR9 = FUN5(VAR2, VAR10, FUN6(VAR3),
VAR6);
if (VAR9 && FUN7(VAR9) + VAR3 > VAR8) {
FUN8(VAR2, VAR9, VAR10);
VAR9 = NULL;
}
}

if (!VAR9)
VAR9 = FUN9(FUN10(VAR2), VAR6, FUN6(VAR3));
if (!VAR9)
return NULL;

VAR12 = FUN7(VAR9);
if (VAR12 + VAR3 > VAR8) {
FUN11(VAR9, FUN6(VAR3));

if (VAR8 < FUN12(32) && !(VAR6 & VAR15)) {
VAR6 = (VAR6 & ~VAR16) | VAR15;
goto VAR14;
}

return NULL;
}
memset(FUN13(VAR9), 0, VAR3);
*VAR5 = VAR12;
return FUN13(VAR9);
}