static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    if (FUN2() != 0)
    {
        fprintf(VAR6, "", VAR7);
        FUN3(1);
    }
    switch (VAR8)
    {
    case VAR9:
        break;
    case VAR10:
    {
        const char *VAR11 = VAR2->VAR11;
        const char *VAR12 = VAR2->VAR12;
        const char *VAR13 = VAR2->VAR13;
        if (FUN4(VAR11, VAR13, VAR12) < 0)
        {
            fprintf(VAR6, "");
            FUN3(1);
        }
        break;
    }
    case VAR14:
        fprintf(VAR6, "");
        FUN3(1);
        break;
    default:
        fprintf(VAR6, "", VAR8);
        FUN3(1);
        break;
    }
    FUN5();
    FUN6("", &VAR15);
    FUN6("", &VAR16);
    if (VAR17)
    {
        FUN7(0, "");
        FUN8(0);
    }
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        VAR4 = FUN9(VAR18, 0, VAR5);
        if (!VAR4)
            continue;
        FUN10(VAR4);
    }
    for (VAR5 = 0; VAR5 < VAR19; VAR5++)
    {
        if (!VAR20[VAR5].VAR21 || 0 != strcmp(VAR20[VAR5].VAR21, ""))
            continue;
        FUN11(VAR20 + VAR5);
    }
    FUN12(VAR22);
}