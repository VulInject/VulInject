static void FUN1(struct VAR1 *VAR2, unsigned long VAR3,
dma_addr_t VAR4, unsigned long VAR5,
unsigned long VAR6, unsigned long VAR7)
{
unsigned long VAR8, VAR9;
unsigned long VAR10;

FUN2(VAR9);
do {
if (VAR4 <= FUN3(32)) {
VAR8 = FUN4(VAR3,
FUN5(0, VAR6),
VAR7);
} else {
VAR10 = FUN6(VAR3, VAR5,
VAR6, VAR7, &VAR8);
if (FUN7(VAR10 != VAR11)) {
FUN8("",
VAR10);
}
}
VAR6 += VAR8;
VAR7 -= VAR8;
} while (VAR7 != 0);
FUN9(VAR9);
}