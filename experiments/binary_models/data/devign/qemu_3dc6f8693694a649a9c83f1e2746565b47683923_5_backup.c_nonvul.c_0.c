VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR3 *VAR5, int64_t VAR6, MirrorSyncMode VAR7, VAR8 *VAR9, bool VAR10, BlockdevOnError VAR11, BlockdevOnError VAR12, int VAR13, VAR14 *VAR15, void *VAR16, VAR17 *VAR18, VAR19 **VAR20)
{
    int64_t VAR21;
    BlockDriverInfo VAR22;
    VAR23 *VAR24 = NULL;
    int VAR25;
    assert(VAR4);
    assert(VAR5);
    if (VAR4 == VAR5)
    {
        FUN2(VAR20, "");
        return NULL;
    }
    if (!FUN3(VAR4))
    {
        FUN2(VAR20, "", FUN4(VAR4));
        return NULL;
    }
    if (!FUN3(VAR5))
    {
        FUN2(VAR20, "", FUN4(VAR5));
        return NULL;
    }
    if (VAR10 && VAR5->VAR26->VAR27 == NULL)
    {
        FUN2(VAR20, "", FUN4(VAR5));
        return NULL;
    }
    if (FUN5(VAR4, VAR28, VAR20))
    {
        return NULL;
    }
    if (FUN5(VAR5, VAR29, VAR20))
    {
        return NULL;
    }
    if (VAR7 == VAR30)
    {
        if (!VAR9)
        {
            FUN2(VAR20, ""
                             ""VAR31\"");
            return NULL;
        }
        if (FUN6(VAR4, VAR9, VAR20) < 0)
        {
            return NULL;
        }
    }
    else if (VAR9)
    {
        FUN2(VAR20, ""
                         "",
                   VAR32[VAR7]);
        return NULL;
    }
    VAR21 = FUN7(VAR4);
    if (VAR21 < 0)
    {
        FUN8(VAR20, -VAR21, "", FUN4(VAR4));
        goto VAR33;
    }
    VAR24 = FUN9(VAR2, &VAR34, VAR4, VAR35, VAR35 | VAR36 | VAR37 | VAR38, VAR6, VAR13, VAR15, VAR16, VAR20);
    if (!VAR24)
    {
        goto VAR33;
    }
    VAR24->VAR5 = FUN10(VAR36, VAR35 | VAR36 | VAR37 | VAR38);
    VAR25 = FUN11(VAR24->VAR5, VAR5, VAR20);
    if (VAR25 < 0)
    {
        goto VAR33;
    }
    VAR24->VAR11 = VAR11;
    VAR24->VAR12 = VAR12;
    VAR24->VAR7 = VAR7;
    VAR24->VAR9 = VAR7 == VAR30 ? VAR9 : NULL;
    VAR24->VAR10 = VAR10;
    VAR25 = FUN12(VAR5, &VAR22);
    if (VAR25 == -VAR39 && !VAR5->VAR40)
    {
        FUN13(""
                    ""
                    ""
                    ""
                    "",
                    VAR41);
        VAR24->VAR42 = VAR41;
    }
    else if (VAR25 < 0 && !VAR5->VAR40)
    {
        FUN8(VAR20, -VAR25, ""
                                     "");
        FUN14(VAR20, "");
        goto VAR33;
    }
    else if (VAR25 < 0 && VAR5->VAR40)
    {
        VAR24->VAR42 = VAR41;
    }
    else
    {
        VAR24->VAR42 = FUN15(VAR41, VAR22.VAR42);
    }
    FUN16(&VAR24->VAR43, "", VAR5, 0, VAR44, &VAR45);
    VAR24->VAR43.VAR21 = VAR21;
    FUN17(VAR18, &VAR24->VAR43);
    return &VAR24->VAR43;
VAR33:
    if (VAR9)
    {
        FUN18(VAR4, VAR9, NULL);
    }
    if (VAR24)
    {
        FUN19(&VAR24->VAR43);
        FUN20(&VAR24->VAR43);
    }
    return NULL;
}