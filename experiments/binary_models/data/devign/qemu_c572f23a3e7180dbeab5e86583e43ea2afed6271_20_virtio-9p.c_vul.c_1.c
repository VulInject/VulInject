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
    FUN2(VAR12, VAR5, "", &VAR6, &VAR7, &VAR3);
    VAR9 = FUN3(VAR12, VAR6);
    if (VAR9 == NULL)
    {
        VAR4 = -VAR15;
        goto VAR16;
    }
    VAR10 = FUN4(VAR14, VAR7);
    if (VAR10 == NULL)
    {
        VAR4 = -VAR17;
        goto VAR18;
    }
    FUN5(&VAR10->VAR19, &VAR9->VAR19);
    if (VAR3.VAR20[0] == 0)
    {
        VAR2 = FUN6(VAR12, &VAR10->VAR19, NULL, 0);
        if (VAR2 < 0)
        {
            VAR4 = VAR2;
            FUN7(VAR14, VAR10->VAR6);
            goto VAR18;
        }
        VAR10->VAR21.VAR22.VAR23 = VAR2;
        VAR10->VAR24 = VAR25;
        VAR10->VAR21.VAR22.VAR26 = -1;
        if (VAR2)
        {
            VAR10->VAR21.VAR22.VAR27 = FUN8(VAR2);
            VAR4 = FUN6(VAR12, &VAR10->VAR19, VAR10->VAR21.VAR22.VAR27, VAR10->VAR21.VAR22.VAR23);
            if (VAR4 < 0)
            {
                FUN7(VAR14, VAR10->VAR6);
                goto VAR18;
            }
        }
        VAR5 += FUN9(VAR12, VAR5, "", VAR2);
        VAR4 = VAR5;
    }
    else
    {
        VAR2 = FUN10(VAR12, &VAR10->VAR19, &VAR3, NULL, 0);
        if (VAR2 < 0)
        {
            VAR4 = VAR2;
            FUN7(VAR14, VAR10->VAR6);
            goto VAR18;
        }
        VAR10->VAR21.VAR22.VAR23 = VAR2;
        VAR10->VAR24 = VAR25;
        VAR10->VAR21.VAR22.VAR26 = -1;
        if (VAR2)
        {
            VAR10->VAR21.VAR22.VAR27 = FUN8(VAR2);
            VAR4 = FUN10(VAR12, &VAR10->VAR19, &VAR3, VAR10->VAR21.VAR22.VAR27, VAR10->VAR21.VAR22.VAR23);
            if (VAR4 < 0)
            {
                FUN7(VAR14, VAR10->VAR6);
                goto VAR18;
            }
        }
        VAR5 += FUN9(VAR12, VAR5, "", VAR2);
        VAR4 = VAR5;
    }
VAR18:
    FUN11(VAR12, VAR9);
    if (VAR10)
    {
        FUN11(VAR12, VAR10);
    }
VAR16:
    FUN12(VAR12->VAR28, VAR12->VAR29, VAR2);
    FUN13(VAR14, VAR12, VAR4);
    FUN14(&VAR3);