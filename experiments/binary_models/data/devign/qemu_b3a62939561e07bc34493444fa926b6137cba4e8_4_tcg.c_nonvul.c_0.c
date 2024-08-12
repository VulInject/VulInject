static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, TCGOpcode VAR5, const VAR6 *VAR7, uint16_t VAR8, uint8_t VAR9)
{
    TCGRegSet VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    TCGArg VAR16;
    const VAR17 *VAR18;
    VAR19 *VAR20;
    TCGArg VAR21[VAR22];
    int VAR23[VAR22];
    VAR14 = VAR4->VAR14;
    VAR13 = VAR4->VAR13;
    memcpy(VAR21 + VAR14 + VAR13, VAR7 + VAR14 + VAR13, sizeof(VAR6) * VAR4->VAR24);
    FUN2(VAR10, VAR2->VAR25);
    for (VAR12 = 0; VAR12 < VAR13; VAR12++)
    {
        VAR11 = VAR4->VAR26[VAR14 + VAR12];
        VAR16 = VAR7[VAR11];
        VAR18 = &VAR4->VAR27[VAR11];
        VAR20 = &VAR2->VAR28[VAR16];
        if (VAR20->VAR29 == VAR30)
        {
            VAR15 = FUN3(VAR2, VAR18->VAR31.VAR32, VAR10);
            FUN4(VAR2, VAR20->VAR33, VAR15, VAR20->VAR34->VAR15, VAR20->VAR35);
            VAR20->VAR29 = VAR36;
            VAR20->VAR15 = VAR15;
            VAR20->VAR37 = 1;
            VAR2->VAR38[VAR15] = VAR16;
        }
        else if (VAR20->VAR29 == VAR39)
        {
            if (FUN5(VAR20->VAR40, VAR20->VAR33, VAR18))
            {
                VAR23[VAR11] = 1;
                VAR21[VAR11] = VAR20->VAR40;
                goto VAR41;
            }
            else
            {
                VAR15 = FUN3(VAR2, VAR18->VAR31.VAR32, VAR10);
                FUN6(VAR2, VAR20->VAR33, VAR15, VAR20->VAR40);
                VAR20->VAR29 = VAR36;
                VAR20->VAR15 = VAR15;
                VAR20->VAR37 = 0;
                VAR2->VAR38[VAR15] = VAR16;
            }
        }
        assert(VAR20->VAR29 == VAR36);
        if (VAR18->VAR42 & VAR43)
        {
            if (VAR20->VAR44)
            {
                if (VAR16 != VAR7[VAR18->VAR45])
                    goto VAR46;
            }
            else
            {
                if (!FUN7(VAR11))
                {
                    goto VAR46;
                }
                int VAR47, VAR48;
                for (VAR47 = 0; VAR47 < VAR12; VAR47++)
                {
                    VAR48 = VAR4->VAR26[VAR14 + VAR47];
                    if ((VAR4->VAR27[VAR48].VAR42 & VAR43) && (VAR21[VAR48] == VAR20->VAR15))
                    {
                        goto VAR46;
                    }
                }
            }
        }
        VAR15 = VAR20->VAR15;
        if (FUN8(VAR18->VAR31.VAR32, VAR15))
        {
        }
        else
        {
        VAR46:
            VAR15 = FUN3(VAR2, VAR18->VAR31.VAR32, VAR10);
            FUN9(VAR2, VAR20->VAR33, VAR15, VAR20->VAR15);
        }
        VAR21[VAR11] = VAR15;
        VAR23[VAR11] = 0;
        FUN10(VAR10, VAR15);
    VAR41:;
    }
    for (VAR11 = VAR14; VAR11 < VAR14 + VAR13; VAR11++)
    {
        if (FUN7(VAR11))
        {
            FUN11(VAR2, VAR7[VAR11]);
        }
    }
    if (VAR4->VAR49 & VAR50)
    {
        FUN12(VAR2, VAR10);
    }
    else
    {
        if (VAR4->VAR49 & VAR51)
        {
            for (VAR15 = 0; VAR15 < VAR52; VAR15++)
            {
                if (FUN8(VAR53, VAR15))
                {
                    FUN13(VAR2, VAR15);
                }
            }
        }
        if (VAR4->VAR49 & VAR54)
        {
            FUN14(VAR2, VAR10);
        }
        FUN2(VAR10, VAR2->VAR25);
        for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        {
            VAR11 = VAR4->VAR26[VAR12];
            VAR16 = VAR7[VAR11];
            VAR18 = &VAR4->VAR27[VAR11];
            VAR20 = &VAR2->VAR28[VAR16];
            if (VAR18->VAR42 & VAR55)
            {
                VAR15 = VAR21[VAR18->VAR45];
            }
            else
            {
                VAR15 = VAR20->VAR15;
                if (VAR20->VAR44 && FUN8(VAR18->VAR31.VAR32, VAR15))
                {
                    goto VAR56;
                }
                VAR15 = FUN3(VAR2, VAR18->VAR31.VAR32, VAR10);
            }
            FUN10(VAR10, VAR15);
            if (!VAR20->VAR44)
            {
                if (VAR20->VAR29 == VAR36)
                {
                    VAR2->VAR38[VAR20->VAR15] = -1;
                }
                VAR20->VAR29 = VAR36;
                VAR20->VAR15 = VAR15;
                VAR20->VAR37 = 0;
                VAR2->VAR38[VAR15] = VAR16;
            }
        VAR56:
            VAR21[VAR11] = VAR15;
        }
    }
    FUN15(VAR2, VAR5, VAR21, VAR23);
    for (VAR11 = 0; VAR11 < VAR14; VAR11++)
    {
        VAR20 = &VAR2->VAR28[VAR7[VAR11]];
        VAR15 = VAR21[VAR11];
        if (VAR20->VAR44 && VAR20->VAR15 != VAR15)
        {
            FUN9(VAR2, VAR20->VAR33, VAR20->VAR15, VAR15);
        }
        if (FUN16(VAR11))
        {
            FUN17(VAR2, VAR15);
        }
        if (FUN7(VAR11))
        {
            FUN11(VAR2, VAR7[VAR11]);
        }
    }
}