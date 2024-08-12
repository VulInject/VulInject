static void FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = &VAR2->VAR5[VAR6];
    uint32_t VAR7;
    uint16_t VAR8 = 0;
    uint32_t VAR9;
    uint32_t VAR10 = VAR2->VAR11 + VAR12 - 1;
    uint16_t VAR13;
    struct VAR14 *VAR15;
    size_t VAR16 = VAR2->VAR17.VAR18 + VAR2->VAR17.VAR16;
    FUN2(VAR4, VAR10, VAR16, &VAR8, sizeof VAR8);
    VAR13 = VAR2->VAR19;
    VAR15 = VAR2->VAR5[VAR20].VAR21;
    VAR7 = FUN3(VAR15, VAR13, &VAR9);
    VAR7 += FUN4(VAR4, VAR10, VAR2->VAR17.VAR18, VAR13, VAR9);
    VAR8 = FUN5(FUN6(VAR7));
    FUN2(VAR4, VAR10, VAR16, &VAR8, sizeof VAR8);
}