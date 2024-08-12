static void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, const char *VAR5, int64_t VAR6, uint32_t VAR7, int64_t VAR8, BlockMirrorBackingMode VAR9, BlockdevOnError VAR10, BlockdevOnError VAR11, bool VAR12, VAR13 *VAR14, void *VAR15, VAR16 **VAR17, const VAR18 *VAR19, bool VAR20, VAR2 *VAR21, bool VAR22)
{
    VAR23 *VAR24;
    if (VAR7 == 0)
    {
        VAR7 = FUN2(VAR4);
    }
    assert((VAR7 & (VAR7 - 1)) == 0);
    if (VAR8 < 0)
    {
        FUN3(VAR17, "");
        return;
    }
    if (VAR8 == 0)
    {
        VAR8 = VAR25;
    }
    VAR24 = FUN4(VAR1, VAR19, VAR3, VAR6, VAR14, VAR15, VAR17);
    if (!VAR24)
    {
        return;
    }
    VAR24->VAR4 = FUN5();
    FUN6(VAR24->VAR4, VAR4);
    VAR24->VAR5 = FUN7(VAR5);
    VAR24->VAR10 = VAR10;
    VAR24->VAR11 = VAR11;
    VAR24->VAR20 = VAR20;
    VAR24->VAR9 = VAR9;
    VAR24->VAR21 = VAR21;
    VAR24->VAR7 = VAR7;
    VAR24->VAR8 = FUN8(VAR8, VAR7);
    VAR24->VAR12 = VAR12;
    if (VAR22)
    {
        VAR24->VAR26 = true;
    }
    VAR24->VAR27 = FUN9(VAR3, VAR7, NULL, VAR17);
    if (!VAR24->VAR27)
    {
        FUN10(VAR24->VAR5);
        FUN11(VAR24->VAR4);
        FUN12(&VAR24->VAR28);
        return;
    }
    FUN13(VAR4, VAR24->VAR28.VAR29);
    VAR24->VAR28.VAR30 = FUN14(VAR31, VAR24);
    FUN15(VAR3, VAR24, VAR24->VAR28.VAR30, VAR15);
    FUN16(VAR24->VAR28.VAR30);
}