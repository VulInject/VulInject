void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    FUN2(VAR2);
    if (!VAR4)
        return;
    FUN3(VAR2->VAR10, VAR4->VAR11, VAR12);
    VAR2->VAR13 = VAR4->VAR13;
    VAR2->VAR14 = VAR4->VAR14;
    VAR2->VAR15 = VAR4->VAR15;
    VAR2->VAR16 = VAR4->VAR16;
    for (VAR5 = 0; VAR5 < VAR4->VAR17; VAR5++)
    {
        VAR7 = VAR2->VAR18[VAR5];
        VAR9 = &VAR4->VAR19[VAR5];
        VAR7->VAR20 = VAR9->VAR20;
        VAR7->VAR21 = VAR9->VAR21;
        VAR7->VAR22 = VAR9->VAR22;
        VAR7->VAR23 = VAR9->VAR23;
        VAR7->VAR24 = VAR9->VAR24;
    }
    FUN4(VAR4->VAR19);
    FUN4(VAR4);
}