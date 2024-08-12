void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    const char *typename;
    VAR8 **VAR9;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13 = FUN2(VAR2);
    if (VAR13->VAR14 == NULL)
    {
        VAR13->VAR14 = "";
        VAR13->VAR14 = "";
    }
    VAR9 = FUN3(VAR13->VAR14, "", 2);
    if (!VAR9[0])
    {
        FUN4("");
        FUN5(1);
    }
    VAR7 = FUN6(VAR15, VAR9[0]);
    if (VAR7 == NULL)
    {
        FUN4("", VAR9[0]);
        FUN5(1);
    }
    typename = FUN7(VAR7);
    VAR5 = FUN8(VAR7);
    VAR5->FUN9(typename, VAR9[1], &VAR16);
    FUN10(VAR9);
    VAR2->VAR17 = FUN11(VAR18 - 1) + 1;
    VAR2->VAR19 = FUN12(sizeof(VAR20) + sizeof(VAR21) * VAR18);
    for (VAR3 = 0; VAR3 < VAR18; VAR3++)
    {
        VAR2->VAR19->VAR22[VAR3].VAR23 = FUN11(VAR3);
        VAR2->VAR19->VAR24++;
        if (VAR3 < VAR25)
        {
            VAR11 = FUN13(typename, FUN11(VAR3), &VAR16);
            FUN14(FUN15(VAR11));
        }
    }
    FUN16(VAR11->VAR26.VAR27, VAR11->VAR26.VAR28[VAR29]);
}