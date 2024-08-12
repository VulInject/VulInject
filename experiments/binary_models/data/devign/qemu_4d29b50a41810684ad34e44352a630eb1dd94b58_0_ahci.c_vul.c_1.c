static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    FUN3(VAR4->VAR5, "");
    FUN4(VAR4, NULL);
    VAR4->VAR6 = NULL;
    VAR4->VAR7 = FUN5(VAR8, VAR4);
    FUN6(VAR4->VAR7);
    return 0;
}