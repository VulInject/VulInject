static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 *VAR8, int VAR9)
{
    int VAR10;
    VAR2->VAR11.FUN2(VAR4);
    VAR10 = FUN3(VAR2, VAR6);
    if (VAR10 == 0xfffff)
    {
        FUN4(VAR2->VAR12, VAR13, "");
        return VAR14;
    }
    VAR10 = (VAR10 * (VAR8[0] << VAR9)) + VAR2->VAR15[VAR5];
    VAR2->VAR15[VAR5] = VAR10;
    VAR4[0] = VAR10;
    return 0;
}