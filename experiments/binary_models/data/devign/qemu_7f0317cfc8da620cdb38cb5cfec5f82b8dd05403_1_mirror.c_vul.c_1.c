static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4, int64_t VAR5, uint32_t VAR6, int64_t VAR7, BlockMirrorBackingMode VAR8, BlockdevOnError VAR9, BlockdevOnError VAR10, bool VAR11, VAR12 *VAR13, void *VAR14, VAR15 **VAR16, const VAR17 *VAR18, bool VAR19, VAR1 *VAR20)
{
    VAR21 *VAR22;
    if (VAR6 == 0)
    {
        VAR6 = FUN2(VAR3);
    }
    assert((VAR6 & (VAR6 - 1)) == 0);
    if (VAR7 < 0)
    {
        FUN3(VAR16, "");
        return;
    }
    if (VAR7 == 0)
    {
        VAR7 = VAR23;
    }
    VAR22 = FUN4(VAR18, VAR2, VAR5, VAR13, VAR14, VAR16);
    if (!VAR22)
    {
        return;
    }
    VAR22->VAR3 = FUN5();
    FUN6(VAR22->VAR3, VAR3);
    VAR22->VAR4 = FUN7(VAR4);
    VAR22->VAR9 = VAR9;
    VAR22->VAR10 = VAR10;
    VAR22->VAR19 = VAR19;
    VAR22->VAR8 = VAR8;
    VAR22->VAR20 = VAR20;
    VAR22->VAR6 = VAR6;
    VAR22->VAR7 = FUN8(VAR7, VAR6);
    VAR22->VAR11 = VAR11;
    VAR22->VAR24 = FUN9(VAR2, VAR6, NULL, VAR16);
    if (!VAR22->VAR24)
    {
        FUN10(VAR22->VAR4);
        FUN11(VAR22->VAR3);
        FUN12(&VAR22->VAR25);
        return;
    }
    FUN13(VAR3, VAR22->VAR25.VAR26);
    VAR22->VAR25.VAR27 = FUN14(VAR28);
    FUN15(VAR2, VAR22, VAR22->VAR25.VAR27, VAR14);
    FUN16(VAR22->VAR25.VAR27, VAR22);
}