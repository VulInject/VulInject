int FUN1(VAR1 *VAR2, const VAR1 *VAR3, enum PixelFormat VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8;
    if (VAR4 < 0 || VAR4 >= VAR9)
        return -1;
    VAR7 = VAR10[VAR4].VAR11;
    VAR8 = VAR10[VAR4].VAR12;
    if (FUN2(VAR4))
    {
        VAR2->VAR13[0] = VAR3->VAR13[0] + (VAR5 * VAR3->VAR14[0]) + VAR6;
        VAR2->VAR13[1] = VAR3->VAR13[1] + ((VAR5 >> VAR7) * VAR3->VAR14[1]) + (VAR6 >> VAR8);
        VAR2->VAR13[2] = VAR3->VAR13[2] + ((VAR5 >> VAR7) * VAR3->VAR14[2]) + (VAR6 >> VAR8);
    }
    else
    {
        if (VAR5 % (1 << VAR7) || VAR6 % (1 << VAR8))
            return -1;
        if (VAR6)
            return -1;
        VAR2->VAR13[0] = VAR3->VAR13[0] + (VAR5 * VAR3->VAR14[0]) + VAR6;
    }
    VAR2->VAR14[0] = VAR3->VAR14[0];
    VAR2->VAR14[1] = VAR3->VAR14[1];
    VAR2->VAR14[2] = VAR3->VAR14[2];
    return 0;
}