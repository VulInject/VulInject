void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL, *VAR5;
    FUN2(VAR4, &VAR2->VAR6, VAR7, VAR5)
    {
        FUN3(&VAR2->VAR6, VAR4, VAR7);
        FUN4(VAR4->VAR8);
        FUN4(VAR4);
    }
}