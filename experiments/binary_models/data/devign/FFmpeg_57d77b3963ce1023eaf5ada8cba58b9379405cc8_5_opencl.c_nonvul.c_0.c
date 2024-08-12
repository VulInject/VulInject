static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    cl_int VAR4;
    char *VAR5, *VAR6 = NULL;
    size_t VAR7 = 0;
    int VAR8, VAR9 = 0;
    for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
    {
        if (!VAR2->VAR11[VAR8].VAR12)
            VAR7 += strlen(VAR2->VAR11[VAR8].VAR13);
    }
    if (!VAR7)
    {
        return 0;
    }
    VAR6 = FUN2(VAR7 + 1);
    if (!VAR6)
    {
        return FUN3(VAR14);
    }
    VAR5 = VAR6;
    for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
    {
        if (!VAR2->VAR11[VAR8].VAR12)
        {
            memcpy(VAR5, VAR2->VAR11[VAR8].VAR13, strlen(VAR2->VAR11[VAR8].VAR13));
            VAR2->VAR11[VAR8].VAR12 = 1;
            VAR5 += strlen(VAR2->VAR11[VAR8].VAR13);
        }
    }
    VAR2->VAR15[VAR2->VAR16] = FUN4(VAR2->VAR17, 1, (const char **)(&VAR6), &VAR7, &VAR4);
    if (VAR4 != VAR18)
    {
        FUN5(&VAR19, VAR20, "", FUN6(VAR4));
        VAR9 = VAR21;
        goto VAR22;
    }
    if (!VAR2->VAR15[VAR2->VAR16])
    {
        FUN5(&VAR19, VAR20, "");
        VAR9 = VAR21;
        goto VAR22;
    }
    VAR8 = 0;
    if (VAR2->VAR23.VAR24 >= 0)
        VAR8 = VAR2->VAR23.VAR24;
    if (!VAR2->VAR25)
        VAR4 = FUN7(VAR2->VAR15[VAR2->VAR16], 1, &VAR2->VAR26[VAR8], VAR3, NULL, NULL);
    else
        VAR4 = FUN7(VAR2->VAR15[VAR2->VAR16], 1, &(VAR2->VAR27), VAR3, NULL, NULL);
    if (VAR4 != VAR18)
    {
        FUN5(&VAR19, VAR20, "", FUN6(VAR4));
        VAR9 = VAR21;
        goto VAR22;
    }
    VAR2->VAR16++;
VAR22:
    FUN8(VAR6);
    return VAR9;
}