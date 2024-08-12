static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    GetBitContext VAR6;
    int VAR7;
    int VAR8;
    FUN2(&VAR6, VAR4, VAR5 * 8);
    for (VAR7 = 0; VAR7 < 3; VAR7++)
    {
        if (FUN3(VAR2->VAR9[VAR7], &VAR6) < 0)
            return -1;
        if (FUN4(VAR2->VAR10[VAR7], VAR2->VAR9[VAR7]) < 0)
        {
            return -1;
        }
        FUN5(&VAR2->VAR11[VAR7]);
        if ((VAR8 = FUN6(&VAR2->VAR11[VAR7], VAR12, 256, VAR2->VAR9[VAR7], 1, 1, VAR2->VAR10[VAR7], 4, 4, 0)) < 0)
            return VAR8;
    }
    FUN7(VAR2);
    return (FUN8(&VAR6) + 7) / 8;
}