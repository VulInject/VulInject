static void FUN1(void)
{
    VAR1 *VAR2, *VAR3;
    VAR4 *VAR5;
    const VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    const char *VAR12, *VAR13;
    VAR14 *VAR15;
    FUN2("");
    VAR2 = FUN3("");
    FUN4(VAR2);
    VAR5 = FUN5(VAR2, "");
    FUN4(VAR5);
    for (VAR7 = FUN6(VAR5); VAR7; VAR7 = FUN7(VAR7))
    {
        VAR3 = FUN8(FUN9(VAR7));
        FUN4(VAR3);
        VAR9 = FUN10(VAR3, "");
        FUN4(VAR9);
        VAR11 = FUN11(VAR9);
        FUN4(VAR11);
        VAR12 = FUN12(VAR11);
        if (!FUN13(VAR12, ""))
        {
            continue;
        }
        VAR15 = FUN14(sizeof(VAR14));
        VAR15->VAR16 = VAR12;
        VAR15->VAR17 = "";
        VAR15->VAR18 = 1;
        VAR15->VAR19 = 3;
        VAR15->VAR20 = 2;
        VAR15->VAR21 = VAR15->VAR18 * VAR15->VAR19 * VAR15->VAR20 * 2;
        if (FUN15(VAR12, "") || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0) || (strcmp(VAR12, "") == 0))
        {
            VAR13 = FUN16("", VAR12, VAR15->VAR18, VAR15->VAR19, VAR15->VAR20, VAR15->VAR21);
            FUN17(VAR13, VAR15, VAR22);
        }
        else
        {
            VAR13 = FUN16("", VAR12, VAR15->VAR18, VAR15->VAR19, VAR15->VAR20, VAR15->VAR21);
            FUN17(VAR13, VAR15, VAR23);
        }
    }
    FUN18();
}