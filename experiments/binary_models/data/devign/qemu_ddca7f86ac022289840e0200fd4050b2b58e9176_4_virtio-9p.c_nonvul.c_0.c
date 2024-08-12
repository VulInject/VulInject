static void FUN1(void *VAR1)
{
    int32_t VAR2;
    uint64_t VAR3;
    ssize_t VAR4 = 0;
    int32_t VAR5 = 0;
    size_t VAR6 = 7;
    uint32_t VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR1;
    VAR12 *VAR13 = VAR11->VAR13;
    VAR4 = FUN2(VAR11, VAR6, "", &VAR2, &VAR3, &VAR7);
    if (VAR4 < 0)
    {
        goto VAR14;
    }
    FUN3(VAR11->VAR15, VAR11->VAR16, VAR2, VAR3, VAR7);
    VAR9 = FUN4(VAR11, VAR2);
    if (VAR9 == NULL)
    {
        VAR4 = -VAR17;
        goto VAR14;
    }
    if (VAR9->VAR18 == VAR19)
    {
        if (VAR3 == 0)
        {
            FUN5(VAR11, VAR9);
        }
        VAR5 = FUN6(VAR11, VAR9, VAR7);
        if (VAR5 < 0)
        {
            VAR4 = VAR5;
            goto VAR20;
        }
        VAR4 = FUN7(VAR11, VAR6, "", VAR5);
        if (VAR4 < 0)
        {
            goto VAR20;
        }
        VAR4 += VAR6 + VAR5;
    }
    else if (VAR9->VAR18 == VAR21)
    {
        QEMUIOVector VAR22;
        QEMUIOVector VAR23;
        int32_t VAR24;
        FUN8(&VAR22, VAR11, VAR6 + 4, VAR7, false);
        FUN9(&VAR23, VAR22.VAR25);
        do
        {
            FUN10(&VAR23);
            FUN11(&VAR23, &VAR22, VAR5, VAR22.VAR26 - VAR5);
            if (0)
            {
                FUN12(VAR23.VAR27, VAR23.VAR25);
            }
            do
            {
                VAR24 = FUN13(VAR11, VAR9, VAR23.VAR27, VAR23.VAR25, VAR3);
                if (VAR24 >= 0)
                {
                    VAR3 += VAR24;
                    VAR5 += VAR24;
                }
            } while (VAR24 == -VAR28 && !VAR11->VAR29);
            if (VAR24 < 0)
            {
                VAR4 = VAR24;
                goto VAR20;
            }
        } while (VAR5 < VAR7 && VAR24 > 0);
        VAR4 = FUN7(VAR11, VAR6, "", VAR5);
        if (VAR4 < 0)
        {
            goto VAR20;
        }
        VAR4 += VAR6 + VAR5;
        FUN14(&VAR23);
        FUN14(&VAR22);
    }
    else if (VAR9->VAR18 == VAR30)
    {
        VAR4 = FUN15(VAR13, VAR11, VAR9, VAR3, VAR7);
    }
    else
    {
        VAR4 = -VAR17;
    }
    FUN16(VAR11->VAR15, VAR11->VAR16, VAR5, VAR4);
VAR20:
    FUN17(VAR11, VAR9);
VAR14:
    FUN18(VAR13, VAR11, VAR4);
}