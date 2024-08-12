void FUN1(VAR1 *VAR2)
{
    float *VAR3 = VAR2->VAR4;
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    float *VAR18, VAR19[VAR20 + 1];
    for (VAR7 = 0; VAR7 < VAR2->VAR21.VAR22; VAR7++)
    {
        VAR11 = VAR2->VAR21.VAR23;
        for (VAR8 = 0; VAR8 < VAR6->VAR24[VAR7]; VAR8++)
        {
            VAR12 = VAR11;
            VAR11 = FUN2(0, VAR12 - VAR6->VAR25[VAR7][VAR8]);
            VAR13 = VAR6->VAR13[VAR7][VAR8];
            VAR18 = VAR6->VAR3[VAR7][VAR8];
            if (!VAR13)
                continue;
            VAR14 = VAR2->VAR21.VAR26[VAR11];
            VAR15 = VAR2->VAR21.VAR26[VAR12];
            if ((VAR16 = VAR15 - VAR14) <= 0)
                continue;
            if (VAR6->VAR27[VAR7][VAR8])
            {
                VAR17 = -1;
                VAR14 = VAR15 - 1;
            }
            else
            {
                VAR17 = 1;
            }
            VAR14 += VAR7 * 128;
            if (!VAR2->VAR21.VAR28.VAR29)
            {
                for (VAR9 = 0; VAR9 < VAR16; VAR9++, VAR14 += VAR17)
                    for (VAR10 = 1; VAR10 <= FUN3(VAR9, VAR13); VAR10++)
                        VAR3[VAR14] += VAR3[VAR14 - VAR10 * VAR17] * VAR18[VAR10 - 1];
            }
            else
            {
                for (VAR9 = 0; VAR9 < VAR16; VAR9++, VAR14 += VAR17)
                {
                    VAR19[0] = VAR3[VAR14];
                    for (VAR10 = 1; VAR10 <= FUN3(VAR9, VAR13); VAR10++)
                        VAR3[VAR14] += VAR19[VAR10] * VAR18[VAR10 - 1];
                    for (VAR10 = VAR13; VAR10 > 0; VAR10--)
                        VAR19[VAR10] = VAR19[VAR10 - 1];
                }
            }
        }
    }
}