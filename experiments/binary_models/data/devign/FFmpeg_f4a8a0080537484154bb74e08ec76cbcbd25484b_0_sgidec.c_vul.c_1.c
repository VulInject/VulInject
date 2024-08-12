static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5;
    unsigned int VAR6 = VAR4->VAR7 * VAR4->VAR8 * 4;
    GetByteContext VAR9 = VAR4->VAR10;
    unsigned int VAR11, VAR12;
    unsigned int VAR13;
    if (VAR6 * 2 > FUN2(&VAR4->VAR10))
    {
        return VAR14;
    }
    for (VAR12 = 0; VAR12 < VAR4->VAR8; VAR12++)
    {
        VAR5 = VAR2;
        for (VAR11 = 0; VAR11 < VAR4->VAR7; VAR11++)
        {
            VAR5 -= VAR4->VAR15;
            VAR13 = FUN3(&VAR9);
            FUN4(&VAR4->VAR10, VAR13, VAR16);
            if (FUN5(VAR4, VAR5 + VAR12, VAR5 + FUN6(VAR4->VAR15), VAR4->VAR8) != VAR4->VAR17)
            {
                return VAR14;
            }
        }
    }
    return 0;
}