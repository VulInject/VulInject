static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    FUN2(VAR4);
    FUN3(&(VAR4->VAR6));
    FUN3(&(VAR4->VAR7));
    FUN3(&(VAR4->VAR8));
    if (VAR4->VAR9)
        free(VAR4->VAR9);
}