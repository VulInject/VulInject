static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    FUN3(&VAR4->VAR2.VAR5);
    VAR6 = &VAR4->VAR2;
    FUN4(VAR7, VAR4);
    return 0;
}