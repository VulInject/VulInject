int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR3;
    const VAR4 *VAR5 = VAR2->VAR5;
    VAR1 *VAR6 = VAR2;
    VAR7 *VAR8;
    int VAR9, VAR10 = 0;
    FUN2();
    if (!VAR3)
    {
        int VAR11 = FUN3();
        FUN4(VAR2, VAR12, "", VAR11);
        if (VAR11 > 1)
            VAR3 = VAR2->VAR3 = FUN5(VAR11 + 1, VAR13);
        else
            VAR3 = VAR2->VAR3 = 1;
    }
    if (VAR3 <= 1)
    {
        VAR2->VAR14 = 0;
        return 0;
    }
    VAR2->VAR15->VAR16 = VAR8 = FUN6(sizeof(VAR7));
    VAR8->VAR17 = FUN6(sizeof(VAR18) * VAR3);
    pthread_mutex_init(&VAR8->VAR19, NULL);
    VAR8->VAR20 = 1;
    for (VAR9 = 0; VAR9 < VAR3; VAR9++)
    {
        VAR1 *copy = FUN7(sizeof(VAR1));
        VAR18 *VAR21 = &VAR8->VAR17[VAR9];
        pthread_mutex_init(&VAR21->mutex, NULL);
        pthread_mutex_init(&VAR21->VAR22, NULL);
        pthread_cond_init(&VAR21->VAR23, NULL);
        pthread_cond_init(&VAR21->VAR24, NULL);
        pthread_cond_init(&VAR21->VAR25, NULL);
        VAR21->VAR26 = FUN8();
        if (!VAR21->VAR26)
        {
            VAR10 = FUN9(VAR27);
            goto VAR28;
        }
        VAR21->VAR29 = VAR8;
        VAR21->VAR2 = copy;
        if (!copy)
        {
            VAR10 = FUN9(VAR27);
            goto VAR28;
        }
        *copy = *VAR6;
        copy->VAR15 = FUN7(sizeof(VAR30));
        if (!copy->VAR15)
        {
            VAR10 = FUN9(VAR27);
            goto VAR28;
        }
        *copy->VAR15 = *VAR6->VAR15;
        copy->VAR15->VAR16 = VAR21;
        copy->VAR15->VAR31 = &VAR21->VAR32;
        if (!VAR9)
        {
            VAR6 = copy;
            if (VAR5->VAR33)
                VAR10 = VAR5->FUN10(copy);
            FUN11(VAR2, copy, 1);
        }
        else
        {
            copy->VAR34 = FUN7(VAR5->VAR35);
            if (!copy->VAR34)
            {
                VAR10 = FUN9(VAR27);
                goto VAR28;
            }
            memcpy(copy->VAR34, VAR6->VAR34, VAR5->VAR35);
            copy->VAR15->VAR36 = 1;
            if (VAR5->VAR37)
                VAR10 = VAR5->FUN12(copy);
        }
        if (VAR10)
            goto VAR28;
        if (!FUN13(&VAR21->VAR38, NULL, VAR39, VAR21))
            VAR21->VAR40 = 1;
    }
    return 0;
VAR28:
    FUN14(VAR2, VAR9 + 1);
    return VAR10;