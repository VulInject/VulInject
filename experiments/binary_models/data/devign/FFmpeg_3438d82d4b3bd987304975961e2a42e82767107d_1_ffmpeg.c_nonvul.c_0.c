static int FUN1(const char *VAR1, const char *VAR2)
{
    int VAR3;
    const VAR4 *VAR5 = NULL;
    int VAR6[] = {VAR7, VAR8, 0, VAR9, 0};
    for (VAR3 = 0; VAR3 < VAR10; VAR3++)
    {
        const VAR4 *VAR11 = FUN2(VAR12[0], VAR1, NULL, VAR6[VAR3], VAR6[VAR3]);
        if (VAR11)
            VAR5 = FUN3(VAR12[VAR3], VAR1, VAR2);
    }
    if (!VAR5)
        VAR5 = FUN3(VAR13, VAR1, VAR2);
    if (!VAR5)
        VAR5 = FUN3(VAR14, VAR1, VAR2);
    if (!VAR5)
    {
        if (VAR1[0] == '')
            VAR5 = FUN3(VAR12[VAR15], VAR1 + 1, VAR2);
        else if (VAR1[0] == '')
            VAR5 = FUN3(VAR12[VAR16], VAR1 + 1, VAR2);
        else if (VAR1[0] == '')
            VAR5 = FUN3(VAR12[VAR17], VAR1 + 1, VAR2);
    }
    if (!VAR5)
        return -1;
    VAR18 = FUN4(VAR18, sizeof(void *) * (VAR19 + 1));
    VAR18[VAR19++] = VAR5->VAR20;
    if (VAR12[0]->VAR21)
        FUN5(VAR22);
    return 0;
}