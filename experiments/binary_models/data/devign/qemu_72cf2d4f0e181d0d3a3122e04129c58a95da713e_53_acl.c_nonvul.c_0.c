void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR2->VAR5 = 1;
    FUN2(VAR4, &VAR2->VAR6, VAR7)
    {
        FUN3(&VAR2->VAR6, VAR4, VAR7);
        free(VAR4->VAR8);
        free(VAR4);
    }
    VAR2->VAR9 = 0;
}