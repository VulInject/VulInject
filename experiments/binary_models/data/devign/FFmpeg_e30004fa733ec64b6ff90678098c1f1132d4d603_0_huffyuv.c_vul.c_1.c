static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    GetBitContext VAR6;
    int VAR7;
    FUN2(&VAR6, VAR4, VAR5 * 8);
    for (VAR7 = 0; VAR7 < 3; VAR7++)
    {
        FUN3(VAR2->VAR8[VAR7], &VAR6);
        if (FUN4(VAR2->VAR9[VAR7], VAR2->VAR8[VAR7]) < 0)
        {
            return -1;
        }
        for (VAR10 = 0; VAR10 < 256; VAR10++)
        {
            FUN5("", VAR2->VAR9[VAR7][VAR10], VAR2->VAR8[VAR7][VAR10], VAR10);
        }
        FUN6(&VAR2->VAR11[VAR7]);
        FUN7(&VAR2->VAR11[VAR7], VAR12, 256, VAR2->VAR8[VAR7], 1, 1, VAR2->VAR9[VAR7], 4, 4, 0);
    }
    FUN8(VAR2);
    return (FUN9(&VAR6) + 7) / 8;
}