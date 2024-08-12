static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    static const enum AVPixelFormat VAR6[] = {VAR7, VAR8};
    char VAR9[128];
    char VAR10[256];
    int VAR11;
    VAR12 *VAR13 = FUN2();
    VAR14 *VAR15 = NULL, *VAR16 = NULL, *VAR17, *VAR18;
    VAR19 *VAR20 = VAR4->VAR21->VAR20;
    snprintf(VAR9, sizeof(VAR9), "", VAR22);
    VAR2->VAR23 = FUN3(VAR9);
    snprintf(VAR10, sizeof(VAR10), "", VAR20->VAR24, VAR20->VAR25, VAR20->VAR26, VAR4->VAR21->VAR27.VAR28, VAR4->VAR21->VAR27.VAR29, VAR20->VAR30.VAR28, VAR20->VAR30.VAR29);
    if ((VAR11 = FUN4(&VAR15, FUN5(""), "", VAR10, NULL, VAR2)) < 0)
        return VAR11;
    VAR13->VAR31 = VAR6;
    VAR11 = FUN4(&VAR16, FUN5(""), "", NULL, VAR13, VAR2);
    FUN6(&VAR13);
    if (VAR11 < 0)
        return VAR11;
    if ((VAR11 = FUN4(&VAR18, FUN5(""), "", "", NULL, VAR2)) < 0)
        return VAR11;
    if ((VAR11 = FUN4(&VAR17, FUN5(""), "", "", NULL, VAR2)) < 0)
        return VAR11;
    if ((VAR11 = FUN7(VAR18, 0, VAR17, 0)) < 0)
        return VAR11;
    if ((VAR11 = FUN7(VAR17, 0, VAR16, 0)) < 0)
        return VAR11;
    if ((VAR11 = FUN8(VAR2, VAR5, VAR15, VAR18)) < 0)
        return VAR11;
    VAR4->VAR32 = VAR15;
    VAR4->VAR33 = VAR16;
    return VAR11;
}