static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5, int VAR6, int *VAR7, int *VAR8, int *VAR9, int VAR10)
{
    VAR11 *VAR12;
    int VAR13 = *VAR9 * VAR10;
    unsigned VAR14 = ((1 << VAR10) - 1) << VAR13;
    VAR5 <<= VAR13;
    while (VAR6 > 0)
    {
        int VAR15;
        for (VAR15 = 8 - VAR10; VAR15 >= 0; VAR15 -= VAR10)
        {
            VAR12 = VAR4->VAR16[0] + *VAR8 * VAR4->VAR17[0];
            VAR12[*VAR7] |= (VAR5 >> VAR15) & VAR14;
            *VAR7 += 1;
            if (*VAR7 == VAR2->VAR18)
            {
                *VAR8 -= 1;
                *VAR7 = 0;
                if (*VAR8 < 0)
                {
                    *VAR8 = VAR2->VAR19 - 1;
                    *VAR9 += 1;
                    if (*VAR9 >= VAR2->VAR20)
                        return;
                    VAR5 <<= VAR10;
                    VAR14 <<= VAR10;
                }
            }
        }
        VAR6--;
    }
}