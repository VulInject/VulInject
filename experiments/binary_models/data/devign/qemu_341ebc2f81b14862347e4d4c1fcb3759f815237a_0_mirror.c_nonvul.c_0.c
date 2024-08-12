static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4, int64_t VAR5, uint32_t VAR6, int64_t VAR7, BlockdevOnError VAR8, BlockdevOnError VAR9, VAR10 *VAR11, void *VAR12, VAR13 **VAR14, const VAR15 *VAR16, bool VAR17, VAR1 *VAR18)
{
    VAR19 *VAR20;
    if (VAR6 == 0)
    {
        VAR6 = FUN2(VAR3);
    }
    assert((VAR6 & (VAR6 - 1)) == 0);
    if ((VAR8 == VAR21 || VAR8 == VAR22) && !FUN3(VAR2))
    {
        FUN4(VAR14, VAR23, "");
        return;
    }
    VAR20 = FUN5(VAR16, VAR2, VAR5, VAR11, VAR12, VAR14);
    if (!VAR20)
    {
        return;
    }
    VAR20->VAR4 = FUN6(VAR4);
    VAR20->VAR8 = VAR8;
    VAR20->VAR9 = VAR9;
    VAR20->VAR3 = VAR3;
    VAR20->VAR17 = VAR17;
    VAR20->VAR18 = VAR18;
    VAR20->VAR6 = VAR6;
    VAR20->VAR7 = FUN7(VAR7, VAR6);
    VAR20->VAR24 = FUN8(VAR2, VAR6, NULL, VAR14);
    if (!VAR20->VAR24)
    {
        return;
    }
    FUN9(VAR20->VAR3, true);
    FUN10(VAR20->VAR3, VAR9, VAR9);
    FUN11(VAR20->VAR3);
    VAR20->VAR25.VAR26 = FUN12(VAR27);
    FUN13(VAR2, VAR20, VAR20->VAR25.VAR26, VAR12);
    FUN14(VAR20->VAR25.VAR26, VAR20);
}