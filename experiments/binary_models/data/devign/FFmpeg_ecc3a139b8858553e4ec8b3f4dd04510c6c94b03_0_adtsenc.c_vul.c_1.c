static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    GetBitContext VAR8;
    FUN2(&VAR8, VAR6, VAR7 * 8);
    VAR4->VAR9 = FUN3(&VAR8, 5) - 1;
    VAR4->VAR10 = FUN3(&VAR8, 4);
    VAR4->VAR11 = FUN3(&VAR8, 4);
    if (VAR4->VAR9 > 3)
    {
        FUN4(VAR2, VAR12, "", VAR4->VAR9);
        return -1;
    }
    if (VAR4->VAR10 == 15)
    {
        FUN4(VAR2, VAR12, "");
        return -1;
    }
    if (VAR4->VAR11 == 0)
    {
        FUN5(VAR2, "", 0);
        return -1;
    }
    VAR4->VAR13 = 1;
    return 0;
}