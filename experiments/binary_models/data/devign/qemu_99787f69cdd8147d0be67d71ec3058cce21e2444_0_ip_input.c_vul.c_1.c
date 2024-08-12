FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    register struct VAR5 *VAR5;
    int VAR6;
    FUN2("");
    FUN3("", VAR2);
    FUN3("", VAR2->VAR7);
    if (VAR2->VAR7 < sizeof(struct VAR5))
    {
        return;
    }
    VAR5 = FUN4(VAR2, struct VAR5 *);
    if (VAR5->VAR8 != VAR9)
    {
        goto VAR10;
    }
    VAR6 = VAR5->VAR11 << 2;
    if (VAR6 < sizeof(struct VAR5) || VAR6 > VAR2->VAR7)
    {
        goto VAR10;
    }
    if (FUN5(VAR2, VAR6))
    {
        goto VAR10;
    }
    FUN6(VAR5->VAR12);
    if (VAR5->VAR12 < VAR6)
    {
        goto VAR10;
    }
    FUN6(VAR5->VAR13);
    FUN6(VAR5->VAR14);
    if (VAR2->VAR7 < VAR5->VAR12)
    {
        goto VAR10;
    }
    if (VAR2->VAR7 > VAR5->VAR12)
        FUN7(VAR2, VAR5->VAR12 - VAR2->VAR7);
    if (VAR5->VAR15 == 0)
    {
        FUN8(VAR2, VAR16, VAR17, 0, "");
        goto VAR10;
    }
    if (VAR5->VAR14 & ~VAR18)
    {
        register struct VAR19 *VAR20;
        struct VAR21 *VAR22;
        for (VAR22 = VAR4->VAR19.VAR23.VAR24; VAR22 != &VAR4->VAR19.VAR23; VAR22 = VAR22->VAR24)
        {
            VAR20 = FUN9(VAR22, struct VAR19, VAR23);
            if (VAR5->VAR13 == VAR20->VAR25 && VAR5->VAR26.VAR27 == VAR20->VAR28.VAR27 && VAR5->VAR29.VAR27 == VAR20->VAR30.VAR27 && VAR5->VAR31 == VAR20->VAR32)
                goto VAR33;
        }
        VAR20 = NULL;
    VAR33:
        VAR5->VAR12 -= VAR6;
        if (VAR5->VAR14 & VAR34)
            VAR5->VAR35 |= 1;
        else
            VAR5->VAR35 &= ~1;
        VAR5->VAR14 <<= 3;
        if (VAR5->VAR35 & 1 || VAR5->VAR14)
        {
            VAR5 = FUN10(VAR4, VAR5, VAR20);
            if (VAR5 == NULL)
                return;
            VAR2 = FUN11(VAR4, VAR5);
        }
        else if (VAR20)
            FUN12(VAR4, VAR20);
    }
    else
        VAR5->VAR12 -= VAR6;
    switch (VAR5->VAR31)
    {
    case VAR36:
        FUN13(VAR2, VAR6, (struct socket *)NULL, VAR37);
        break;
    case VAR38:
        FUN14(VAR2, VAR6);
        break;
    case VAR39:
        FUN15(VAR2, VAR6);
        break;
    default:
        FUN16(VAR2);
    }
    return;
VAR10:
    FUN16(VAR2);
}