static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR4->VAR8;
    VAR9 *VAR10 = VAR8->VAR11->VAR10;
    VAR12 *VAR13 = VAR6->VAR14;
    int VAR15 = VAR6->VAR15;
    char *VAR16, *VAR17, *VAR18;
    char VAR19[255];
    int VAR20;
    snprintf(VAR19, sizeof(VAR19), "", VAR8->VAR21, VAR8->VAR22);
    VAR20 = FUN2(&VAR4->VAR23, FUN3(""), VAR19, NULL, NULL, VAR2->VAR24);
    if (VAR20 < 0)
        return VAR20;
    VAR12 *VAR25;
    FUN4(NULL, VAR26, VAR27 ""
                                       "" VAR28 "",
           VAR29);
    VAR20 = FUN2(&VAR25, FUN3(VAR28), VAR28, VAR29, NULL, VAR2->VAR24);
    if (VAR20 < 0)
        return VAR20;
    VAR20 = FUN5(VAR13, VAR15, VAR25, 0);
    if (VAR20 < 0)
        return VAR20;
    VAR13 = VAR25;
    VAR15 = 0;
}
while (0)
    if (VAR8->VAR30)
    {
        int VAR31;
        AVBPrint VAR32;
        FUN6(&VAR32, 256, 8192);
        FUN7(&VAR32, "" VAR33, FUN8(VAR8->VAR30));
        for (VAR31 = 0; VAR31 < VAR8->VAR30; VAR31++)
            if (VAR8->VAR34[VAR31] != -1)
                FUN7(&VAR32, "", VAR31, VAR8->VAR34[VAR31]);
        FUN9("", "", VAR32.VAR35);
        FUN10(&VAR32, NULL);
    }
if (VAR10->VAR36 && !VAR10->VAR37)
    VAR10->VAR37 = FUN8(VAR10->VAR36);
VAR16 = FUN11(VAR8);
VAR17 = FUN12(VAR8);
VAR18 = FUN13(VAR8);
if (VAR16 || VAR17 || VAR18)
{
    VAR12 *VAR38;
    char VAR39[256];
    VAR39[0] = 0;
    if (VAR16)
        FUN14(VAR39, sizeof(VAR39), "", VAR16);
    if (VAR17)
        FUN14(VAR39, sizeof(VAR39), "", VAR17);
    if (VAR18)
        FUN14(VAR39, sizeof(VAR39), "", VAR18);
    FUN15(&VAR16);
    FUN15(&VAR17);
    FUN15(&VAR18);
    snprintf(VAR19, sizeof(VAR19), "", VAR8->VAR21, VAR8->VAR22);
    VAR20 = FUN2(&VAR38, FUN3(""), VAR19, VAR39, NULL, VAR2->VAR24);
    if (VAR20 < 0)
        return VAR20;
    VAR20 = FUN5(VAR13, VAR15, VAR38, 0);
    if (VAR20 < 0)
        return VAR20;
    VAR13 = VAR38;
    VAR15 = 0;
}
if (VAR40 != 256 && 0)
{
    char VAR39[256];
    snprintf(VAR39, sizeof(VAR39), "", VAR40 / 256.);
    FUN9("", "", VAR39);
}
if ((VAR20 = FUN5(VAR13, VAR15, VAR4->VAR23, 0)) < 0)
    return VAR20;
return 0;
}