static int FUN1(void)
{
    int VAR1;
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
    {
        VAR3 *VAR4 = VAR5[VAR1];
        VAR6 *VAR7 = VAR8[VAR4->VAR9];
        VAR10 *VAR11 = VAR8[VAR4->VAR9]->VAR12;
        if (VAR4->VAR13 || (VAR11->VAR14 && FUN2(VAR11->VAR14) >= VAR7->VAR15))
            continue;
        if (VAR4->VAR16 >= VAR4->VAR17)
        {
            int VAR18;
            for (VAR18 = 0; VAR18 < VAR7->VAR12->VAR19; VAR18++)
                VAR5[VAR7->VAR20 + VAR18]->VAR13 = 1;
            continue;
        }
        return 1;
    }
    return 0;
}