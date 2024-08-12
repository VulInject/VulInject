static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    int VAR11 = VAR6->VAR12;
    VAR13 **VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    int VAR18, VAR19, VAR20, VAR21, VAR22;
    int VAR23 = (VAR2->VAR24 == VAR25);
    VAR8->VAR26 = 3 * (VAR11 << (1 - VAR23)) / VAR2->VAR27;
    if ((VAR22 = FUN2(VAR2, VAR8, 0)) < 0)
        return VAR22;
    VAR14 = (VAR13 **)VAR8->VAR28;
    for (VAR18 = 0; VAR18 < VAR2->VAR27; VAR18++)
    {
        VAR13 *VAR29 = VAR14[VAR18];
        for (VAR19 = 0; VAR19 < VAR11 / (VAR2->VAR27 << VAR23); VAR19++)
            for (VAR20 = 0; VAR20 < (1 << VAR23); VAR20++)
            {
                uint8_t VAR30 = VAR10[(VAR18 << VAR23) + (VAR19 * VAR2->VAR27 << VAR23) + VAR20];
                uint8_t VAR31[2][3] = {{VAR30 >> 5, (VAR30 >> 3) & 3, VAR30 & 7}, {VAR30 & 7, (VAR30 >> 3) & 3, VAR30 >> 5}};
                for (VAR21 = 0; VAR21 < 3; VAR21++)
                {
                    if (VAR23)
                        FUN3(&VAR16->VAR32[VAR18], VAR29, VAR31[1][VAR21], VAR21);
                    else
                        FUN4(&VAR16->VAR32[VAR18], VAR29, VAR31[0][VAR21], VAR21);
                    VAR29 += 1 << (1 - VAR23);
                    *VAR4 = 1;
                    return VAR11