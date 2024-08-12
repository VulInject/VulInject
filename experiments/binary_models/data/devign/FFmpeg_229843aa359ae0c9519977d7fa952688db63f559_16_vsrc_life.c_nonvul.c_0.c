static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    VAR8 *VAR9 = VAR4->VAR10[VAR4->VAR11];
    VAR8 *VAR12 = VAR4->VAR10[!VAR4->VAR11];
    enum
    {
        VAR13,
        VAR14,
        VAR15,
        VAR16,
        VAR17,
        VAR18,
        VAR19,
        VAR20
    };
    for (VAR6 = 0; VAR6 < VAR4->VAR21; VAR6++)
    {
        for (VAR7 = 0; VAR7 < VAR4->VAR22; VAR7++)
        {
            int VAR23[8][2], VAR24, VAR25, VAR26;
            if (VAR4->VAR27)
            {
                VAR23[VAR13][0] = (VAR6 - 1) < 0 ? VAR4->VAR21 - 1 : VAR6 - 1;
                VAR23[VAR13][1] = (VAR7 - 1) < 0 ? VAR4->VAR22 - 1 : VAR7 - 1;
                VAR23[VAR14][0] = (VAR6 - 1) < 0 ? VAR4->VAR21 - 1 : VAR6 - 1;
                VAR23[VAR14][1] = VAR7;
                VAR23[VAR15][0] = (VAR6 - 1) < 0 ? VAR4->VAR21 - 1 : VAR6 - 1;
                VAR23[VAR15][1] = (VAR7 + 1) == VAR4->VAR22 ? 0 : VAR7 + 1;
                VAR23[VAR16][0] = VAR6;
                VAR23[VAR16][1] = (VAR7 - 1) < 0 ? VAR4->VAR22 - 1 : VAR7 - 1;
                VAR23[VAR17][0] = VAR6;
                VAR23[VAR17][1] = (VAR7 + 1) == VAR4->VAR22 ? 0 : VAR7 + 1;
                VAR23[VAR18][0] = (VAR6 + 1) == VAR4->VAR21 ? 0 : VAR6 + 1;
                VAR23[VAR18][1] = (VAR7 - 1) < 0 ? VAR4->VAR22 - 1 : VAR7 - 1;
                VAR23[VAR19][0] = (VAR6 + 1) == VAR4->VAR21 ? 0 : VAR6 + 1;
                VAR23[VAR19][1] = VAR7;
                VAR23[VAR20][0] = (VAR6 + 1) == VAR4->VAR21 ? 0 : VAR6 + 1;
                VAR23[VAR20][1] = (VAR7 + 1) == VAR4->VAR22 ? 0 : VAR7 + 1;
            }
            else
            {
                VAR23[VAR13][0] = (VAR6 - 1) < 0 ? -1 : VAR6 - 1;
                VAR23[VAR13][1] = (VAR7 - 1) < 0 ? -1 : VAR7 - 1;
                VAR23[VAR14][0] = (VAR6 - 1) < 0 ? -1 : VAR6 - 1;
                VAR23[VAR14][1] = VAR7;
                VAR23[VAR15][0] = (VAR6 - 1) < 0 ? -1 : VAR6 - 1;
                VAR23[VAR15][1] = (VAR7 + 1) == VAR4->VAR22 ? -1 : VAR7 + 1;
                VAR23[VAR16][0] = VAR6;
                VAR23[VAR16][1] = (VAR7 - 1) < 0 ? -1 : VAR7 - 1;
                VAR23[VAR17][0] = VAR6;
                VAR23[VAR17][1] = (VAR7 + 1) == VAR4->VAR22 ? -1 : VAR7 + 1;
                VAR23[VAR18][0] = (VAR6 + 1) == VAR4->VAR21 ? -1 : VAR6 + 1;
                VAR23[VAR18][1] = (VAR7 - 1) < 0 ? -1 : VAR7 - 1;
                VAR23[VAR19][0] = (VAR6 + 1) == VAR4->VAR21 ? -1 : VAR6 + 1;
                VAR23[VAR19][1] = VAR7;
                VAR23[VAR20][0] = (VAR6 + 1) == VAR4->VAR21 ? -1 : VAR6 + 1;
                VAR23[VAR20][1] = (VAR7 + 1) == VAR4->VAR22 ? -1 : VAR7 + 1;
            }
            VAR24 = (VAR23[VAR13][0] == -1 || VAR23[VAR13][1] == -1 ? 0 : VAR9[VAR23[VAR13][0] * VAR4->VAR22 + VAR23[VAR13][1]] == VAR28) + (VAR23[VAR14][0] == -1 || VAR23[VAR14][1] == -1 ? 0 : VAR9[VAR23[VAR14][0] * VAR4->VAR22 + VAR23[VAR14][1]] == VAR28) + (VAR23[VAR15][0] == -1 || VAR23[VAR15][1] == -1 ? 0 : VAR9[VAR23[VAR15][0] * VAR4->VAR22 + VAR23[VAR15][1]] == VAR28) + (VAR23[VAR16][0] == -1 || VAR23[VAR16][1] == -1 ? 0 : VAR9[VAR23[VAR16][0] * VAR4->VAR22 + VAR23[VAR16][1]] == VAR28) + (VAR23[VAR17][0] == -1 || VAR23[VAR17][1] == -1 ? 0 : VAR9[VAR23[VAR17][0] * VAR4->VAR22 + VAR23[VAR17][1]] == VAR28) + (VAR23[VAR18][0] == -1 || VAR23[VAR18][1] == -1 ? 0 : VAR9[VAR23[VAR18][0] * VAR4->VAR22 + VAR23[VAR18][1]] == VAR28) + (VAR23[VAR19][0] == -1 || VAR23[VAR19][1] == -1 ? 0 : VAR9[VAR23[VAR19][0] * VAR4->VAR22 + VAR23[VAR19][1]] == VAR28) + (VAR23[VAR20][0] == -1 || VAR23[VAR20][1] == -1 ? 0 : VAR9[VAR23[VAR20][0] * VAR4->VAR22 + VAR23[VAR20][1]] == VAR28);
            VAR26 = VAR9[VAR6 * VAR4->VAR22 + VAR7];
            VAR25 = 1 << VAR24 & (VAR26 == VAR28 ? VAR4->VAR29 : VAR4->VAR30);
            if (VAR25)
                *VAR12 = VAR28;
            else if (VAR26)
                *VAR12 = VAR26 - 1;
            else
                *VAR12 = 0;
            FUN2(VAR2, "", VAR6, VAR7, VAR24, VAR26, *VAR12);
            VAR12++;
        }
    }
    VAR4->VAR11 = !VAR4->VAR11;
}