static unsigned int FUN1(const unsigned int VAR1)
{
    VAR2 *VAR3 = FUN2();
    unsigned int VAR4, VAR5;
    floatx80 VAR6, VAR7;
    int VAR8 = VAR1 & 0x400000;
    int VAR9 = VAR1 & 0x200000;
    unsigned int VAR10 = 0;
    VAR4 = FUN3(VAR1);
    VAR5 = FUN4(VAR1);
    switch (VAR3->VAR11[VAR4])
    {
    case VAR12:
        if (FUN5(VAR3->VAR13[VAR4].VAR14))
            goto VAR15;
        VAR6 = FUN6(VAR3->VAR13[VAR4].VAR14, &VAR3->VAR16);
        break;
    case VAR17:
        if (FUN7(VAR3->VAR13[VAR4].VAR18))
            goto VAR15;
        VAR6 = FUN8(VAR3->VAR13[VAR4].VAR18, &VAR3->VAR16);
        break;
    case VAR19:
        if (FUN9(VAR3->VAR13[VAR4].VAR20))
            goto VAR15;
        VAR6 = VAR3->VAR13[VAR4].VAR20;
        break;
    default:
        return 0;
    }
    if (FUN10(VAR1))
    {
        VAR7 = FUN11(VAR5);
        if (FUN9(VAR7))
            goto VAR15;
    }
    else
    {
        switch (VAR3->VAR11[VAR5])
        {
        case VAR12:
            if (FUN5(VAR3->VAR13[VAR5].VAR14))
                goto VAR15;
            VAR7 = FUN6(VAR3->VAR13[VAR5].VAR14, &VAR3->VAR16);
            break;
        case VAR17:
            if (FUN7(VAR3->VAR13[VAR5].VAR18))
                goto VAR15;
            VAR7 = FUN8(VAR3->VAR13[VAR5].VAR18, &VAR3->VAR16);
            break;
        case VAR19:
            if (FUN9(VAR3->VAR13[VAR5].VAR20))
                goto VAR15;
            VAR7 = VAR3->VAR13[VAR5].VAR20;
            break;
        default:
            return 0;
        }
    }
    if (VAR9)
    {
        VAR7.VAR21 ^= 0x8000;
    }
    return FUN12(VAR6, VAR7);
VAR15:
    VAR10 |= VAR22;
    VAR10 &= ~(VAR23 | VAR24);
    if (VAR25 & FUN13())
        VAR10 |= VAR26;
    if (VAR8)
        FUN14(VAR27, &VAR3->VAR16);
    FUN15(VAR10);
    return 1;
}