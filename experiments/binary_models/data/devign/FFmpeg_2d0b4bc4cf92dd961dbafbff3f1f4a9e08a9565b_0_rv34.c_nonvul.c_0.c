static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (VAR4->VAR6 >= VAR4->VAR7)
        return 1;
    if (!VAR4->VAR8)
        return 1;
    if (VAR2->VAR4.VAR9 > 1)
        return 0;
    VAR5 = FUN2(&VAR4->VAR10);
    if (VAR5 <= 0 || (VAR5 < 8 && !FUN3(&VAR4->VAR10, VAR5)))
        return 1;
    return 0;
}