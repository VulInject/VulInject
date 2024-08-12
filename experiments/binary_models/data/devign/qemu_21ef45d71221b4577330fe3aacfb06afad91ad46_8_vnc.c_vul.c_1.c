static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(sizeof(VAR6));
    int VAR8;
    VAR7->VAR3 = VAR3;
    if (VAR4)
    {
        VAR7->VAR9 = VAR10;
        VAR7->VAR11 = VAR12;
    }
    else
    {
        VAR7->VAR9 = VAR2->VAR9;
        VAR7->VAR11 = VAR2->VAR11;
    }
    VAR7->VAR13 = FUN2(VAR14 * sizeof(*VAR7->VAR13));
    for (VAR8 = 0; VAR8 < VAR14; ++VAR8)
    {
        VAR7->VAR13[VAR8] = FUN2(VAR15 * sizeof(VAR16));
    }
    FUN3("", VAR3);
    VAR17->VAR18 = 0;
    FUN4(VAR7->VAR3);
    if (VAR5)
    {
        VAR7->VAR5 = 1;
        FUN5(VAR7->VAR3, NULL, VAR19, NULL, VAR7);
    }
    else
    {
        FUN5(VAR7->VAR3, NULL, VAR20, NULL, VAR7);
    }
    FUN6(VAR7);
    FUN7(VAR7, VAR21);
    FUN8(VAR7, VAR22);
    VAR7->VAR2 = VAR2;
    if (!VAR7->VAR5)
    {
        FUN9(VAR7);
    }
}