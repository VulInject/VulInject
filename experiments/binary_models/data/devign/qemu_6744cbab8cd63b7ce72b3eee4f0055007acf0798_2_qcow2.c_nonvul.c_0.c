static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, const char *VAR4, int VAR5, size_t VAR6, int VAR7, VAR8 *VAR9, int VAR10)
{
    int VAR11;
    VAR11 = FUN2(VAR6) - 1;
    if (VAR11 < VAR12 || VAR11 > VAR13 || (1 << VAR11) != VAR6)
    {
        FUN3("", 1 << VAR12, 1 << (VAR13 - 10));
        return -VAR14;
    }
    VAR15 *VAR16;
    QCowHeader VAR17;
    VAR18 *VAR19;
    int VAR20;
    VAR20 = FUN4(VAR1, VAR9);
    if (VAR20 < 0)
    {
        return VAR20;
    }
    VAR20 = FUN5(&VAR16, VAR1, VAR21);
    if (VAR20 < 0)
    {
        return VAR20;
    }
    memset(&VAR17, 0, sizeof(VAR17));
    VAR17.VAR22 = FUN6(VAR23);
    VAR17.VAR10 = FUN6(VAR10);
    VAR17.VAR11 = FUN6(VAR11);
    VAR17.VAR24 = FUN7(0);
    VAR17.VAR25 = FUN7(0);
    VAR17.VAR26 = FUN6(0);
    VAR17.VAR27 = FUN7(VAR6);
    VAR17.VAR28 = FUN6(1);
    VAR17.VAR29 = FUN6(3 + VAR30);
    VAR17.VAR31 = FUN6(sizeof(VAR17));
    if (VAR5 & VAR32)
    {
        VAR17.VAR33 = FUN6(VAR34);
    }
    else
    {
        VAR17.VAR33 = FUN6(VAR35);
    }
    VAR20 = FUN8(VAR16, 0, &VAR17, sizeof(VAR17));
    if (VAR20 < 0)
    {
        goto VAR36;
    }
    VAR19 = FUN9(VAR6);
    VAR20 = FUN8(VAR16, VAR6, VAR19, VAR6);
    FUN10(VAR19);
    if (VAR20 < 0)
    {
        goto VAR36;
    }
    FUN11(VAR16);
    VAR37 *VAR38 = FUN12("");
    assert(VAR38 != NULL);
    VAR20 = FUN13(VAR16, VAR1, VAR21 | VAR39 | VAR40, VAR38);
    if (VAR20 < 0)
    {
        goto VAR36;
    }
    VAR20 = FUN14(VAR16, 2 * VAR6);
    if (VAR20 < 0)
    {
        goto VAR36;
    }
    else if (VAR20 != 0)
    {
        FUN3("");
        FUN15();
    }
    VAR20 = FUN16(VAR16, VAR2 * VAR41);
    if (VAR20 < 0)
    {
        goto VAR36;
    }
    if (VAR3)
    {
        VAR20 = FUN17(VAR16, VAR3, VAR4);
        if (VAR20 < 0)
        {
            goto VAR36;
        }
    }
    if (VAR7)
    {
        VAR20 = FUN18(VAR16);
        if (VAR20 < 0)
        {
            goto VAR36;
        }
    }
    VAR20 = 0;
VAR36:
    FUN19(VAR16);
    return VAR20;
}