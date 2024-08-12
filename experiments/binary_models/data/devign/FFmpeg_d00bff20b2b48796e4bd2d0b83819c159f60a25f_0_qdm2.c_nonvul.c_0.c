static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    if (!VAR6)
        return 0;
    if (VAR7 < VAR9->VAR11)
        return -1;
    *VAR4 = VAR9->VAR12 * VAR9->VAR13 * sizeof(VAR14);
    FUN2(VAR2, VAR15, "", VAR7, VAR6, VAR9->VAR11, VAR3, *VAR4);
    FUN3(VAR9, VAR6, VAR3);
    if (VAR9->VAR16 == 0)
    {
        return VAR9->VAR11;
    }
    return 0;
}