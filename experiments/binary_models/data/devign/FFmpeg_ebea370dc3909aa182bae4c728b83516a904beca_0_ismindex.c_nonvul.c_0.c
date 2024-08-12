static int FUN1(struct VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    char VAR6[100], VAR7[500];
    int VAR8, VAR9;
    for (VAR8 = VAR3; VAR8 < VAR2->VAR10; VAR8++)
    {
        struct VAR11 *VAR12 = VAR2->VAR2[VAR8];
        const char *VAR13 = VAR12->VAR14 ? "" : "";
        snprintf(VAR6, sizeof(VAR6), "", VAR12->VAR15);
        if (mkdir(VAR6, 0777) == -1)
            return FUN2(VAR16);
        for (VAR9 = 0; VAR9 < VAR12->VAR17; VAR9++)
        {
            snprintf(VAR7, sizeof(VAR7), "" VAR18 "", VAR6, VAR13, VAR12->VAR19[VAR9].VAR20);
            FUN3(VAR5, VAR12->VAR19[VAR9].VAR21, VAR22);
            FUN4(VAR7, VAR5);
        }
    }
    return 0;
}