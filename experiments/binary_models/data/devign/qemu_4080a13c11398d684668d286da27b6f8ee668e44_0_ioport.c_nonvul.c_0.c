void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    const VAR6 *VAR7, *VAR8 = VAR2->VAR9;
    unsigned int VAR10, VAR11, VAR12, VAR13;
    VAR2->VAR4 = VAR4;
    VAR12 = VAR10 = VAR8->VAR14;
    VAR11 = VAR10 + VAR8->VAR15 + VAR8->VAR16 - 1;
    VAR13 = 1;
    for (VAR7 = VAR8 + 1; VAR7->VAR16 != 0; VAR7++, VAR13++)
    {
        assert(VAR7->VAR14 >= VAR12);
        VAR12 = VAR7->VAR14;
        if (VAR12 > VAR11)
        {
            FUN2(VAR2, VAR8, VAR13, VAR5, VAR10, VAR11);
            VAR8 = VAR7;
            VAR10 = VAR12;
            VAR11 = VAR10 + VAR7->VAR15 + VAR8->VAR16 - 1;
            VAR13 = 0;
        }
        else if (VAR12 + VAR7->VAR15 > VAR11)
        {
            VAR11 = VAR12 + VAR7->VAR15 + VAR8->VAR16 - 1;
        }
    }
    FUN2(VAR2, VAR8, VAR13, VAR5, VAR10, VAR11);
}