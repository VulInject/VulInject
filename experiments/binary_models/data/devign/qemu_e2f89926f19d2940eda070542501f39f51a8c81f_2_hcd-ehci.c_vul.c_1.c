static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(&VAR2->VAR5);
    assert(VAR4 != NULL);
    assert(VAR4->VAR6 == VAR2->VAR6);
    assert(VAR4->VAR7 != VAR8);
    VAR4->VAR7 = VAR9;
    FUN3("", VAR2->VAR10, VAR2->VAR11.VAR12, VAR2->VAR6, VAR2->VAR13);
    if (VAR4->VAR13 < 0)
    {
        switch (VAR4->VAR13)
        {
        case VAR14:
        case VAR15:
            VAR2->VAR11.VAR16 |= (VAR17 | VAR18);
            FUN4(&VAR2->VAR11.VAR16, 0, VAR19);
            FUN5(VAR2->VAR20, VAR21);
            break;
        case VAR22:
            VAR2->VAR11.VAR16 |= VAR17;
            FUN5(VAR2->VAR20, VAR21);
            break;
        case VAR23:
            FUN4(&VAR2->VAR11.VAR24, 0, VAR25);
            return;
        case VAR26:
            VAR2->VAR11.VAR16 |= (VAR17 | VAR27);
            FUN5(VAR2->VAR20, VAR21);
            break;
        default:
            fprintf(VAR28, "", VAR4->VAR13);
            assert(0);
            break;
        }
    }
    else if ((VAR4->VAR13 > VAR4->VAR29) && (VAR4->VAR30 == VAR31))
    {
        VAR4->VAR13 = VAR26;
        VAR2->VAR11.VAR16 |= (VAR17 | VAR27);
        FUN5(VAR2->VAR20, VAR21);
    }
    else
    {
        if (VAR4->VAR29 && VAR4->VAR30 == VAR31)
        {
            VAR4->VAR29 -= VAR4->VAR13;
        }
        else
        {
            VAR4->VAR29 = 0;
        }
        FUN3("", VAR4->VAR29);
        FUN4(&VAR2->VAR11.VAR16, VAR4->VAR29, VAR32);
    }
    FUN6(VAR2, VAR4->VAR13);
    FUN7(&VAR4->VAR33);
    FUN8(&VAR4->VAR34);
    VAR2->VAR11.VAR16 ^= VAR35;
    VAR2->VAR11.VAR16 &= ~VAR36;
    if (VAR2->VAR11.VAR16 & VAR37)
    {
        FUN5(VAR2->VAR20, VAR38);
    }
}