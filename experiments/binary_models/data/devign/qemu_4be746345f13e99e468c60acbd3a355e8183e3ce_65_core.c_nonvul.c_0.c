void FUN1(void *VAR1, int VAR2)
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
        FUN4(VAR4);
        VAR6 += VAR5;
        FUN5(VAR4, VAR6);
        VAR4->VAR17 -= VAR5;
    }
    if (VAR4->VAR17 == 0)
    {
        VAR4->VAR18 = VAR19 | VAR20;
        FUN6(VAR4->VAR21);
        goto VAR22;
    }
    VAR5 = VAR4->VAR17;
    VAR4->VAR23 = 0;
    VAR4->VAR16 = VAR5 * 512;
    if (VAR4->VAR21->VAR24->VAR25->FUN7(VAR4->VAR21->VAR24, FUN8(VAR4)) == 0)
    {
        VAR4->VAR18 = VAR19 | VAR20;
        goto VAR22;
    }
    FUN9("" VAR26 "", VAR6, VAR5, VAR4->VAR11);
    if ((VAR4->VAR11 == VAR12 || VAR4->VAR11 == VAR27) && !FUN10(VAR4, VAR6, VAR5))
    {
        FUN4(VAR4);
        FUN11(VAR4);
        return;
    }
    switch (VAR4->VAR11)
    {
    case VAR12:
        VAR4->VAR21->VAR24->VAR28 = FUN12(VAR4->VAR29, &VAR4->VAR30, VAR6, VAR31, VAR4);
        break;
    case VAR27:
        VAR4->VAR21->VAR24->VAR28 = FUN13(VAR4->VAR29, &VAR4->VAR30, VAR6, VAR31, VAR4);
        break;
    case VAR14:
        VAR4->VAR21->VAR24->VAR28 = FUN14(VAR4->VAR29, &VAR4->VAR30, VAR6, VAR32, VAR31, VAR4, VAR33);
        break;
    }
    return;
VAR22:
    if (VAR4->VAR11 == VAR12 || VAR4->VAR11 == VAR27)
    {
        FUN15(FUN16(VAR4->VAR29), &VAR4->VAR34);
    }
    FUN17(VAR4, VAR7);
}