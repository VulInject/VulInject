static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    int VAR9, VAR10;
    VAR5 = 0;
    VAR6 = VAR2->VAR11;
    VAR2->VAR11 >>= VAR12;
    VAR8 = 0;
    VAR9 = VAR4->VAR13 >> 1;
    VAR10 = VAR4->VAR13;
    do
    {
        VAR7 = VAR4->VAR14[VAR9] * VAR2->VAR11;
        if (VAR7 <= VAR2->VAR15)
        {
            VAR8 = VAR9;
            VAR5 = VAR7;
        }
        else
        {
            VAR10 = VAR9;
            VAR6 = VAR7;
        }
        VAR9 = (VAR10 + VAR8) >> 1;
    } while (VAR9 != VAR8);
    VAR2->VAR15 -= VAR5;
    VAR2->VAR11 = VAR6 - VAR5;
    if (VAR2->VAR11 < VAR16)
        FUN2(VAR2);
    FUN3(VAR4, VAR8);
    return VAR8;
}