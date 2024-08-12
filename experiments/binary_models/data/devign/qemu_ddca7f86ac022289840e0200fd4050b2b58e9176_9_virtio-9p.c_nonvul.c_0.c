static void FUN1(void *VAR1)
{
    int64_t VAR2;
    V9fsString VAR3;
    ssize_t VAR4 = 0;
    size_t VAR5 = 7;
    int32_t VAR6, VAR7;
    VAR8 *VAR9;
    VAR8 *VAR10 = NULL;
    VAR11 *VAR12 = VAR1;
    VAR13 *VAR14 = VAR12->VAR14;
    FUN2(&VAR3);
    VAR4 = FUN3(VAR12, VAR5, "", &VAR6, &VAR7, &VAR3);
    if (VAR4 < 0)
    {
        goto VAR15;
    }
    FUN4(VAR12->VAR16, VAR12->VAR17, VAR6, VAR7, VAR3.VAR18);
    VAR9 = FUN5(VAR12, VAR6);
    if (VAR9 == NULL)
    {
        VAR4 = -VAR19;
        goto VAR15;
    }
    VAR10 = FUN6(VAR14, VAR7);
    if (VAR10 == NULL)
    {
        VAR4 = -VAR20;
        goto VAR21;
    }
    FUN7(&VAR10->VAR22, &VAR9->VAR22);
    if (VAR3.VAR18 == NULL)
    {
        VAR2 = FUN8(VAR12, &VAR10->VAR22, NULL, 0);
        if (VAR2 < 0)
        {
            VAR4 = VAR2;
            FUN9(VAR14, VAR10->VAR6);
            goto VAR21;
        }
        VAR10->VAR23.VAR24.VAR25 = VAR2;
        VAR10->VAR26 = VAR27;
        VAR10->VAR23.VAR24.VAR28 = -1;
        if (VAR2)
        {
            VAR10->VAR23.VAR24.VAR29 = FUN10(VAR2);
            VAR4 = FUN8(VAR12, &VAR10->VAR22, VAR10->VAR23.VAR24.VAR29, VAR10->VAR23.VAR24.VAR25);
            if (VAR4 < 0)
            {
                FUN9(VAR14, VAR10->VAR6);
                goto VAR21;
            }
        }
        VAR4 = FUN11(VAR12, VAR5, "", VAR2);
        if (VAR4 < 0)
        {
            goto VAR21;
        }
        VAR4 += VAR5;
    }
    else
    {
        VAR2 = FUN12(VAR12, &VAR10->VAR22, &VAR3, NULL, 0);
        if (VAR2 < 0)
        {
            VAR4 = VAR2;
            FUN9(VAR14, VAR10->VAR6);
            goto VAR21;
        }
        VAR10->VAR23.VAR24.VAR25 = VAR2;
        VAR10->VAR26 = VAR27;
        VAR10->VAR23.VAR24.VAR28 = -1;
        if (VAR2)
        {
            VAR10->VAR23.VAR24.VAR29 = FUN10(VAR2);
            VAR4 = FUN12(VAR12, &VAR10->VAR22, &VAR3, VAR10->VAR23.VAR24.VAR29, VAR10->VAR23.VAR24.VAR25);
            if (VAR4 < 0)
            {
                FUN9(VAR14, VAR10->VAR6);
                goto VAR21;
            }
        }
        VAR4 = FUN11(VAR12, VAR5, "", VAR2);
        if (VAR4 < 0)
        {
            goto VAR21;
        }
        VAR4 += VAR5;
    }
    FUN13(VAR12->VAR16, VAR12->VAR17, VAR2);
VAR21:
    FUN14(VAR12, VAR9);
    if (VAR10)
    {
        FUN14(VAR12, VAR10);
    }
VAR15:
    FUN15(VAR14, VAR12, VAR4);
    FUN16(&VAR3);
}