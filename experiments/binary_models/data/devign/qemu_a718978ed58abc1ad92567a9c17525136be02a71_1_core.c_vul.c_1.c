static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5;
    int64_t VAR6;
    bool VAR7 = false;
    if (VAR2 == -VAR8)
    {
        return;
    }
    if (VAR2 < 0)
    {
        int VAR9 = VAR10;
        if (VAR4->VAR11 == VAR12)
            VAR9 |= VAR13;
        else if (VAR4->VAR11 == VAR14)
            VAR9 |= VAR15;
        if (FUN2(VAR4, -VAR2, VAR9))
        {
            return;
        }
    }
    VAR5 = VAR4->VAR16 >> 9;
    if (VAR5 > VAR4->VAR17)
    {
        VAR5 = VAR4->VAR17;
        VAR7 = true;
    }
    VAR6 = FUN3(VAR4);
    if (VAR5 > 0)
    {
        assert(VAR4->VAR16 == VAR4->VAR18.VAR19);
        FUN4(VAR4, VAR4->VAR16);
        VAR6 += VAR5;
        FUN5(VAR4, VAR6);
        VAR4->VAR17 -= VAR5;
    }
    if (VAR4->VAR17 == 0)
    {
        VAR4->VAR20 = VAR21 | VAR22;
        FUN6(VAR4->VAR23);
        goto VAR24;
    }
    VAR5 = VAR4->VAR17;
    VAR4->VAR25 = 0;
    VAR4->VAR16 = VAR5 * 512;
    if (VAR4->VAR23->VAR26->VAR27->FUN7(VAR4->VAR23->VAR26, FUN8(VAR4)) < 512)
    {
        VAR4->VAR20 = VAR21 | VAR22;
        FUN4(VAR4, 0);
        goto VAR24;
    }
    FUN9("" VAR28 "", VAR6, VAR5, VAR4->VAR11);
    if ((VAR4->VAR11 == VAR12 || VAR4->VAR11 == VAR29) && !FUN10(VAR4, VAR6, VAR5))
    {
        FUN11(VAR4);
        return;
    }
    switch (VAR4->VAR11)
    {
    case VAR12:
        VAR4->VAR23->VAR26->VAR30 = FUN12(VAR4->VAR31, &VAR4->VAR18, VAR6, VAR32, VAR4);
        break;
    case VAR29:
        VAR4->VAR23->VAR26->VAR30 = FUN13(VAR4->VAR31, &VAR4->VAR18, VAR6, VAR32, VAR4);
        break;
    case VAR14:
        VAR4->VAR23->VAR26->VAR30 = FUN14(VAR4->VAR31, &VAR4->VAR18, VAR6, VAR33, VAR32, VAR4, VAR34);
        break;
    }
    return;
VAR24:
    if (VAR4->VAR11 == VAR12 || VAR4->VAR11 == VAR29)
    {
        FUN15(FUN16(VAR4->VAR31), &VAR4->VAR35);
    }
    FUN17(VAR4, VAR7);
}