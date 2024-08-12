static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    FUN3(&VAR4->VAR5, FUN4(VAR4), "", VAR6, &VAR7);
    FUN5(&VAR4->VAR5);
    FUN6(&VAR4->VAR5, true);
    FUN7(VAR2, &VAR4->VAR5);
    return 0;
}