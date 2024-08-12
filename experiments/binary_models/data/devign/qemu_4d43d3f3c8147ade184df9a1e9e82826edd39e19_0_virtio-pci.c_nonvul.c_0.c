static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(&VAR4->VAR6);
    FUN4(VAR4);
    FUN5(VAR6);
    FUN6(&VAR4->VAR7);
}