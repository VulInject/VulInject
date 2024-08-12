int FUN1(const char *VAR1, const char *VAR2)
{
    int VAR3;
    int VAR4 = 0;
    const VAR5 *VAR6 = NULL;
    int VAR7[] = {VAR8, VAR9, 0, VAR10, 0};
    for (VAR3 = 0; VAR3 < VAR11 && VAR4 >= 0; VAR3++)
    {
        const VAR5 *VAR12 = FUN2(VAR13[0], VAR1, NULL, VAR7[VAR3], VAR7[VAR3]);
        if (VAR12)
            VAR4 = FUN3(VAR13[VAR3], VAR1, VAR2, 1, &VAR6);
    }
    if (!VAR6)
        VAR4 = FUN3(VAR14, VAR1, VAR2, 1, &VAR6);
    if (!VAR6)
        VAR4 = FUN3(VAR15, VAR1, VAR2, 1, &VAR6);
    if (!VAR6)
    {
        if (VAR1[0] == '')
            VAR4 = FUN3(VAR13[VAR16], VAR1 + 1, VAR2, 1, &VAR6);
        else if (VAR1[0] == '')
            VAR4 = FUN3(VAR13[VAR17], VAR1 + 1, VAR2, 1, &VAR6);
        else if (VAR1[0] == '')
            VAR4 = FUN3(VAR13[VAR18], VAR1 + 1, VAR2, 1, &VAR6);
    }
    if (VAR6 && VAR4 < 0)
    {
        fprintf(VAR19, "", VAR2, VAR1);
        FUN4(1);
    }
    if (!VAR6)
        return -1;
    VAR20 = FUN5(VAR20, sizeof(void *) * (VAR21 + 1));
    VAR20[VAR21++] = VAR6->VAR22;
    if (VAR13[0]->VAR23 || VAR14->VAR23)
        FUN6(VAR24);
    return 0;
}