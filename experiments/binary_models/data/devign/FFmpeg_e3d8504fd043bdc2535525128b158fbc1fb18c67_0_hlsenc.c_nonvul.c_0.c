static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6;
    VAR1 *VAR7 = NULL;
    int VAR8, VAR9;
    VAR9 = FUN2(&VAR4->VAR10, VAR4->VAR11, NULL, NULL);
    if (VAR9 < 0)
        return VAR9;
    VAR6 = VAR4->VAR10;
    VAR6->VAR11 = VAR4->VAR11;
    VAR6->VAR12 = VAR2->VAR12;
    VAR6->VAR13 = VAR2->VAR13;
    FUN3(&VAR6->VAR14, VAR2->VAR14, 0);
    if (VAR4->VAR15)
    {
        VAR9 = FUN2(&VAR4->VAR16, VAR4->VAR15, NULL, NULL);
        if (VAR9 < 0)
            return VAR9;
        VAR7 = VAR4->VAR16;
        VAR7->VAR11 = VAR4->VAR15;
        FUN3(&VAR7->VAR14, VAR2->VAR14, 0);
    }
    for (VAR8 = 0; VAR8 < VAR2->VAR17; VAR8++)
    {
        VAR18 *VAR19;
        VAR1 *VAR20;
        if (VAR2->VAR21[VAR8]->VAR22->VAR23 == VAR24)
            VAR20 = VAR7;
        else
            VAR20 = VAR6;
        if (!(VAR19 = FUN4(VAR20, NULL)))
            return FUN5(VAR25);
        FUN6(VAR19->VAR22, VAR2->VAR21[VAR8]->VAR22);
        VAR19->VAR26 = VAR2->VAR21[VAR8]->VAR26;
        VAR19->VAR27 = VAR2->VAR21[VAR8]->VAR27;
    }
    VAR4->VAR28 = 0;
    return 0;
}