static VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, const VAR8 *VAR9, VAR5 *VAR10, int VAR11)
{
    assert(VAR4 != NULL);
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR5 *VAR16, *VAR17;
    if (VAR2 == NULL)
    {
        VAR2 = FUN2(VAR1, 1);
        FUN3(VAR2);
    }
    if (!VAR6)
    {
        VAR6 = FUN4();
    }
    FUN5(VAR13, VAR2, VAR18)
    {
        if (VAR4 == VAR13->VAR19.VAR4)
        {
            break;
        }
    }
    if (!VAR10)
    {
        FUN6(VAR6, VAR7);
    }
    if (VAR13)
    {
        VAR16 = FUN7(VAR13->VAR19.VAR17);
    }
    else
    {
        VAR16 = FUN7(VAR4->VAR17);
    }
    FUN8(VAR4, VAR6, VAR16);
    FUN9(VAR16);
    VAR17 = FUN7(VAR6);
    if (VAR10)
    {
        assert(!VAR7);
        VAR9->FUN10(&VAR7, VAR6, VAR11, VAR10);
    }
    VAR16 = FUN7(VAR4->VAR6);
    FUN8(VAR4, VAR6, VAR16);
    FUN9(VAR16);
    VAR7 &= ~VAR20;
    FUN11(VAR15, &VAR4->VAR21, VAR22)
    {
        VAR5 *VAR23;
        char *VAR24;
        if (VAR15->VAR4->VAR25 != VAR4)
        {
            continue;
        }
        VAR24 = FUN12("", VAR15->VAR26);
        FUN13(VAR6, &VAR23, VAR24);
        FUN14(VAR24);
        FUN1(VAR2, VAR15->VAR4, VAR23, 0, VAR15->VAR9, VAR6, VAR7);
    }
    if (!VAR13)
    {
        VAR13 = FUN2(VAR12, 1);
        FUN15(VAR2, VAR13, VAR18);
    }
    else
    {
        FUN9(VAR13->VAR19.VAR6);
        FUN9(VAR13->VAR19.VAR17);
    }
    VAR13->VAR19.VAR4 = VAR4;
    VAR13->VAR19.VAR6 = VAR6;
    VAR13->VAR19.VAR17 = VAR17;
    VAR13->VAR19.VAR7 = VAR7;
    return VAR2;
}