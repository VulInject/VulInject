static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    VAR7 *VAR8 = NULL;
    VAR2->VAR9 = FUN2(VAR10, 1);
    FUN3(VAR2->VAR9, sizeof(VAR10), VAR11);
    FUN4(FUN5(VAR2->VAR9), FUN6());
    FUN7(FUN8(VAR2->VAR9), VAR3, "", &VAR8);
    FUN9(FUN8(VAR2->VAR9), VAR12, "", &VAR8);
    FUN10(FUN8(VAR2->VAR9), true, "", &VAR8);
    if (VAR8 != NULL)
    {
        FUN11("", FUN12(VAR8));
        FUN13(1);
    }
    FUN14(FUN15(VAR2->VAR9), 0, 0, 1);
    *VAR6 = FUN16(VAR2->VAR9, 3);
    *VAR5 = NULL;
}