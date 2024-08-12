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
    int *VAR27 = VAR2->VAR27[VAR5][VAR6];
    int *VAR28 = VAR2->VAR28[VAR5][VAR6];
    VAR29 *VAR30;
    int VAR31, VAR32;
    if (VAR2->VAR33)
    {
        for (VAR31 = 0; VAR31 < VAR21; VAR31++)
        {
            for (VAR32 = VAR23; VAR32 < VAR25 && VAR32 < VAR28[VAR31]; VAR32++)
            {
                VAR30 = (VAR29 *)VAR4->VAR34[VAR6] + VAR32 * VAR7 + VAR31;
                if (VAR30[0] != VAR9)
                {
                    VAR28[VAR31] = VAR32;
                    break;
                }
            }
            for (VAR32 = VAR25 - 1; VAR32 >= VAR23 && VAR32 >= VAR27[VAR31]; VAR32--)
            {
                VAR30 = (VAR29 *)VAR4->VAR34[VAR6] + VAR32 * VAR7 + VAR31;
                if (VAR30[0] != VAR9)
                {
                    VAR27[VAR31] = VAR32;
                    break;
                }
            }
        }
        if (VAR2->VAR35 == 3)
            FUN3(VAR2, VAR4, VAR5, VAR6);
        for (VAR31 = 0; VAR31 < VAR21; VAR31++)
        {
            VAR30 = (VAR29 *)VAR4->VAR34[VAR6] + VAR28[VAR31] * VAR7 + VAR31;
            VAR30[0] = VAR12;
            VAR30 = (VAR29 *)VAR4->VAR34[VAR6] + VAR27[VAR31] * VAR7 + VAR31;
            VAR30[0] = VAR12;
        }
    }
    else
    {
        for (VAR32 = 0; VAR32 < VAR19; VAR32++)
        {
            VAR30 = (VAR29 *)VAR4->VAR34[VAR6] + VAR32 * VAR7;
            for (VAR31 = VAR23; VAR31 < VAR25 && VAR31 < VAR28[VAR32]; VAR31++)
            {
                if (VAR30[VAR31] != VAR9)
                {
                    VAR28[VAR32] = VAR31;
                    break;
                }
            }
            for (VAR31 = VAR25 - 1; VAR31 >= VAR23 && VAR31 >= VAR27[VAR32]; VAR31--)
            {
                if (VAR30[VAR31] != VAR9)
                {
                    VAR27[VAR32] = VAR31;
                    break;
                }
            }
        }
        if (VAR2->VAR35 == 3)
            FUN3(VAR2, VAR4, VAR5, VAR6);
        for (VAR32 = 0; VAR32 < VAR19; VAR32++)
        {
            VAR30 = (VAR29 *)VAR4->VAR34[VAR6] + VAR32 * VAR7 + VAR28[VAR32];
            VAR30[0] = VAR12;
            VAR30 = (VAR29 *)VAR4->VAR34[VAR6] + VAR32 * VAR7 + VAR27[VAR32];
            VAR30[0] = VAR12;
        }
    }
}