static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR3 *VAR7, int VAR8)
{
    int VAR9;
    VAR2->VAR10.FUN2(VAR4);
    VAR9 = FUN3(VAR2, VAR6);
    if (VAR9 == 0xfffff)
    {
        FUN4(VAR2->VAR11, VAR12, "");
        return VAR13;
    }
    VAR9 = (VAR9 * (VAR7[0] << VAR8)) + VAR2->VAR14[VAR5];
    VAR2->VAR14[VAR5] = VAR9;
    VAR4[0] = VAR9;
    return 0;
}