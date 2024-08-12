static void FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, unsigned int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = NULL;
    uint64_t VAR14;
    int VAR15;
    int VAR16;
    FUN2(VAR3, VAR4, VAR5);
    assert(VAR3 >= 1 && VAR3 <= VAR2->VAR17);
    assert(VAR4 >= 1 && VAR4 <= 31);
    if (!VAR2->VAR18[VAR3 - 1].VAR19)
    {
        fprintf(VAR20, "", VAR3);
        return;
    }
    VAR9 = VAR2->VAR18[VAR3 - 1].VAR21[VAR4 - 1];
    if (!VAR9)
    {
        fprintf(VAR20, "", VAR4, VAR3);
        return;
    }
    if (VAR9->VAR22)
    {
        VAR23 *VAR24 = VAR9->VAR22;
        FUN3(VAR24);
        assert(VAR24->VAR25);
        if (VAR24->VAR26)
        {
            VAR14 = FUN4(VAR2);
            FUN5(VAR2, VAR24, VAR9, VAR14);
            if (VAR24->VAR25)
            {
                return;
            }
            if (FUN6(VAR24) < 0)
            {
                return;
            }
            FUN7(VAR24->VAR27.VAR13->VAR28, &VAR24->VAR27);
            assert(VAR24->VAR27.VAR29 != VAR30);
            FUN8(VAR24);
        }
        else
        {
            if (FUN6(VAR24) < 0)
            {
                return;
            }
            FUN7(VAR24->VAR27.VAR13->VAR28, &VAR24->VAR27);
            if (VAR24->VAR27.VAR29 == VAR30)
            {
                return;
            }
            FUN8(VAR24);
        }
        assert(!VAR24->VAR25);
        VAR9->VAR22 = NULL;
    }
    if (VAR9->VAR31 == VAR32)
    {
        FUN9("");
        return;
    }
    if (VAR9->VAR33)
    {
        uint32_t VAR34;
        VAR7 = FUN10(VAR9, VAR5, &VAR34);
        if (VAR7 == NULL)
        {
            return;
        }
        VAR11 = &VAR7->VAR11;
        FUN11(VAR2, VAR9, VAR7, VAR35);
    }
    else
    {
        VAR11 = &VAR9->VAR11;
        VAR5 = 0;
        FUN11(VAR2, VAR9, NULL, VAR35);
    }
    assert(VAR11->VAR36 != 0);
    while (1)
    {
        VAR23 *VAR24 = &VAR9->VAR37[VAR9->VAR38];
        if (VAR24->VAR39 || VAR24->VAR25)
        {
            break;
        }
        VAR15 = FUN12(VAR2, VAR11);
        if (VAR15 < 0)
        {
            break;
        }
        else if (VAR15 == 0)
        {
            break;
        }
        if (VAR24->VAR40 && VAR24->VAR41 < VAR15)
        {
            VAR24->VAR42 = 0;
            VAR24->VAR41 = 0;
            FUN13(VAR24->VAR40);
            VAR24->VAR40 = NULL;
        }
        if (!VAR24->VAR40)
        {
            VAR24->VAR40 = FUN14(sizeof(VAR43) * VAR15);
            VAR24->VAR41 = VAR15;
        }
        VAR24->VAR42 = VAR15;
        for (VAR16 = 0; VAR16 < VAR15; VAR16++)
        {
            assert(FUN15(VAR2, VAR11, &VAR24->VAR40[VAR16], NULL));
        }
        VAR24->VAR2 = VAR2;
        VAR24->VAR4 = VAR4;
        VAR24->VAR3 = VAR3;
        VAR24->VAR5 = VAR5;
        if (VAR4 == 1)
        {
            if (FUN16(VAR2, VAR24) >= 0)
            {
                VAR9->VAR38 = (VAR9->VAR38 + 1) % VAR44;
                VAR13 = VAR24->VAR27.VAR13;
            }
            else
            {
                fprintf(VAR20, "");
            }
        }
        else
        {
            if (FUN17(VAR2, VAR24, VAR9) >= 0)
            {
                VAR9->VAR38 = (VAR9->VAR38 + 1) % VAR44;
                VAR13 = VAR24->VAR27.VAR13;
            }
            else
            {
                if (!VAR24->VAR26)
                {
                    fprintf(VAR20, "");
                }
            }
        }
        if (VAR9->VAR31 == VAR32)
        {
            break;
        }
        if (VAR24->VAR25)
        {
            FUN9("");
            VAR9->VAR22 = VAR24;
            break;
        }
    }
    if (VAR13)
    {
        FUN18(VAR13->VAR28, VAR13);
    }
}