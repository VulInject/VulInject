static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, AVRational VAR5)
{
    int VAR6;
    AVBPrint VAR7;
    FUN2(&VAR7, 0, VAR8);
    for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
    {
        char *VAR10;
        const char *VAR11;
        VAR12 *VAR13 = VAR2->VAR14[VAR6];
        int VAR15, VAR16 = -1;
        long int VAR17;
        if (VAR13->VAR18 != VAR19 || !FUN3(VAR13->VAR20, "", 10))
            continue;
        FUN4(&VAR7);
        VAR11 = strchr(VAR13->VAR20, '');
        if (!VAR11)
            continue;
        VAR11++;
        VAR17 = FUN5(VAR11, (char **)&VAR11, 10);
        if (*VAR11 != '')
            continue;
        VAR11++;
        VAR15 = FUN6(VAR4->VAR21, VAR5, FUN7(1, 100));
        if (VAR4->VAR22 != -1)
            VAR16 = FUN6(VAR4->VAR22, VAR5, FUN7(1, 100));
        VAR2->VAR23 = FUN8(VAR2->VAR23, 10 * VAR16);
        FUN9(&VAR7, "", VAR17);
        FUN10(&VAR7, VAR15);
        FUN10(&VAR7, VAR16 == -1 ? -1 : VAR15 + VAR16);
        FUN9(&VAR7, "", VAR11);
        VAR10 = FUN11(VAR7.VAR24);
        if (!FUN12(&VAR7) || !VAR10)
        {
            FUN13(&VAR10);
            FUN14(&VAR7, NULL);
            return FUN15(VAR25);
        }
        FUN13(&VAR13->VAR20);
        VAR13->VAR20 = VAR10;
    }
    FUN14(&VAR7, NULL);
    return 0;
}