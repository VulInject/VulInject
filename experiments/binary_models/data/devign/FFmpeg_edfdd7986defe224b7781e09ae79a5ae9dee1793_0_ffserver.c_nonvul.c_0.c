static void FUN1(VAR1 *VAR2)
{
    VAR1 **VAR3, *VAR4;
    int VAR5, VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR3 = &VAR13;
    while ((*VAR3) != NULL)
    {
        VAR4 = *VAR3;
        if (VAR4 == VAR2)
        {
            *VAR3 = VAR2->VAR14;
        }
        else
        {
            VAR3 = &VAR4->VAR14;
        }
    }
    for (VAR4 = VAR13; VAR4 != NULL; VAR4 = VAR4->VAR14)
    {
        if (VAR4->VAR15 == VAR2)
            VAR4->VAR15 = NULL;
    }
    if (VAR2->VAR16 >= 0)
        close(VAR2->VAR16);
    if (VAR2->VAR17)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR17->VAR6; VAR5++)
        {
            VAR12 = VAR2->VAR17->VAR18[VAR5];
            if (VAR12->VAR19->VAR19)
            {
                FUN2(VAR12->VAR19);
            }
        }
        FUN3(VAR2->VAR17);
    }
    VAR6 = 0;
    if (VAR2->VAR20)
        VAR6 = VAR2->VAR20->VAR6;
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        VAR8 = VAR2->VAR21[VAR5];
        if (VAR8)
        {
            FUN4(VAR8);
            FUN5(VAR8);
        }
        VAR10 = VAR2->VAR22[VAR5];
        if (VAR10)
        {
            FUN6(VAR10);
        }
    }
    VAR8 = &VAR2->VAR23;
    if (!VAR2->VAR24)
    {
        if (VAR8->VAR25)
        {
            if (FUN7(&VAR8->VAR26) >= 0)
            {
                FUN4(VAR8);
                FUN8(&VAR8->VAR26, &VAR2->VAR27);
            }
        }
    }
    for (VAR5 = 0; VAR5 < VAR8->VAR6; VAR5++)
        FUN5(VAR8->VAR18[VAR5]);
    if (VAR2->VAR20 && !VAR2->VAR28 && VAR2->VAR20->VAR29 == VAR30)
        VAR31 -= VAR2->VAR20->VAR32;
    FUN9(&VAR2->VAR27);
    FUN9(&VAR2->VAR33);
    FUN5(VAR2->VAR34);
    FUN5(VAR2);
    VAR35--;
}