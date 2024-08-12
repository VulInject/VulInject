static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR3;
    VAR4 *VAR5 = VAR2->VAR5;
    VAR1 *VAR6 = VAR2;
    VAR7 *VAR8;
    int VAR9, VAR10 = 0;
    if (VAR3 <= 1)
    {
        VAR2->VAR11 = 0;
        return 0;
    }
    VAR2->VAR12 = VAR8 = FUN2(sizeof(VAR7));
    VAR8->VAR13 = FUN2(sizeof(VAR14) * VAR3);
    pthread_mutex_init(&VAR8->VAR15, NULL);
    VAR8->VAR16 = 1;
    for (VAR9 = 0; VAR9 < VAR3; VAR9++)
    {
        VAR1 *copy = FUN3(sizeof(VAR1));
        VAR14 *VAR17 = &VAR8->VAR13[VAR9];
        pthread_mutex_init(&VAR17->mutex, NULL);
        pthread_mutex_init(&VAR17->VAR18, NULL);
        pthread_cond_init(&VAR17->VAR19, NULL);
        pthread_cond_init(&VAR17->VAR20, NULL);
        pthread_cond_init(&VAR17->VAR21, NULL);
        VAR17->VAR22 = VAR8;
        VAR17->VAR2 = copy;
        if (!copy)
        {
            VAR10 = FUN4(VAR23);
            goto VAR24;
        }
        *copy = *VAR6;
        copy->VAR12 = VAR17;
        copy->VAR25 = &VAR17->VAR26;
        if (!VAR9)
        {
            VAR6 = copy;
            if (VAR5->VAR27)
                VAR10 = VAR5->FUN5(copy);
            FUN6(VAR2, copy, 1);
        }
        else
        {
            copy->VAR28 = FUN3(VAR5->VAR29);
            if (!copy->VAR28)
            {
                VAR10 = FUN4(VAR23);
                goto VAR24;
            }
            memcpy(copy->VAR28, VAR6->VAR28, VAR5->VAR29);
            copy->VAR30 = FUN3(sizeof(VAR31));
            if (!copy->VAR30)
            {
                VAR10 = FUN4(VAR23);
                goto VAR24;
            }
            *(copy->VAR30) = *(VAR6->VAR30);
            copy->VAR30->VAR32 = 1;
            if (VAR5->VAR33)
                VAR10 = VAR5->FUN7(copy);
        }
        if (VAR10)
            goto VAR24;
        FUN8(&VAR17->VAR34, NULL, VAR35, VAR17);
    }
    return 0;
VAR24:
    FUN9(VAR2, VAR9 + 1);
    return VAR10;
}