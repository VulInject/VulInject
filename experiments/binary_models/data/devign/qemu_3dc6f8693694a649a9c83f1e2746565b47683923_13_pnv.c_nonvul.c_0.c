static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    char *VAR7;
    long VAR8;
    int VAR9;
    char *VAR10;
    if (VAR2->VAR11 < (1 * VAR12))
    {
        FUN3("");
    }
    VAR6 = FUN4(VAR5, 1);
    FUN5(VAR6, NULL, "", VAR2->VAR11);
    FUN6(FUN7(), 0, VAR6);
    if (VAR13 == NULL)
    {
        VAR13 = VAR14;
    }
    VAR7 = FUN8(VAR15, VAR13);
    VAR8 = FUN9(VAR7, VAR16, VAR17);
    if (VAR8 < 0)
    {
        FUN10("", VAR7);
        FUN11(1);
    }
    FUN12(VAR7);
    if (VAR2->VAR18)
    {
        long VAR19;
        VAR19 = FUN9(VAR2->VAR18, VAR20, 0x2000000);
        if (VAR19 < 0)
        {
            FUN10("", VAR2->VAR18);
            FUN11(1);
        }
    }
    if (VAR2->VAR21)
    {
        VAR4->VAR22 = VAR23;
        VAR4->VAR24 = FUN9(VAR2->VAR21, VAR4->VAR22, 0x10000000);
        if (VAR4->VAR24 < 0)
        {
            FUN10("", VAR2->VAR21);
            FUN11(1);
        }
    }
    if (VAR2->VAR25 == NULL)
    {
        VAR2->VAR25 = "";
    }
    VAR10 = FUN13(VAR26 "", VAR2->VAR25);
    if (!FUN14(VAR10))
    {
        FUN10("", VAR2->VAR25, FUN15(VAR2)->VAR27);
        FUN11(1);
    }
    VAR4->VAR28 = FUN16(VAR29 *, VAR4->VAR30);
    for (VAR9 = 0; VAR9 < VAR4->VAR30; VAR9++)
    {
        char VAR31[32];
        VAR32 *VAR33 = FUN17(VAR10);
        VAR4->VAR28[VAR9] = FUN18(VAR33);
        if (VAR9 == 0)
        {
            FUN19(VAR33, VAR2->VAR11, "", &VAR34);
        }
        snprintf(VAR31, sizeof(VAR31), "", FUN20(VAR9));
        FUN21(FUN22(VAR4), VAR31, VAR33, &VAR34);
        FUN19(VAR33, FUN20(VAR9), "", &VAR34);
        FUN19(VAR33, VAR35, "", &VAR34);
        FUN23(VAR33, true, "", &VAR34);
    }
    FUN12(VAR10);
    VAR4->VAR36 = FUN24(VAR4->VAR28[0]);
    FUN25(VAR4->VAR36, 0, VAR37);
    FUN26(VAR4->VAR36, 2000, NULL);
    VAR4->VAR38.VAR39 = VAR40;
    FUN27(&VAR4->VAR38);
}