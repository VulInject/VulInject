static int FUN1(struct VAR1 *VAR2,
u32 VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;
dma_addr_t VAR10;
struct VAR11 *VAR12;
struct VAR13 *VAR13;
u32 VAR14, VAR15;
u16 VAR16;
int VAR17;

if (FUN2(!VAR2))
return 0;

VAR9 = VAR2->VAR9;
VAR7 = FUN3(VAR9);
VAR12 = FUN4(VAR9);
VAR14 = VAR2->VAR14 - 1;
VAR15 = VAR2->VAR15;

for (VAR17 = 0; VAR17 < VAR3; VAR17++) {
VAR5 = &VAR2->VAR18[VAR15];

VAR13 = FUN5();
if (FUN2(!VAR13))
return -VAR19;

VAR10 = FUN6(VAR12, VAR13, 0,
VAR20, VAR21);
if (FUN2(FUN7(VAR12, VAR10))) {
FUN8(VAR13);
return -VAR19;
}

VAR16 = FUN9(VAR20);
VAR5->VAR22 = FUN10(FUN11(VAR23, VAR10) |
FUN11(VAR24, VAR16) |
FUN12(VAR25));

VAR2->VAR26[VAR15] = VAR13;
VAR15 = (VAR15 + 1) & VAR14;
}

VAR7->VAR27->FUN13(VAR2, VAR3);
VAR2->VAR15 = VAR15;

return 0;
}