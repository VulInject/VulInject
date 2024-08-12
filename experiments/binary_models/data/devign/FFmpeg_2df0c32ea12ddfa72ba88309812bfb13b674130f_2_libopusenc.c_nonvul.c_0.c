static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6)
{
    VAR5 *VAR7 = VAR2->VAR8;
    int VAR9 = VAR2->VAR9;
    FUN2(&VAR7, "", 8);
    FUN3(&VAR7, 1);
    FUN3(&VAR7, VAR9);
    FUN4(&VAR7, VAR2->VAR10);
    FUN5(&VAR7, VAR2->VAR11);
    FUN4(&VAR7, 0);
    if (VAR9 > 2)
    {
        FUN3(&VAR7, VAR9 <= 8 ? 1 : 255);
        FUN3(&VAR7, VAR3);
        FUN3(&VAR7, VAR4);
        FUN2(&VAR7, VAR6, VAR9);
    }
    else
    {
        FUN3(&VAR7, 0);
    }
}