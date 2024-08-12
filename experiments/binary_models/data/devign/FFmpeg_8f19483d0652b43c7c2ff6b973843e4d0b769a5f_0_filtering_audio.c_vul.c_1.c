static int FUN1(const char *VAR1)
{
    char VAR2[512];
    int VAR3;
    VAR4 *VAR5 = FUN2("");
    VAR4 *VAR6 = FUN2("");
    VAR7 *VAR8 = FUN3();
    VAR7 *VAR9 = FUN3();
    const enum AVSampleFormat VAR10[] = {VAR11, -1};
    const int VAR12[] = {VAR13, -1};
    const VAR14 *VAR15 = VAR16;
    VAR17 *VAR18;
    const VAR19 *VAR20;
    VAR21 = FUN4();
    if (!VAR22->VAR23)
        VAR22->VAR23 = FUN5(VAR22->VAR24);
    snprintf(VAR2, sizeof(VAR2), "" VAR25 "", VAR22->VAR26, VAR22->VAR27, VAR22->VAR23);
    VAR3 = FUN6(&VAR28, VAR5, "", VAR2, NULL, VAR21);
    if (VAR3 < 0)
    {
        FUN7(NULL, VAR29, "");
        return VAR3;
    }
    VAR18 = FUN8();
    VAR18->VAR10 = VAR10;
    VAR18->VAR30 = VAR15;
    VAR18->VAR12 = VAR12;
    VAR3 = FUN6(&VAR31, VAR6, "", NULL, VAR18, VAR21);
    if (VAR3 < 0)
    {
        FUN7(NULL, VAR29, "");
        return VAR3;
    }
    VAR8->VAR32 = FUN9("");
    VAR8->VAR33 = VAR28;
    VAR8->VAR34 = 0;
    VAR8->VAR35 = NULL;
    VAR9->VAR32 = FUN9("");
    VAR9->VAR33 = VAR31;
    VAR9->VAR34 = 0;
    VAR9->VAR35 = NULL;
    if ((VAR3 = FUN10(VAR21, VAR36, &VAR9, &VAR8, NULL)) < 0)
        return VAR3;
    if ((VAR3 = FUN11(VAR21, NULL)) < 0)
        return VAR3;
    VAR20 = VAR31->VAR9[0];
    FUN12(VAR2, sizeof(VAR2), -1, VAR20->VAR23);
    FUN7(NULL, VAR37, "", (int)VAR20->VAR26, (char *)FUN13(FUN14(VAR20->VAR38), ""), VAR2);
    return 0;