static VAR1 FUN1(VAR2 *VAR3, unsigned VAR4, unsigned VAR5)
{
    unsigned VAR6, VAR7;
    CodeBook VAR8 = {0};
    if (VAR5 >= VAR9 / 34 || FUN2(VAR3) < VAR5 * 34)
        return VAR8;
    if (VAR5 >= VAR9 / sizeof(VAR10))
        return VAR8;
    VAR8.VAR11 = FUN3(VAR5 ? VAR5 * sizeof(VAR10) : 1);
    if (!VAR8.VAR11)
        return VAR8;
    VAR8.VAR4 = VAR4;
    VAR8.VAR5 = VAR5;
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        unsigned VAR12 = FUN4(VAR3, 4);
        unsigned VAR13 = FUN4(VAR3, 15);
        unsigned VAR14 = FUN4(VAR3, 15);
        for (VAR7 = 0; VAR7 < 4; VAR7++)
        {
            if (VAR12 & (1 << VAR7))
                VAR8.VAR11[VAR6].VAR15[VAR7] = VAR14;
            else
                VAR8.VAR11[VAR6].VAR15[VAR7] = VAR13;
        }
    }
    return VAR8;
}