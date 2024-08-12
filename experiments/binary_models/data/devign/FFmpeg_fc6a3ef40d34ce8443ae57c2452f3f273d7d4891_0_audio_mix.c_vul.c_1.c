int FUN1(VAR1 *VAR2, const double *VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    char VAR10[128];
    char VAR11[128];
    if (VAR2->VAR12 <= 0 || VAR2->VAR12 > VAR13 || VAR2->VAR14 <= 0 || VAR2->VAR14 > VAR13)
    {
        FUN2(VAR2->VAR15, VAR16, "");
        return FUN3(VAR17);
    }
    if (VAR2->VAR3)
    {
        FUN4(VAR2->VAR3[0]);
        VAR2->VAR3 = NULL;
    }
    VAR2->VAR18 = VAR2->VAR12;
    VAR2->VAR19 = VAR2->VAR14;
    FUN5(VAR2, VAR3, VAR4);
    VAR2->VAR20##VAR21[0] = FUN6(VAR2->VAR19 * VAR2->VAR18 * sizeof(*VAR2->VAR20##VAR21[0]));
    if (!VAR2->VAR20##VAR21[0])
        return FUN3(VAR22);
    for (VAR6 = 0, VAR8 = 0; VAR6 < VAR2->VAR14; VAR6++)
    {
        if (VAR2->VAR23[VAR6] || VAR2->VAR24[VAR6])
            continue;
        if (VAR8 > 0)
            VAR2->VAR20##VAR21[VAR8] = VAR2->VAR20##VAR21[VAR8 - 1] + VAR2->VAR18;
        for (VAR5 = 0, VAR7 = 0; VAR5 < VAR2->VAR12; VAR5++)
        {
            double VAR25;
            if (VAR2->VAR26[VAR5])
                continue;
            VAR25 = VAR3[VAR6 * VAR4 + VAR5];
            VAR2->VAR20##VAR21[VAR8][VAR7] = VAR27;
            VAR7++;
        }
        VAR8++;
    }
    VAR2->VAR3 = (void **)VAR2->VAR20##VAR21;
    if (VAR2->VAR18 && VAR2->VAR19)
    {
        switch (VAR2->VAR28)
        {
        case VAR29:
            FUN7(VAR30, FUN8(FUN9(256.0 * VAR25)))
            break;
        case VAR31:
            FUN7(VAR32, FUN10(FUN11(32768.0 * VAR25)))
            break;
        case VAR33:
            FUN7(VAR34, VAR25)
            break;
        default:
            FUN2(VAR2->VAR15, VAR16, "");
            return FUN3(VAR17);
        }
    }
    VAR9 = FUN12(VAR2);
    if (VAR9 < 0)
        return VAR9;
    FUN13(VAR10, sizeof(VAR10), VAR2->VAR12, VAR2->VAR35);
    FUN13(VAR11, sizeof(VAR11), VAR2->VAR14, VAR2->VAR36);
    FUN2(VAR2->VAR15, VAR37, "", VAR10, VAR11);
    FUN2(VAR2->VAR15, VAR37, "", VAR2->VAR18, VAR2->VAR19);
    for (VAR6 = 0; VAR6 < VAR2->VAR14; VAR6++)
    {
        for (VAR5 = 0; VAR5 < VAR2->VAR12; VAR5++)
        {
            if (VAR2->VAR23[VAR6])
                FUN2(VAR2->VAR15, VAR37, "");
            else if (VAR2->VAR26[VAR5] || VAR2->VAR24[VAR6])
                FUN2(VAR2->VAR15, VAR37, "");
            else
                FUN2(VAR2->VAR15, VAR37, "", VAR3[VAR6 * VAR2->VAR12 + VAR5]);
        }
        FUN2(VAR2->VAR15, VAR37, "");
    }
    return 0;
}