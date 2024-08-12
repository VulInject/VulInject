static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11 = 0;
    VAR5 *VAR12 = NULL;
    assert(VAR2 != NULL);
    assert(VAR2->VAR13 != NULL);
    VAR8 = VAR2->VAR13->VAR14;
    VAR2->VAR14 = FUN2(sizeof(VAR9));
    VAR10 = VAR2->VAR14;
    VAR10->VAR15 = VAR8->VAR15;
    if (FUN3(&VAR8->VAR16, &VAR10->VAR15, VAR2->VAR17))
    {
        FUN4(VAR6, "");
        return -1;
    }
    if (VAR8->VAR18 == VAR19 || VAR8->VAR18 == VAR20)
    {
        VAR10->VAR21 |= VAR22;
    }
    FUN5(VAR2->VAR17, &VAR10->VAR21);
    VAR10->VAR23 = -1;
    int VAR24 = VAR25 | VAR22;
    VAR24 |= VAR26;
    assert((VAR8->VAR21 & VAR27) == 0);
    if ((VAR10->VAR21 & ~VAR24) == (VAR8->VAR21 & ~VAR24))
    {
        VAR10->VAR23 = FUN6(VAR8->VAR23, VAR28, 0);
        VAR10->VAR23 = FUN7(VAR8->VAR23);
        if (VAR10->VAR23 != -1)
        {
            FUN8(VAR10->VAR23);
        }
        if (VAR10->VAR23 >= 0)
        {
            VAR11 = FUN9(VAR10->VAR23, VAR10->VAR21);
            if (VAR11)
            {
                FUN10(VAR10->VAR23);
                VAR10->VAR23 = -1;
            }
        }
    }
    if (VAR10->VAR23 == -1)
    {
        assert(!(VAR10->VAR21 & VAR29));
        VAR10->VAR23 = FUN11(VAR2->VAR13->VAR30, VAR10->VAR21);
        if (VAR10->VAR23 == -1)
        {
            FUN12(VAR6, VAR31, "");
            VAR11 = -1;
        }
    }
    if (VAR10->VAR23 != -1)
    {
        FUN13(VAR2->VAR13, VAR10->VAR23, &VAR12);
        if (VAR12)
        {
            FUN10(VAR10->VAR23);
            VAR10->VAR23 = -1;
            FUN14(VAR6, VAR12);
            VAR11 = -VAR32;
        }
    }
    return VAR11;
}