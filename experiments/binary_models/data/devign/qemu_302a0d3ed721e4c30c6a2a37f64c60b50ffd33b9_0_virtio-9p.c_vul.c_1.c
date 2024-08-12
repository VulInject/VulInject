static void FUN1(void *VAR1)
{
    int VAR2;
    ssize_t VAR3;
    int32_t VAR4;
    int64_t VAR5;
    int32_t VAR6;
    int32_t VAR7 = 0;
    int32_t VAR8 = 0;
    size_t VAR9 = 7;
    VAR10 *VAR11;
    struct iovec VAR12[128];
    struct VAR13 *VAR14 = VAR12;
    VAR15 *VAR16 = VAR1;
    VAR17 *VAR18 = VAR16->VAR18;
    FUN2(VAR16, VAR9, "", &VAR4, &VAR5, &VAR6, VAR14, &VAR2);
    FUN3(VAR16->VAR19, VAR16->VAR20, VAR4, VAR5, VAR6, VAR2);
    VAR11 = FUN4(VAR16, VAR4);
    if (VAR11 == NULL)
    {
        VAR3 = -VAR21;
        goto VAR22;
    }
    if (VAR11->VAR23 == VAR24)
    {
        if (VAR11->VAR25.VAR26 == -1)
        {
            VAR3 = -VAR21;
            goto VAR27;
        }
    }
    else if (VAR11->VAR23 == VAR28)
    {
        VAR3 = FUN5(VAR18, VAR16, VAR11, VAR5, VAR6, VAR14, VAR2);
        goto VAR27;
    }
    else
    {
        VAR3 = -VAR21;
        goto VAR27;
    }
    VAR14 = FUN6(VAR14, VAR6, &VAR2);
    do
    {
        if (0)
        {
            FUN7(VAR14, VAR2);
        }
        do
        {
            VAR7 = FUN8(VAR16, VAR11, VAR14, VAR2, VAR5);
            if (VAR7 >= 0)
            {
                VAR5 += VAR7;
                VAR8 += VAR7;
            }
        } while (VAR7 == -VAR29 && !VAR16->VAR30);
        if (VAR7 < 0)
        {
            VAR3 = VAR7;
            goto VAR27;
        }
        VAR14 = FUN9(VAR14, VAR7, &VAR2);
    } while (VAR8 < VAR6 && VAR7 > 0);
    VAR9 += FUN10(VAR16, VAR9, "", VAR8);
    VAR3 = VAR9;
    FUN11(VAR16->VAR19, VAR16->VAR20, VAR8, VAR3);
VAR27:
    FUN12(VAR16, VAR11);
VAR22:
    FUN13(VAR18, VAR16, VAR3);
}