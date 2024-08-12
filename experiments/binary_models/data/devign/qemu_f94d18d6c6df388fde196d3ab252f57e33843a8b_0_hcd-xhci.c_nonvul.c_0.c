static void FUN1(VAR1 *VAR2, unsigned int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = NULL;
    uint64_t VAR14;
    int VAR15;
    int VAR16;
    FUN2(VAR2->VAR17, VAR2->VAR18, VAR3);
    if (!VAR5->VAR19[VAR2->VAR17 - 1].VAR20 || !VAR5->VAR19[VAR2->VAR17 - 1].VAR20->VAR21 || !VAR5->VAR19[VAR2->VAR17 - 1].VAR20->VAR21->VAR22)
    {
        return;
    }
    if (VAR2->VAR23)
    {
        VAR8 *VAR9 = VAR2->VAR23;
        FUN3(VAR9);
        assert(VAR9->VAR24);
        if (VAR9->VAR25)
        {
            VAR14 = FUN4(VAR5);
            FUN5(VAR5, VAR9, VAR2, VAR14);
            if (VAR9->VAR24)
            {
                return;
            }
            VAR9->VAR25 = 0;
            VAR9->VAR24 = 1;
        }
        if (VAR9->VAR26)
        {
            if (FUN6(VAR9) < 0)
            {
                return;
            }
            FUN7(VAR9->VAR27.VAR13->VAR21, &VAR9->VAR27);
            assert(VAR9->VAR27.VAR28 != VAR29);
            FUN8(VAR9);
        }
        else
        {
            if (FUN6(VAR9) < 0)
            {
                return;
            }
            FUN7(VAR9->VAR27.VAR13->VAR21, &VAR9->VAR27);
            if (VAR9->VAR27.VAR28 == VAR29)
            {
                return;
            }
            FUN8(VAR9);
        }
        assert(!VAR9->VAR24);
        if (VAR9->VAR30)
        {
            FUN9(VAR2->VAR23);
        }
        VAR2->VAR23 = NULL;
    }
    if (VAR2->VAR31 == VAR32)
    {
        FUN10("");
        return;
    }
    if (VAR2->VAR33)
    {
        uint32_t VAR34;
        VAR7 = FUN11(VAR2, VAR3, &VAR34);
        if (VAR7 == NULL)
        {
            return;
        }
        VAR11 = &VAR7->VAR11;
        FUN12(VAR5, VAR2, VAR7, VAR35);
    }
    else
    {
        VAR11 = &VAR2->VAR11;
        VAR3 = 0;
        FUN12(VAR5, VAR2, NULL, VAR35);
    }
    assert(VAR11->VAR36 != 0);
    while (1)
    {
        VAR15 = FUN13(VAR5, VAR11);
        if (VAR15 <= 0)
        {
            break;
        }
        VAR9 = FUN14(VAR2, VAR15);
        if (VAR9 == NULL)
        {
            break;
        }
        for (VAR16 = 0; VAR16 < VAR15; VAR16++)
        {
            TRBType VAR37;
            VAR37 = FUN15(VAR5, VAR11, &VAR9->VAR38[VAR16], NULL);
            assert(VAR37);
        }
        VAR9->VAR3 = VAR3;
        if (VAR2->VAR18 == 1)
        {
            FUN16(VAR5, VAR9);
        }
        else
        {
            FUN17(VAR5, VAR9, VAR2);
        }
        if (VAR9->VAR30)
        {
            FUN9(VAR9);
            VAR9 = NULL;
        }
        if (VAR2->VAR31 == VAR32)
        {
            break;
        }
        if (VAR9 != NULL && VAR9->VAR24)
        {
            FUN10("");
            VAR2->VAR23 = VAR9;
            break;
        }
    }
    VAR13 = FUN18(VAR2);
    if (VAR13)
    {
        FUN19(VAR13->VAR21, VAR13);
    }
}