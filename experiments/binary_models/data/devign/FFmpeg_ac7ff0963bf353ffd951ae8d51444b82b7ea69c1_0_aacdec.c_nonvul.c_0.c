static void FUN1(float VAR1[1024], VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    const int VAR7 = FUN2(VAR5->VAR8, VAR5->VAR9);
    int VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    float VAR21[VAR22];
    float VAR23[VAR22 + 1];
    for (VAR10 = 0; VAR10 < VAR5->VAR24; VAR10++)
    {
        VAR14 = VAR5->VAR25;
        for (VAR11 = 0; VAR11 < VAR3->VAR26[VAR10]; VAR11++)
        {
            VAR15 = VAR14;
            VAR14 = FUN3(0, VAR15 - VAR3->VAR27[VAR10][VAR11]);
            VAR16 = VAR3->VAR16[VAR10][VAR11];
            if (VAR16 == 0)
                continue;
            FUN4(VAR3->VAR1[VAR10][VAR11], VAR16, VAR21, 0, 0, 0);
            VAR17 = VAR5->VAR28[FUN2(VAR14, VAR7)];
            VAR18 = VAR5->VAR28[FUN2(VAR15, VAR7)];
            if ((VAR19 = VAR18 - VAR17) <= 0)
                continue;
            if (VAR3->VAR29[VAR10][VAR11])
            {
                VAR20 = -1;
                VAR17 = VAR18 - 1;
            }
            else
            {
                VAR20 = 1;
            }
            VAR17 += VAR10 * 128;
            if (VAR6)
            {
                for (VAR12 = 0; VAR12 < VAR19; VAR12++, VAR17 += VAR20)
                    for (VAR13 = 1; VAR13 <= FUN2(VAR12, VAR16); VAR13++)
                        VAR1[VAR17] -= VAR1[VAR17 - VAR13 * VAR20] * VAR21[VAR13 - 1];
            }
            else
            {
                for (VAR12 = 0; VAR12 < VAR19; VAR12++, VAR17 += VAR20)
                {
                    VAR23[0] = VAR1[VAR17];
                    for (VAR13 = 1; VAR13 <= FUN2(VAR12, VAR16); VAR13++)
                        VAR1[VAR17] += VAR23[VAR13] * VAR21[VAR13 - 1];
                    for (VAR13 = VAR16; VAR13 > 0; VAR13--)
                        VAR23[VAR13] = VAR23[VAR13 - 1];
                }
            }
        }
    }
}