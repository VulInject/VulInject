static void FUN1(void *VAR1)
{
    int32_t VAR2;
    int64_t VAR3;
    ssize_t VAR4 = 0;
    int32_t VAR5 = 0;
    size_t VAR6 = 7;
    int32_t VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR1;
    VAR12 *VAR13 = VAR11->VAR13;
    FUN2(VAR11, VAR6, "", &VAR2, &VAR3, &VAR7);
    VAR9 = FUN3(VAR11, VAR2);
    if (VAR9 == NULL)
    {
        VAR4 = -VAR14;
        goto VAR15;
    }
    if (VAR9->VAR16 == VAR17)
    {
        if (VAR3 == 0)
        {
            FUN4(VAR11, VAR9);
        }
        VAR5 = FUN5(VAR11, VAR9, VAR7);
        if (VAR5 < 0)
        {
            VAR4 = VAR5;
            goto VAR18;
        }
        VAR4 = VAR6;
        VAR4 += FUN6(VAR11, VAR6, "", VAR5);
        VAR4 += VAR5;
    }
    else if (VAR9->VAR16 == VAR19)
    {
        int32_t VAR20;
        int32_t VAR21;
        struct VAR22 *VAR23;
        struct iovec VAR24[128];
        VAR23 = VAR24;
        FUN6(VAR11, VAR6 + 4, "", VAR23, &VAR20);
        VAR23 = FUN7(VAR23, VAR7, &VAR20);
        do
        {
            if (0)
            {
                FUN8(VAR23, VAR20);
            }
            do
            {
                VAR21 = FUN9(VAR11, VAR9, VAR23, VAR20, VAR3);
                if (VAR21 >= 0)
                {
                    VAR3 += VAR21;
                    VAR5 += VAR21;
                }
            } while (VAR21 == -VAR25 && !VAR11->VAR26);
            if (VAR21 < 0)
            {
                VAR4 = VAR21;
                goto VAR18;
            }
            VAR23 = FUN10(VAR23, VAR21, &VAR20);
        } while (VAR5 < VAR7 && VAR21 > 0);
        VAR4 = VAR6;
        VAR4 += FUN6(VAR11, VAR6, "", VAR5);
        VAR4 += VAR5;
    }
    else if (VAR9->VAR16 == VAR27)
    {
        VAR4 = FUN11(VAR13, VAR11, VAR9, VAR3, VAR7);
    }
    else
    {
        VAR4 = -VAR14;
    }
VAR18:
    FUN12(VAR11, VAR9);
VAR15:
    FUN13(VAR11->VAR28, VAR11->VAR29, VAR5, VAR4);
    FUN14(VAR13, VAR11, VAR4);