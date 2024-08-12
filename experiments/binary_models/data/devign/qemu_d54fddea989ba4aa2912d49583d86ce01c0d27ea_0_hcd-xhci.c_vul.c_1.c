static void FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = NULL;
    uint64_t VAR14;
    unsigned int VAR15 = 0;
    int VAR16;
    int VAR17;
    FUN2(VAR2->VAR18, VAR2->VAR19, VAR3);
    assert(!VAR2->VAR20);
    if (!VAR5->VAR21[VAR2->VAR18 - 1].VAR22 || !VAR5->VAR21[VAR2->VAR18 - 1].VAR22->VAR23 || !VAR5->VAR21[VAR2->VAR18 - 1].VAR22->VAR23->VAR24)
    {
        return;
    }
    if (VAR2->VAR25)
    {
        VAR8 *VAR9 = VAR2->VAR25;
        FUN3(VAR9);
        assert(VAR9->VAR26);
        if (VAR9->VAR27)
        {
            VAR14 = FUN4(VAR5);
            FUN5(VAR5, VAR9, VAR2, VAR14);
            if (VAR9->VAR26)
            {
                return;
            }
            VAR9->VAR27 = 0;
            VAR9->VAR26 = 1;
        }
        if (VAR9->VAR28)
        {
            if (FUN6(VAR9) < 0)
            {
                return;
            }
            FUN7(VAR9->VAR29.VAR13->VAR23, &VAR9->VAR29);
            assert(VAR9->VAR29.VAR30 != VAR31);
            FUN8(VAR9);
        }
        else
        {
            if (FUN6(VAR9) < 0)
            {
                return;
            }
            FUN7(VAR9->VAR29.VAR13->VAR23, &VAR9->VAR29);
            if (VAR9->VAR29.VAR30 == VAR31)
            {
                return;
            }
            FUN8(VAR9);
        }
        assert(!VAR9->VAR26);
        if (VAR9->VAR32)
        {
            FUN9(VAR2->VAR25);
        }
        VAR2->VAR25 = NULL;
    }
    if (VAR2->VAR33 == VAR34)
    {
        FUN10("");
        return;
    }
    if (VAR2->VAR35)
    {
        uint32_t VAR36;
        VAR7 = FUN11(VAR2, VAR3, &VAR36);
        if (VAR7 == NULL)
        {
            return;
        }
        VAR11 = &VAR7->VAR11;
        FUN12(VAR5, VAR2, VAR7, VAR37);
    }
    else
    {
        VAR11 = &VAR2->VAR11;
        VAR3 = 0;
        FUN12(VAR5, VAR2, NULL, VAR37);
    }
    assert(VAR11->VAR38 != 0);
    VAR2->VAR20++;
    while (1)
    {
        VAR16 = FUN13(VAR5, VAR11);
        if (VAR16 <= 0)
        {
            break;
        }
        VAR9 = FUN14(VAR2, VAR16);
        if (VAR9 == NULL)
        {
            break;
        }
        for (VAR17 = 0; VAR17 < VAR16; VAR17++)
        {
            TRBType VAR39;
            VAR39 = FUN15(VAR5, VAR11, &VAR9->VAR40[VAR17], NULL);
            assert(VAR39);
        }
        VAR9->VAR3 = VAR3;
        if (VAR2->VAR19 == 1)
        {
            FUN16(VAR5, VAR9);
        }
        else
        {
            FUN17(VAR5, VAR9, VAR2);
        }
        if (VAR9->VAR32)
        {
            FUN9(VAR9);
            VAR9 = NULL;
        }
        if (VAR2->VAR33 == VAR34)
        {
            break;
        }
        if (VAR9 != NULL && VAR9->VAR26)
        {
            FUN10("");
            VAR2->VAR25 = VAR9;
            break;
        }
        if (VAR15++ > VAR41)
        {
            FUN18("");
            break;
        }
    }
    FUN12(VAR5, VAR2, VAR7, VAR2->VAR33);
    VAR2->VAR20--;
    VAR13 = FUN19(VAR2);
    if (VAR13)
    {
        FUN20(VAR13->VAR23, VAR13);
    }
}