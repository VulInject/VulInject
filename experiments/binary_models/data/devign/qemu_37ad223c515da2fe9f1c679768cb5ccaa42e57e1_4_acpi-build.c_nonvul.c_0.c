FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    VAR4 *VAR5;
    VAR5 = FUN2(VAR2, sizeof *VAR5);
    VAR5->VAR6 = FUN3(VAR7);
    VAR5->VAR8 = FUN4(0);
    VAR5->VAR9 = FUN5(VAR10);
    FUN6(VAR3, VAR2, (void *)VAR5, "", sizeof(*VAR5), 4, NULL, NULL);
}