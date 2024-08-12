static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    const int VAR7 = VAR4->VAR8[VAR6] / 2;
    const int VAR9 = VAR2->VAR10[VAR6] * (VAR2->VAR11 / 256);
    const int VAR12 = VAR2->VAR11 - 1;
    const int VAR13 = (VAR6 == 1 || VAR6 == 2);
    const int VAR14 = (VAR13 ? VAR2->VAR15->VAR16 : 0);
    const int VAR17 = (VAR13 ? VAR2->VAR15->VAR18 : 0);
    const int VAR19 = FUN2(VAR4->VAR20, VAR17);
    const int VAR21 = FUN2(VAR4->VAR22, VAR14);
    const int VAR23 = VAR2->VAR24[VAR5];
    const int VAR25 = VAR2->VAR26[VAR5];
    VAR27 *VAR28;
    int VAR29, VAR30;
    if (VAR2->VAR31)
    {
        for (VAR29 = 0; VAR29 < VAR21; VAR29++)
        {
            for (VAR30 = VAR23; VAR30 < VAR25; VAR30++)
            {
                VAR28 = (VAR27 *)VAR4->VAR32[VAR6] + VAR30 * VAR7 + VAR29;
                if (VAR28[0] != VAR9)
                {
                    VAR28[0] = VAR12;
                    break;
                }
            }
            for (VAR30 = VAR25 - 1; VAR30 >= VAR23; VAR30--)
            {
                VAR28 = (VAR27 *)VAR4->VAR32[VAR6] + VAR30 * VAR7 + VAR29;
                if (VAR28[0] != VAR9)
                {
                    VAR28[0] = VAR12;
                    break;
                }
            }
        }
    }
    else
    {
        for (VAR30 = 0; VAR30 < VAR19; VAR30++)
        {
            VAR28 = (VAR27 *)VAR4->VAR32[VAR6] + VAR30 * VAR7;
            for (VAR29 = VAR23; VAR29 < VAR25; VAR29++)
            {
                if (VAR28[VAR29] != VAR9)
                {
                    VAR28[VAR29] = VAR12;
                    break;
                }
            }
            for (VAR29 = VAR25 - 1; VAR29 >= VAR23; VAR29--)
            {
                if (VAR28[VAR29] != VAR9)
                {
                    VAR28[VAR29] = VAR12;
                    break;
                }
            }
        }
    }
}