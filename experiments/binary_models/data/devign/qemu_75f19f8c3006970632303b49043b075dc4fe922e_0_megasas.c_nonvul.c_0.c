static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (VAR4->VAR7)
    {
        FUN3(VAR6, VAR4->VAR8, VAR4->VAR7, 0, 0);
    }
    VAR4->VAR8 = NULL;
    VAR4->VAR9 = 0;
    VAR4->VAR7 = 0;
    FUN4(VAR4->VAR10, VAR2->VAR11);
}