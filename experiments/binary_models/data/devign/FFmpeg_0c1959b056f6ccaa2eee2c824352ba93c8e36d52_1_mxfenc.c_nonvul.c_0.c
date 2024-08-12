static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    const char *VAR8 = "";
    const char *VAR9 = "";
    const char *VAR10;
    int VAR11;
    FUN2(VAR7, 0x013000);
    FUN3(VAR2, "", VAR7->VAR12 - 16);
    VAR10 = VAR2->VAR13 & VAR14 ? "" : FUN4(VAR15);
    VAR11 = 84 + (strlen(VAR8) + strlen(VAR9) + strlen(VAR10)) * 2;
    FUN5(VAR7, VAR11);
    FUN6(VAR7, 16, 0x3C0A);
    FUN7(VAR7, VAR16, 0);
    FUN3(VAR2, "", VAR7->VAR12 - 16);
    FUN6(VAR7, 16, 0x3C09);
    FUN7(VAR7, VAR16, 1);
    FUN8(VAR7, 0x3C01, VAR8);
    FUN8(VAR7, 0x3C02, VAR9);
    FUN8(VAR7, 0x3C04, VAR10);
    FUN6(VAR7, 16, 0x3C05);
    FUN7(VAR7, VAR16, 2);
    FUN6(VAR7, 8, 0x3C06);
    FUN9(VAR7, VAR4->VAR17);
}