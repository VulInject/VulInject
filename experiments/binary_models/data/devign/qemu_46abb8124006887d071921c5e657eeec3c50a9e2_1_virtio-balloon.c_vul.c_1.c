static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    int VAR9;
    FUN4(VAR6, "", VAR10, sizeof(struct VAR11));
    VAR9 = FUN5(VAR12, VAR13, VAR8);
    if (VAR9 < 0)
    {
        FUN6(VAR4, "");
        FUN7(VAR6);
        return;
    }
    VAR8->VAR14 = FUN8(VAR6, 128, VAR15);
    VAR8->VAR16 = FUN8(VAR6, 128, VAR15);
    VAR8->VAR17 = FUN8(VAR6, 128, VAR18);
    FUN9(VAR8);
    FUN10(VAR2, "", -1, 1, VAR19, VAR20, VAR8);
    FUN11(FUN12(VAR2), "", "", VAR21, NULL, NULL, VAR8, NULL);
    FUN11(FUN12(VAR2), "", "", VAR22, VAR23, NULL, VAR8, NULL);
}