VAR1 FUN1(const char *VAR2, const char *VAR3)
{
    int VAR4;
    cl_int VAR5, VAR6;
    int VAR7 = 0;
    const char *VAR8;
    size_t VAR9;
    char *VAR10 = NULL;
    cl_program VAR11 = NULL;
    size_t VAR12;
    char *VAR13 = NULL;
    VAR14;
    for (VAR4 = 0; VAR4 < VAR15.VAR16; VAR4++)
    {
        VAR10 = FUN2(VAR15.VAR17[VAR4].VAR18, VAR2);
        if (VAR10 && !VAR15.VAR17[VAR4].VAR19)
        {
            VAR8 = VAR15.VAR17[VAR4].VAR18;
            VAR9 = strlen(VAR15.VAR17[VAR4].VAR18);
            VAR7 = VAR4;
            break;
        }
    }
    if (!VAR8)
    {
        FUN3(&VAR15, VAR20, "", VAR2);
        goto VAR21;
    }
    VAR11 = FUN4(VAR15.VAR22, 1, &VAR8, &VAR9, &VAR5);
    if (VAR5 != VAR23)
    {
        FUN3(&VAR15, VAR20, "", VAR2, FUN5(VAR5));
        VAR11 = NULL;
        goto VAR21;
    }
    VAR6 = FUN6(VAR11, 1, &(VAR15.VAR24), VAR3, NULL, NULL);
    VAR5 = FUN7(VAR11, VAR15.VAR24, VAR25, 0, NULL, &VAR12);
    if (VAR5 != VAR23)
    {
        FUN3(&VAR15, VAR26, "", FUN5(VAR5));
    }
    else
    {
        VAR13 = FUN8(VAR12);
        if (VAR13)
        {
            VAR5 = FUN7(VAR11, VAR15.VAR24, VAR25, VAR12, VAR13, NULL);
            if (VAR5 != VAR23)
            {
                FUN3(&VAR15, VAR26, "", FUN5(VAR5));
            }
            else
            {
                int VAR27 = VAR6 == VAR23 ? VAR28 : VAR20;
                FUN3(&VAR15, VAR27, "", VAR13);
            }
        }
        FUN9(&VAR13);
    }
    if (VAR6 != VAR23)
    {
        FUN3(&VAR15, VAR20, "", VAR2, FUN5(VAR6));
        VAR11 = NULL;
        goto VAR21;
    }
    VAR15.VAR17[VAR7].VAR19 = 1;
VAR21:
    VAR29;
    return VAR11;
}