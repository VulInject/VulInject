static void FUN1(VAR1 *VAR2)
{
    double VAR3, VAR4 = VAR5;
    char *VAR6 = VAR2->VAR7;
    int VAR8;
    VAR3 = FUN2(VAR2->VAR7, &VAR6);
    if (VAR6 != VAR2->VAR7)
    {
        FUN3(VAR2, VAR3);
        VAR2->VAR7 = VAR6;
        return;
    }
    for (VAR8 = 0; VAR2->VAR9[VAR8]; VAR8++)
    {
        if (FUN4(VAR2->VAR7, VAR2->VAR9[VAR8]))
        {
            FUN3(VAR2, VAR2->VAR10[VAR8]);
            VAR2->VAR7 += strlen(VAR2->VAR9[VAR8]);
            return;
        }
    }
    VAR2->VAR7 = strchr(VAR2->VAR7, '');
    if (VAR2->VAR7 == NULL)
    {
        FUN5(NULL, VAR11, ""%VAR7\"", VAR6);
        return;
    }
    VAR2->VAR7++;
    FUN6(VAR2);
    VAR3 = FUN7(VAR2);
    if (VAR2->VAR7[0] == '')
    {
        VAR2->VAR7++;
        FUN6(VAR2);
        VAR4 = FUN7(VAR2);
    }
    if (VAR2->VAR7[0] != '')
    {
        FUN5(NULL, VAR11, ""%VAR7\"", VAR6);
        return;
    }
    VAR2->VAR7++;
    if (FUN4(VAR6, ""))
        VAR3 = FUN8(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = FUN9(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = FUN10(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = FUN11(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = FUN12(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = FUN13(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = FUN14(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = FUN15(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = 1 / (1 + FUN14(4 * VAR3));
    else if (FUN4(VAR6, ""))
        VAR3 = FUN14(-VAR3 * VAR3 / 2) / FUN16(2 * VAR12);
    else if (FUN4(VAR6, ""))
        VAR3 = FUN17(VAR3);
    else if (FUN4(VAR6, ""))
        VAR3 = VAR3 > VAR4 ? VAR3 : VAR4;
    else if (FUN4(VAR6, ""))
        VAR3 = VAR3 < VAR4 ? VAR3 : VAR4;
    else if (FUN4(VAR6, ""))
        VAR3 = VAR3 > VAR4 ? 1.0 : 0.0;
    else if (FUN4(VAR6, ""))
        VAR3 = VAR3 >= VAR4 ? 1.0 : 0.0;
    else if (FUN4(VAR6, ""))
        VAR3 = VAR3 > VAR4 ? 0.0 : 1.0;
    else if (FUN4(VAR6, ""))
        VAR3 = VAR3 >= VAR4 ? 0.0 : 1.0;
    else if (FUN4(VAR6, ""))
        VAR3 = VAR3 == VAR4 ? 1.0 : 0.0;
    else
    {
        int VAR13 = 1;
        for (VAR8 = 0; VAR2->VAR14 && VAR2->VAR14[VAR8]; VAR8++)
        {
            if (FUN4(VAR6, VAR2->VAR14[VAR8]))
            {
                VAR3 = VAR2->VAR15[VAR8](VAR2->VAR16, VAR3);
                VAR13 = 0;
                break;
            }
        }
        for (VAR8 = 0; VAR2->VAR17 && VAR2->VAR17[VAR8]; VAR8++)
        {
            if (FUN4(VAR6, VAR2->VAR17[VAR8]))
            {
                VAR3 = VAR2->VAR18[VAR8](VAR2->VAR16, VAR3, VAR4);
                VAR13 = 0;
                break;
            }
        }
        if (VAR13)
        {
            FUN5(NULL, VAR11, ""%VAR7\"", VAR6);
            return;
        }
    }
    FUN3(VAR2, VAR3);
}