static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR3;
    VAR4 *VAR5 = VAR2->VAR5;
    VAR1 *VAR6 = VAR2;
    VAR7 *VAR8;
    int VAR9, VAR10 = 0;
    if (!VAR3)
    {
        int VAR11 = FUN2(VAR2);
        if (VAR11 > 1)
            VAR3 = VAR2->VAR3 = FUN3(VAR11 + 1, VAR12);
        else
            VAR3 = VAR2->VAR3 = 1;
    }
    if (VAR3 <= 1)
    {
        VAR2->VAR13 = 0;
        return 0;
    }
    VAR2->VAR14 = VAR8 = FUN4(sizeof(VAR7));
    VAR8->VAR15 = FUN4(sizeof(VAR16) * VAR3);
    pthread_mutex_init(&VAR8->VAR17, NULL);
    VAR8->VAR18 = 1;
    for (VAR9 = 0; VAR9 < VAR3; VAR9++)
    {
        VAR1 *copy = FUN5(sizeof(VAR1));
        VAR16 *VAR19 = &VAR8->VAR15[VAR9];
        pthread_mutex_init(&VAR19->mutex, NULL);
        pthread_mutex_init(&VAR19->VAR20, NULL);
        pthread_cond_init(&VAR19->VAR21, NULL);
        pthread_cond_init(&VAR19->VAR22, NULL);
        pthread_cond_init(&VAR19->VAR23, NULL);
        VAR19->VAR24 = VAR8;
        VAR19->VAR2 = copy;
        if (!copy)
        {
            VAR10 = FUN6(VAR25);
            goto VAR26;
        }
        *copy = *VAR6;
        copy->VAR14 = VAR19;
        copy->VAR27 = &VAR19->VAR28;
        if (!VAR9)
        {
            VAR6 = copy;
            if (VAR5->VAR29)
                VAR10 = VAR5->FUN7(copy);
            FUN8(VAR2, copy, 1);
        }
        else
        {
            copy->VAR30 = FUN5(VAR5->VAR31);
            if (!copy->VAR30)
            {
                VAR10 = FUN6(VAR25);
                goto VAR26;
            }
            memcpy(copy->VAR30, VAR6->VAR30, VAR5->VAR31);
            copy->VAR32 = FUN5(sizeof(VAR33));
            if (!copy->VAR32)
            {
                VAR10 = FUN6(VAR25);
                goto VAR26;
            }
            *(copy->VAR32) = *(VAR6->VAR32);
            copy->VAR32->VAR34 = 1;
            if (VAR5->VAR35)
                VAR10 = VAR5->FUN9(copy);
        }
        if (VAR10)
            goto VAR26;
        if (!FUN10(&VAR19->VAR36, NULL, VAR37, VAR19))
            VAR19->VAR38 = 1;
    }
    return 0;
VAR26:
    FUN11(VAR2, VAR9 + 1);
    return VAR10;
}