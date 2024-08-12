static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int final)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    char VAR10[1024], VAR11[1024];
    int VAR12, VAR13;
    int64_t VAR14, VAR15;
    int VAR16 = 0, VAR17;
    int VAR18 = VAR2->VAR19[VAR4->VAR20]->VAR21;
    int64_t VAR22 = 0;
    if (VAR6->VAR23)
        VAR16 = FUN2(VAR4->VAR24 - VAR6->VAR23, 0);
    VAR17 = VAR4->VAR24 - VAR16;
    if (final)
        VAR22 = VAR4->VAR25;
    else if (VAR4->VAR24)
        VAR22 = VAR4->VAR17[VAR4->VAR24 - 1]->VAR26;
    snprintf(VAR10, sizeof(VAR10), "", VAR2->VAR10, VAR18);
    snprintf(VAR11, sizeof(VAR11), "", VAR2->VAR10, VAR18);
    VAR13 = VAR2->FUN3(VAR2, &VAR9, VAR11, VAR27, NULL);
    if (VAR13 < 0)
    {
        FUN4(VAR2, VAR28, "", VAR11);
        return VAR13;
    }
    FUN5(VAR9, 0);
    FUN6(VAR9, FUN7('', '', '', ''));
    FUN5(VAR9, 0);
    FUN5(VAR9, VAR4->VAR29 - 1);
    FUN8(VAR9, final ? 0 : 0x20);
    FUN5(VAR9, 1000);
    FUN9(VAR9, VAR22);
    FUN9(VAR9, 0);
    FUN8(VAR9, 0);
    FUN8(VAR9, 0);
    FUN8(VAR9, 0);
    FUN8(VAR9, 0);
    FUN8(VAR9, 0);
    FUN8(VAR9, 1);
    VAR14 = FUN10(VAR9);
    FUN5(VAR9, 0);
    FUN6(VAR9, FUN7('', '', '', ''));
    FUN5(VAR9, 0);
    FUN8(VAR9, 0);
    FUN5(VAR9, 1);
    FUN5(VAR9, 1);
    FUN5(VAR9, final ? (VAR4->VAR29 - 1) : 0xffffffff);
    FUN11(VAR9, VAR14);
    FUN8(VAR9, 1);
    VAR15 = FUN10(VAR9);
    FUN5(VAR9, 0);
    FUN6(VAR9, FUN7('', '', '', ''));
    FUN5(VAR9, 0);
    FUN5(VAR9, 1000);
    FUN8(VAR9, 0);
    FUN5(VAR9, VAR17);
    for (VAR12 = VAR16; VAR12 < VAR4->VAR24; VAR12++)
    {
        FUN5(VAR9, VAR4->VAR17[VAR12]->VAR30);
        FUN9(VAR9, VAR4->VAR17[VAR12]->VAR26);
        FUN5(VAR9, VAR4->VAR17[VAR12]->VAR31);
    }
    FUN11(VAR9, VAR15);
    FUN11(VAR9, 0);
    FUN12(VAR2, &VAR9);
    return FUN13(VAR11, VAR10);
}