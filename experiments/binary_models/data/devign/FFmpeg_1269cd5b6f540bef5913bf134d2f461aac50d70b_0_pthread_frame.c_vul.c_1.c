int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10->VAR11;
    int VAR12 = VAR9->VAR13;
    VAR14 *VAR15;
    int VAR16;
    FUN2(VAR9);
    VAR15 = &VAR9->VAR17[VAR9->VAR18];
    VAR16 = FUN3(VAR15->VAR2, VAR2);
    if (VAR16)
        goto VAR19;
    VAR16 = FUN4(VAR15, VAR7);
    if (VAR16)
        goto VAR19;
    if (VAR9->VAR18 > (VAR2->VAR20 - 1 - (VAR2->VAR21 == VAR22)))
        VAR9->VAR23 = 0;
    if (VAR9->VAR23)
    {
        *VAR5 = 0;
        if (VAR7->VAR24)
        {
            VAR16 = VAR7->VAR24;
            goto VAR19;
        }
    }
    do
    {
        VAR15 = &VAR9->VAR17[VAR12++];
        if (FUN5(&VAR15->VAR25) != VAR26)
        {
            pthread_mutex_lock(&VAR15->VAR27);
            while (FUN6(&VAR15->VAR25, VAR28) != VAR26)
                FUN7(&VAR15->VAR29, &VAR15->VAR27);
            pthread_mutex_unlock(&VAR15->VAR27);
        }
        FUN8(VAR4, VAR15->VAR30);
        *VAR5 = VAR15->VAR31;
        VAR4->VAR32 = VAR15->VAR7.VAR33;
        if (VAR15->VAR34 < 0)
            VAR16 = VAR15->VAR34;
        VAR15->VAR31 = 0;
        if (VAR12 >= VAR2->VAR20)
            VAR12 = 0;
    } while (!VAR7->VAR24 && !*VAR5 && VAR12 != VAR9->VAR13);
    FUN9(VAR2, VAR15->VAR2, 1);
    if (VAR9->VAR18 >= VAR2->VAR20)
        VAR9->VAR18 = 0;
    VAR9->VAR13 = VAR12;
    if (VAR16 >= 0)
        VAR16 = VAR7->VAR24;
VAR19:
    FUN10(VAR9);
    return VAR16;
}