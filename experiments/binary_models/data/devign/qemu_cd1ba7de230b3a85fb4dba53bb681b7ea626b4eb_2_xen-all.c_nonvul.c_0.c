int FUN1(void)
{
    int VAR1, VAR2;
    unsigned long VAR3;
    VAR4 *VAR5;
    VAR5 = FUN2(sizeof(VAR4));
    VAR5->VAR6 = FUN3(NULL, 0);
    if (VAR5->VAR6 == VAR7)
    {
        FUN4("");
        return -VAR8;
    }
    VAR5->VAR9 = FUN5();
    if (VAR5->VAR9 == NULL)
    {
        FUN4("");
        return -VAR8;
    }
    VAR5->VAR10.VAR11 = VAR12;
    FUN6(&VAR5->VAR10);
    VAR5->VAR13.VAR11 = VAR14;
    FUN7(&VAR5->VAR13);
    FUN8(VAR15, VAR16, VAR17, &VAR3);
    FUN9("", VAR3);
    VAR5->VAR18 = FUN10(VAR15, VAR16, VAR19, VAR20 | VAR21, VAR3);
    if (VAR5->VAR18 == NULL)
    {
        FUN11("" VAR22, VAR8, VAR15);
    }
    FUN8(VAR15, VAR16, VAR23, &VAR3);
    FUN9("", VAR3);
    VAR5->VAR24 = FUN10(VAR15, VAR16, VAR19, VAR20 | VAR21, VAR3);
    if (VAR5->VAR24 == NULL)
    {
        FUN11("", VAR8);
    }
    VAR5->VAR25 = FUN2(VAR26 * sizeof(VAR27));
    for (VAR1 = 0; VAR1 < VAR26; VAR1++)
    {
        VAR2 = FUN12(VAR5->VAR6, VAR16, FUN13(VAR5->VAR18, VAR1));
        if (VAR2 == -1)
        {
            fprintf(VAR28, "", VAR8);
            return -1;
        }
        VAR5->VAR25[VAR1] = VAR2;
    }
    FUN14(VAR29, VAR5);
    FUN15(VAR30);
    FUN16(VAR31, VAR5);
    VAR5->VAR32 = VAR33;
    FUN17(&VAR5->VAR34);
    FUN18(&VAR5->VAR32);
    VAR5->VAR35 = NULL;
    if (FUN19() != 0)
    {
        fprintf(VAR28, "", VAR36);
        FUN20(1);
    }
    FUN21("", &VAR37);
    FUN21("", &VAR38);
    FUN21("", &VAR39);
    FUN22(VAR5);
    return 0;
}