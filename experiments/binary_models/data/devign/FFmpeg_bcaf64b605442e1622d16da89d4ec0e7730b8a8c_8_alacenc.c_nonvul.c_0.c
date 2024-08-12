static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13;
    VAR9->VAR14 = VAR6->VAR15;
    if (VAR6->VAR15 < VAR16)
        VAR12 = FUN2(VAR9->VAR14, VAR2->VAR17, VAR2->VAR18);
    else
        VAR12 = VAR9->VAR19;
    if ((VAR13 = FUN3(VAR2, VAR4, 2 * VAR12)) < 0)
        return VAR13;
    if (VAR9->VAR20)
    {
        VAR9->VAR21 = 0;
        VAR9->VAR22 = VAR2->VAR18 - 16;
    }
    else
    {
        VAR9->VAR21 = 1;
        VAR9->VAR22 = 0;
    }
    VAR11 = FUN4(VAR9, VAR4, VAR6->VAR23);
    if (VAR11 > VAR12)
    {
        VAR9->VAR21 = 1;
        VAR9->VAR22 = 0;
        VAR11 = FUN4(VAR9, VAR4, VAR6->VAR23);
    }
    VAR4->VAR24 = VAR11;
    *VAR7 = 1;
    return 0;
}