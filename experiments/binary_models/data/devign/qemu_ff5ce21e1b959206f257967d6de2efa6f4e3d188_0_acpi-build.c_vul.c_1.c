FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(VAR2, sizeof *VAR6);
    VAR6->VAR7 = FUN3(VAR8);
    VAR6->VAR9 = FUN4(0);
    VAR6->VAR10 = FUN5(VAR11);
    FUN6(VAR4, VAR2, (void *)VAR6, "", sizeof(*VAR6), 4, NULL, NULL);
}