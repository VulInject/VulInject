static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    int VAR9, VAR10;
    int VAR11;
    VAR6 = VAR2->VAR12;
    VAR2->VAR12 >>= VAR13;
    VAR7 = VAR2->VAR14 / VAR2->VAR12;
    VAR11 = VAR7 >> VAR15;
    VAR8 = VAR4->VAR16[VAR11];
    VAR10 = VAR9 = VAR4->VAR16[VAR11 + 1] + 1;
    while (VAR10 > VAR8 + 1)
    {
        VAR11 = (VAR10 + VAR8) >> 1;
        if (VAR4->VAR17[VAR11] <= VAR7)
        {
            VAR10 = VAR9;
            VAR8 = VAR11;
        }
        else
        {
            VAR10 = (VAR10 + VAR8) >> 1;
            VAR9 = VAR11;
        }
    }
    VAR5 = VAR4->VAR17[VAR8] * VAR2->VAR12;
    if (VAR8 != 255)
        VAR6 = VAR4->VAR17[VAR8 + 1] * VAR2->VAR12;
    VAR2->VAR14 -= VAR5;
    VAR2->VAR12 = VAR6 - VAR5;
    if (VAR2->VAR12 < VAR18)
        FUN2(VAR2);
    FUN3(VAR4, VAR8);
    return VAR8;
}