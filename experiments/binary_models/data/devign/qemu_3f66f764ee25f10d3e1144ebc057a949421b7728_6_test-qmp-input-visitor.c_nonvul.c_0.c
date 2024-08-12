static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR10 *VAR11 = FUN2("");
    VAR10 *VAR12 = FUN2("");
    int VAR13;
    for (VAR13 = 0; VAR13 < 32; VAR13++)
    {
        FUN3(VAR11, "", (double)VAR13 / 3);
        if (VAR13 != 31)
        {
            FUN4(VAR11, "");
        }
    }
    FUN3(VAR12, "", VAR11->VAR14);
    VAR9 = FUN5(VAR2, VAR12->VAR14);
    FUN6(VAR9, &VAR5, NULL, &VAR15);
    FUN7(VAR5 != NULL);
    FUN8(VAR5->VAR16, ==, VAR17);
    for (VAR13 = 0, VAR7 = VAR5->VAR18.VAR19; VAR7; VAR7 = VAR7->VAR20, VAR13++)
    {
        VAR10 *VAR21 = FUN2("");
        VAR10 *VAR22 = FUN2("");
        FUN9(VAR21, "", (double)VAR13 / 3);
        FUN9(VAR22, "", VAR7->VAR23);
        FUN10(VAR21->VAR14, ==, VAR22->VAR14);
        FUN11(VAR21, true);
        FUN11(VAR22, true);
    }
    FUN11(VAR12, true);
    FUN11(VAR11, true);
    FUN12(VAR5);
}