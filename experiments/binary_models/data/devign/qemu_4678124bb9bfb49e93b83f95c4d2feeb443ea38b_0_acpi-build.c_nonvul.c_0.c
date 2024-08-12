FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR1 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, sizeof *VAR7);
    unsigned VAR8 = sizeof(VAR7->VAR9);
    unsigned VAR10 = (char *)&VAR7->VAR9 - VAR2->VAR11;
    VAR7->VAR12 = FUN3(VAR13);
    VAR7->VAR14 = FUN4(VAR15);
    FUN2(VAR5, FUN5(VAR7->VAR14));
    FUN6(VAR4, VAR16, VAR5, 1, false);
    FUN7(VAR4, VAR17, VAR10, VAR8, VAR16, 0);
    FUN8(VAR4, VAR2, (void *)VAR7, "", sizeof(*VAR7), 2, NULL, NULL);
}