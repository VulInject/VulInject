static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR5 = FUN2(VAR2, "");
    FUN3(VAR5, &VAR9, NULL, &VAR7);
    FUN4(&VAR7);
    FUN5(VAR9);
    VAR5 = FUN2(VAR2, "");
    FUN6(VAR5, &VAR11, NULL, &VAR7);
    FUN4(&VAR7);
    FUN7(VAR11);
    VAR5 = FUN2(VAR2, "");
    FUN8(VAR5, &VAR13, NULL, &VAR20);
    FUN9(VAR13->VAR21, ==, VAR22);
    FUN10(VAR13->VAR23.VAR24, ==, 42);
    FUN11(VAR13);
    VAR5 = FUN2(VAR2, "");
    FUN12(VAR5, &VAR15, NULL, &VAR20);
    FUN9(VAR15->VAR21, ==, VAR25);
    FUN9(VAR15->VAR23.VAR26, ==, 42);
    FUN13(VAR15);
    VAR5 = FUN2(VAR2, "");
    FUN14(VAR5, &VAR17, NULL, &VAR20);
    FUN9(VAR17->VAR21, ==, VAR27);
    FUN9(VAR17->VAR23.VAR26, ==, 42);
    FUN15(VAR17);
    VAR5 = FUN2(VAR2, "");
    FUN16(VAR5, &VAR19, NULL, &VAR20);
    FUN9(VAR19->VAR21, ==, VAR28);
    FUN9(VAR19->VAR23.VAR26, ==, 42);
    FUN17(VAR19);
    VAR5 = FUN2(VAR2, "");
    FUN3(VAR5, &VAR9, NULL, &VAR7);
    FUN4(&VAR7);
    FUN5(VAR9);
    VAR5 = FUN2(VAR2, "");
    FUN6(VAR5, &VAR11, NULL, &VAR20);
    FUN9(VAR11->VAR21, ==, VAR29);
    FUN10(VAR11->VAR23.VAR24, ==, 42.5);
    FUN7(VAR11);
    VAR5 = FUN2(VAR2, "");
    FUN8(VAR5, &VAR13, NULL, &VAR20);
    FUN9(VAR13->VAR21, ==, VAR22);
    FUN10(VAR13->VAR23.VAR24, ==, 42.5);
    FUN11(VAR13);
    VAR5 = FUN2(VAR2, "");
    FUN12(VAR5, &VAR15, NULL, &VAR7);
    FUN4(&VAR7);
    FUN13(VAR15);
    VAR5 = FUN2(VAR2, "");
    FUN14(VAR5, &VAR17, NULL, &VAR20);
    FUN9(VAR17->VAR21, ==, VAR30);
    FUN10(VAR17->VAR23.VAR24, ==, 42.5);
    FUN15(VAR17);
    VAR5 = FUN2(VAR2, "");
    FUN16(VAR5, &VAR19, NULL, &VAR20);
    FUN9(VAR19->VAR21, ==, VAR31);
    FUN10(VAR19->VAR23.VAR24, ==, 42.5);
    FUN17(VAR19);
}