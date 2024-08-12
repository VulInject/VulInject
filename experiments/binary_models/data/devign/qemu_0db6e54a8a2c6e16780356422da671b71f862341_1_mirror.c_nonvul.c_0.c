static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4, int64_t VAR5, int64_t VAR6, int64_t VAR7, BlockdevOnError VAR8, BlockdevOnError VAR9, VAR10 *VAR11, void *VAR12, VAR13 **VAR14, const VAR15 *VAR16, bool VAR17, VAR1 *VAR18)
{
    VAR19 *VAR20;
    if (VAR6 == 0)
    {
        BlockDriverInfo VAR21;
        if (FUN2(VAR3, &VAR21) >= 0 && VAR21.VAR22 != 0)
        {
            VAR6 = FUN3(4096, VAR21.VAR22);
            VAR6 = FUN4(65536, VAR6);
        }
        else
        {
            VAR6 = 65536;
        }
    }
    assert((VAR6 & (VAR6 - 1)) == 0);
    if ((VAR8 == VAR23 || VAR8 == VAR24) && !FUN5(VAR2))
    {
        FUN6(VAR14, VAR25, "");
        return;
    }
    VAR20 = FUN7(VAR16, VAR2, VAR5, VAR11, VAR12, VAR14);
    if (!VAR20)
    {
        return;
    }
    VAR20->VAR4 = FUN8(VAR4);
    VAR20->VAR8 = VAR8;
    VAR20->VAR9 = VAR9;
    VAR20->VAR3 = VAR3;
    VAR20->VAR17 = VAR17;
    VAR20->VAR18 = VAR18;
    VAR20->VAR6 = VAR6;
    VAR20->VAR7 = FUN3(VAR7, VAR6);
    VAR20->VAR26 = FUN9(VAR2, VAR6, NULL, VAR14);
    if (!VAR20->VAR26)
    {
        return;
    }
    FUN10(VAR20->VAR3, true);
    FUN11(VAR20->VAR3, VAR9, VAR9);
    FUN12(VAR20->VAR3);
    VAR20->VAR27.VAR28 = FUN13(VAR29);
    FUN14(VAR2, VAR20, VAR20->VAR27.VAR28, VAR12);
    FUN15(VAR20->VAR27.VAR28, VAR20);
}