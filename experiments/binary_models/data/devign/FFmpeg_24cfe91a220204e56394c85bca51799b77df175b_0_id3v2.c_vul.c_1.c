static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, char *VAR6, VAR7 **VAR8)
{
    int VAR9, VAR10;
    char VAR11[64];
    const VAR12 *VAR13 = VAR14;
    enum AVCodecID VAR15 = VAR16;
    VAR17 *VAR18 = NULL;
    VAR7 *VAR19 = NULL;
    int64_t VAR20 = FUN2(VAR4) + VAR5;
    if (VAR5 <= 4)
        goto VAR21;
    VAR19 = FUN3(sizeof(*VAR19));
    VAR18 = FUN3(sizeof(*VAR18));
    if (!VAR19 || !VAR18)
        goto VAR21;
    VAR9 = FUN4(VAR4);
    VAR5--;
    VAR5 -= FUN5(VAR4, VAR5, VAR11, sizeof(VAR11));
    while (VAR13->VAR15 != VAR16)
    {
        if (!FUN6(VAR13->VAR22, VAR11, sizeof(VAR11)))
        {
            VAR15 = VAR13->VAR15;
            break;
        }
        VAR13++;
    }
    if (VAR15 == VAR16)
    {
        FUN7(VAR2, VAR23, "", VAR11);
        goto VAR21;
    }
    VAR18->VAR15 = VAR15;
    VAR10 = FUN4(VAR4);
    VAR5--;
    if (VAR10 < 0 || VAR10 >= FUN8(VAR24))
    {
        FUN7(VAR2, VAR23, "", VAR10);
        VAR10 = 0;
    }
    VAR18->VAR25 = VAR24[VAR10];
    if (FUN9(VAR2, VAR4, VAR9, &VAR18->VAR26, &VAR5) < 0)
    {
        FUN7(VAR2, VAR27, "");
        goto VAR21;
    }
    VAR18->VAR28 = FUN10(VAR5);
    if (!VAR18->VAR28 || !VAR5 || FUN11(VAR4, VAR18->VAR28->VAR29, VAR5) != VAR5)
        goto VAR21;
    VAR19->VAR6 = "";
    VAR19->VAR29 = VAR18;
    VAR19->VAR30 = *VAR8;
    *VAR8 = VAR19;
    return;
VAR21:
    if (VAR18)
        FUN12(VAR18);
    FUN13(&VAR19);
    FUN14(VAR4, VAR20, VAR31);
}