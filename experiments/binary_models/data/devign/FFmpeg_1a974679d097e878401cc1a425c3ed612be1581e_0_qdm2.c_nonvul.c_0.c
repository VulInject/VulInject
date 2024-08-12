static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    VAR7 = FUN2(VAR2, VAR4->VAR8, VAR4->VAR9, VAR6);
    if (VAR7-- == 0)
        VAR7 = FUN3(VAR2, FUN3(VAR2, 3) + 1);
    if (VAR5)
    {
        int VAR10;
        if (VAR7 >= 60)
        {
            FUN4(0, VAR11, "", VAR7);
            return 0;
        }
        VAR10 = VAR12[VAR7];
        if ((VAR7 & ~3) > 0)
            VAR10 += FUN3(VAR2, (VAR7 >> 2));
        VAR7 = VAR10;
    }
    return VAR7;
}