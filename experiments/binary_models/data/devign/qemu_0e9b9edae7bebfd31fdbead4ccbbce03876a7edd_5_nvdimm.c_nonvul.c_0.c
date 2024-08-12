static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR6 *VAR7)
{
    VAR3 *VAR8 = FUN2(VAR2);
    unsigned int VAR9;
    FUN3(VAR4, VAR5);
    VAR9 = VAR5->VAR10;
    FUN4(VAR5, sizeof(VAR11));
    FUN5(VAR5, VAR8->VAR12, VAR8->VAR10);
    FUN6(VAR7, VAR5, (void *)(VAR5->VAR12 + VAR9), "", sizeof(VAR11) + VAR8->VAR10, 1, NULL, NULL);
    FUN7(VAR8, true);
}