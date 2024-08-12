static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    while (VAR4->VAR9 < 3)
        FUN2(VAR2, VAR7);
    FUN3(VAR7);
    FUN4(VAR4);
    FUN5(&VAR4->VAR10);
    FUN5(&VAR4->VAR11);
    return 0;