static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = FUN2(VAR2->VAR6[0]->VAR7->VAR8);
    int VAR9 = FUN3(VAR2->VAR10, VAR4, VAR11 * VAR5 >> 3);
    if (VAR9 < 0)
        return VAR9;
    VAR4->VAR12 = 0;
    VAR4->VAR13 = VAR9;
    return 0;