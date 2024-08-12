static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8;
    const size_t VAR9 = FUN2(VAR2->VAR10->VAR11) / VAR12;
    const size_t VAR13 = FUN3(VAR2->VAR10->VAR11);
    if (VAR5 > VAR13)
    {
        VAR5 = VAR13;
    }
    if (VAR5 + VAR7 >= VAR13)
    {
        VAR7 = VAR13 - VAR5;
    }
    VAR2->VAR14 = 1;
    if (!VAR3)
    {
        VAR2->VAR15 = 1;
        for (VAR8 = 0; VAR8 < VAR7; VAR8++)
        {
            FUN4(VAR2->VAR16[VAR5 + VAR8], 0, VAR9);
            FUN5(VAR2->VAR16[VAR5 + VAR8], VAR9, VAR17 - VAR9);
        }
    }
}