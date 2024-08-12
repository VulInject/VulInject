static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    static const enum PixelFormat VAR6[] = {VAR7, VAR8};
    char VAR9[128];
    char VAR10[256];
    int VAR11;
    VAR12 *VAR13 = FUN2();
    VAR14 *VAR15 = NULL, *VAR16 = NULL, *VAR17;
    VAR18 *VAR19 = VAR4->VAR20->VAR19;
    snprintf(VAR9, sizeof(VAR9), "", VAR21);
    VAR2->VAR22 = FUN3(VAR9);
    snprintf(VAR10, sizeof(VAR10), "", VAR19->VAR23, VAR19->VAR24, VAR19->VAR25, VAR4->VAR20->VAR26.VAR27, VAR4->VAR20->VAR26.VAR28, VAR19->VAR29.VAR27, VAR19->VAR29.VAR28);
    if ((VAR11 = FUN4(&VAR15, FUN5(""), "", VAR10, NULL, VAR2)) < 0)
        return VAR11;
    VAR13->VAR30 = VAR6;
    VAR11 = FUN4(&VAR16, FUN5(""), "", NULL, VAR13, VAR2);
    FUN6(&VAR13);
    if (VAR11 < 0)
        return VAR11;
    if ((VAR11 = FUN4(&VAR17, FUN5(""), "", "", NULL, VAR2)) < 0)
        return VAR11;
    if ((VAR11 = FUN7(VAR17, 0, VAR16, 0)) < 0)
        return VAR11;
    if ((VAR11 = FUN8(VAR2, VAR5, VAR15, VAR17)) < 0)
        return VAR11;
    VAR4->VAR31 = VAR15;
    VAR4->VAR32 = VAR16;
    if (VAR19->VAR19->VAR33 & VAR34)
    {
        VAR4->VAR35 = 1;
        VAR19->VAR36 = VAR37;
        VAR19->VAR38 = VAR39;
        VAR19->VAR40 = &VAR4->VAR41;
    }
    return VAR11;
}