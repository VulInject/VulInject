static void FUN1(struct VAR1 *VAR2)
{
    char *VAR3;
    VAR4 *VAR5;
    VAR2->VAR6 = FUN2(NULL, "");
    FUN3(VAR2->VAR6, "", VAR7);
    FUN3(VAR2->VAR6, "", 0x48);
    FUN3(VAR2->VAR6, "", 0);
    FUN4(VAR2->VAR6, "", 1);
    VAR5 = FUN5(VAR8, 0, 0);
    if (VAR5)
    {
        FUN6(VAR2->VAR6, "", FUN7(VAR5));
    }
    FUN8(VAR2->VAR6);
    FUN9(FUN10(VAR2->VAR6), 0, FUN11(VAR2->VAR9->VAR10, VAR11));
    FUN12(VAR2->VAR9->VAR12, VAR13, FUN13(FUN10(VAR2->VAR6), 0));
    VAR3 = FUN14(VAR2->VAR6);
    memcpy(VAR3 + 0x000, VAR14, sizeof(VAR14));
    memcpy(VAR3 + 0x800, VAR15, sizeof(VAR15));
}