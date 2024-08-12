static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR4->VAR6 = 1;
    if (VAR4->VAR7)
        FUN2(VAR4->VAR7);
    if (VAR4->VAR8)
        FUN3(VAR4->VAR8, NULL);
    if (VAR4->mutex)
        FUN4(VAR4->mutex);
    if (VAR4->VAR9)
        FUN5(VAR4->VAR9);
    if (!VAR4->VAR10)
        FUN6();
    return 0;