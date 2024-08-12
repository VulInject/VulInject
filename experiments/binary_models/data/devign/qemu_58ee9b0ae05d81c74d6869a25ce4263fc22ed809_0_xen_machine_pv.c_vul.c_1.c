static void FUN1(VAR1 *VAR2)
{
    const char *VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    int VAR13;
    if (VAR3 == NULL)
    {
        VAR3 = "";
        VAR3 = "";
    }
    VAR8 = FUN2(VAR3);
    VAR10 = FUN3(VAR8);
    VAR10->VAR14 = 1;
    if (FUN4() != 0)
    {
        fprintf(VAR15, "", VAR16);
        FUN5(1);
    }
    switch (VAR17)
    {
    case VAR18:
        break;
    case VAR19:
        if (FUN6(VAR4, VAR6, VAR5) < 0)
        {
            fprintf(VAR15, "");
            FUN5(1);
        }
        break;
    case VAR20:
        fprintf(VAR15, "");
        FUN5(1);
        break;
    }
    FUN7("", &VAR21);
    FUN7("", &VAR22);
    FUN7("", &VAR23);
    FUN7("", &VAR24);
    FUN7("", &VAR25);
    if (VAR26)
    {
        FUN8(0, "");
        FUN9(0);
    }
    for (VAR13 = 0; VAR13 < 16; VAR13++)
    {
        VAR12 = FUN10(VAR27, 0, VAR13);
        if (!VAR12)
            continue;
        FUN11(VAR12);
    }
    for (VAR13 = 0; VAR13 < VAR28; VAR13++)
    {
        if (!VAR29[VAR13].VAR30 || 0 != strcmp(VAR29[VAR13].VAR30, ""))
            continue;
        FUN12(VAR29 + VAR13);
    }
    FUN13(VAR31);
    FUN14(VAR32);
}