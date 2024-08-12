void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    VAR3 *VAR8, *VAR9;
    VAR10 *const VAR11 = VAR2->VAR12.VAR11;
    VAR8 = VAR2->VAR8[0][0] + VAR2->VAR13[VAR5] * 16;
    VAR9 = VAR8;
    if (VAR2->VAR14)
    {
        if (VAR6 == 0)
        {
            const int VAR15 = VAR2->VAR16 - 1 + VAR2->VAR17 * VAR2->VAR18;
            VAR8 -= 16;
            if (VAR2->VAR16 == 0 || VAR2->VAR19 == VAR11[VAR15] || VAR5 == 1 || VAR5 == 3)
            {
                for (VAR7 = 1; VAR7 < 8; VAR7++)
                    VAR4[VAR2->VAR20.VAR21[VAR7 << 3]] += VAR8[VAR7];
            }
            else
            {
                for (VAR7 = 1; VAR7 < 8; VAR7++)
                    VAR4[VAR2->VAR20.VAR21[VAR7 << 3]] += FUN2(VAR8[VAR7] * VAR11[VAR15], VAR2->VAR19);
            }
        }
        else
        {
            const int VAR15 = VAR2->VAR16 + VAR2->VAR17 * VAR2->VAR18 - VAR2->VAR18;
            VAR8 -= 16 * VAR2->VAR22[VAR5];
            if (VAR2->VAR17 == 0 || VAR2->VAR19 == VAR11[VAR15] || VAR5 == 2 || VAR5 == 3)
            {
                for (VAR7 = 1; VAR7 < 8; VAR7++)
                    VAR4[VAR2->VAR20.VAR21[VAR7]] += VAR8[VAR7 + 8];
            }
            else
            {
                for (VAR7 = 1; VAR7 < 8; VAR7++)
                    VAR4[VAR2->VAR20.VAR21[VAR7]] += FUN2(VAR8[VAR7 + 8] * VAR11[VAR15], VAR2->VAR19);
            }
        }
    }
    for (VAR7 = 1; VAR7 < 8; VAR7++)
        VAR9[VAR7] = VAR4[VAR2->VAR20.VAR21[VAR7 << 3]];
    for (VAR7 = 1; VAR7 < 8; VAR7++)
        VAR9[8 + VAR7] = VAR4[VAR2->VAR20.VAR21[VAR7]];
}