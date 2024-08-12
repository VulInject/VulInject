static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6)
{
    VAR3 *VAR7 = FUN2(VAR2);
    void *VAR8;
    FUN3(VAR4, VAR5);
    VAR8 = FUN4(VAR5, sizeof(VAR9));
    FUN5(VAR5, VAR7->VAR10, VAR7->VAR11);
    FUN6(VAR6, VAR5, VAR8, "", sizeof(VAR9) + VAR7->VAR11, 1, NULL);
    FUN7(VAR7, true);
}