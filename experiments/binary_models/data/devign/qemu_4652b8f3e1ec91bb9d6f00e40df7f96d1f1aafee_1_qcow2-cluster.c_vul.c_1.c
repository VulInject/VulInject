static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR4->VAR10;
    VAR8 *VAR11 = &VAR4->VAR12;
    unsigned VAR13;
    unsigned VAR14 = VAR11->VAR15 - (VAR9->VAR15 + VAR9->VAR16);
    bool VAR17;
    VAR18 *VAR19, *VAR20;
    QEMUIOVector VAR21;
    int VAR22;
    assert(VAR9->VAR16 <= VAR23 - VAR11->VAR16);
    assert(VAR9->VAR16 + VAR11->VAR16 <= VAR23 - VAR14);
    assert(VAR9->VAR15 + VAR9->VAR16 <= VAR11->VAR15);
    assert(!VAR4->VAR24 || VAR4->VAR24->VAR25 == VAR14);
    if (VAR9->VAR16 == 0 && VAR11->VAR16 == 0)
    {
        return 0;
    }
    VAR17 = VAR9->VAR16 && VAR11->VAR16 && VAR14 <= 16384;
    if (VAR17)
    {
        VAR13 = VAR9->VAR16 + VAR14 + VAR11->VAR16;
    }
    else
    {
        size_t VAR26 = FUN2(VAR2);
        assert(VAR26 > 0 && VAR26 <= VAR23);
        assert(FUN3(VAR9->VAR16, VAR26) <= VAR23 - VAR11->VAR16);
        VAR13 = FUN3(VAR9->VAR16, VAR26) + VAR11->VAR16;
    }
    VAR19 = FUN4(VAR2, VAR13);
    if (VAR19 == NULL)
    {
        return -VAR27;
    }
    VAR20 = VAR19 + VAR13 - VAR11->VAR16;
    FUN5(&VAR21, 2 + (VAR4->VAR24 ? VAR4->VAR24->VAR28 : 0));
    FUN6(&VAR6->VAR29);
    if (VAR17)
    {
        FUN7(&VAR21, VAR19, VAR13);
        VAR22 = FUN8(VAR2, VAR4->VAR15, VAR9->VAR15, &VAR21);
    }
    else
    {
        FUN7(&VAR21, VAR19, VAR9->VAR16);
        VAR22 = FUN8(VAR2, VAR4->VAR15, VAR9->VAR15, &VAR21);
        if (VAR22 < 0)
        {
            goto VAR30;
        }
        FUN9(&VAR21);
        FUN7(&VAR21, VAR20, VAR11->VAR16);
        VAR22 = FUN8(VAR2, VAR4->VAR15, VAR11->VAR15, &VAR21);
    }
    if (VAR22 < 0)
    {
        goto VAR30;
    }
    if (VAR2->VAR31)
    {
        if (!FUN10(VAR2, VAR4->VAR15, VAR9->VAR15, VAR19, VAR9->VAR16) || !FUN10(VAR2, VAR4->VAR15, VAR11->VAR15, VAR20, VAR11->VAR16))
        {
            VAR22 = -VAR32;
            goto VAR30;
        }
    }
    if (VAR4->VAR24)
    {
        FUN9(&VAR21);
        if (VAR9->VAR16)
        {
            FUN7(&VAR21, VAR19, VAR9->VAR16);
        }
        FUN11(&VAR21, VAR4->VAR24, 0, VAR14);
        if (VAR11->VAR16)
        {
            FUN7(&VAR21, VAR20, VAR11->VAR16);
        }
        FUN12(VAR2->VAR33, VAR34);
        VAR22 = FUN13(VAR2, VAR4->VAR35, VAR9->VAR15, &VAR21);
    }
    else
    {
        FUN9(&VAR21);
        FUN7(&VAR21, VAR19, VAR9->VAR16);
        VAR22 = FUN13(VAR2, VAR4->VAR35, VAR9->VAR15, &VAR21);
        if (VAR22 < 0)
        {
            goto VAR30;
        }
        FUN9(&VAR21);
        FUN7(&VAR21, VAR20, VAR11->VAR16);
        VAR22 = FUN13(VAR2, VAR4->VAR35, VAR11->VAR15, &VAR21);
    }
VAR30:
    FUN14(&VAR6->VAR29);
    if (VAR22 == 0)
    {
        FUN15(VAR6->VAR36);
    }
    FUN16(VAR19);
    FUN17(&VAR21);
    return VAR22;
}