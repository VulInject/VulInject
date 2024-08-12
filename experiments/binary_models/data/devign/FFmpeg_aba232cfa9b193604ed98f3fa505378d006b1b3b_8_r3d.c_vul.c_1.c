static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2, NULL);
    char VAR5[258];
    int VAR6;
    int av_unused VAR7;
    AVRational VAR8;
    if (!VAR4)
        return FUN3(VAR9);
    VAR4->VAR10->VAR11 = VAR12;
    VAR4->VAR10->VAR13 = VAR14;
    VAR6 = FUN4(VAR2->VAR15);
    VAR7 = FUN4(VAR2->VAR15);
    FUN5(VAR2, "", VAR6, VAR7);
    VAR6 = FUN6(VAR2->VAR15);
    FUN5(VAR2, "", VAR6);
    VAR6 = FUN7(VAR2->VAR15);
    FUN8(VAR4, 32, 1, VAR6);
    VAR6 = FUN7(VAR2->VAR15);
    FUN5(VAR2, "", VAR6);
    FUN9(VAR2->VAR15, 32);
    VAR4->VAR10->VAR16 = FUN7(VAR2->VAR15);
    VAR4->VAR10->VAR17 = FUN7(VAR2->VAR15);
    VAR6 = FUN6(VAR2->VAR15);
    FUN5(VAR2, "", VAR6);
    VAR8.VAR18 = FUN6(VAR2->VAR15);
    VAR8.VAR19 = FUN6(VAR2->VAR15);
    if (VAR8.VAR18 && VAR8.VAR19)
        VAR4->VAR20 = VAR4->VAR21 = VAR8;
    VAR6 = FUN4(VAR2->VAR15);
    FUN5(VAR2, "", VAR6);
    if (VAR6 > 0)
    {
        VAR3 *VAR22 = FUN2(VAR2, NULL);
        if (!VAR22)
            return FUN3(VAR9);
        VAR22->VAR10->VAR11 = VAR23;
        VAR22->VAR10->VAR13 = VAR24;
        VAR22->VAR10->VAR25 = VAR6;
        FUN8(VAR22, 32, 1, VAR4->VAR26.VAR19);
    }
    FUN10(VAR2->VAR15, VAR5, 257);
    VAR5[sizeof(VAR5) - 1] = 0;
    FUN11(&VAR4->VAR27, "", VAR5, 0);
    FUN5(VAR2, "", VAR5);
    FUN5(VAR2, "", VAR4->VAR10->VAR16, VAR4->VAR10->VAR17);
    FUN5(VAR2, "", VAR4->VAR26.VAR19);
    FUN5(VAR2, "", VAR8.VAR18, VAR8.VAR19);
    return 0;
}