static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    int VAR9, VAR10, VAR11;
    VAR12 *VAR13[4];
    if (VAR6->VAR14)
    {
        for (VAR11 = 0; VAR11 < VAR4->VAR15; VAR11++)
        {
            VAR13[0] = VAR4->VAR16[0] + VAR11 * VAR4->VAR17[0];
            VAR13[3] = VAR4->VAR16[3] + VAR11 * VAR4->VAR17[3];
            for (VAR9 = 1; VAR9 < 3; VAR9++)
                VAR13[VAR9] = VAR4->VAR16[VAR9] + VAR4->VAR17[VAR9] * (VAR11 >> VAR6->VAR18);
            if (VAR6->VAR19)
            {
                for (VAR10 = 0; VAR10 < VAR4->VAR20; VAR10++)
                    if (FUN2(VAR6, VAR10, VAR11))
                        VAR13[0][VAR10] = 0xff - VAR13[0][VAR10];
            }
            else
            {
                for (VAR10 = 0; VAR10 < VAR4->VAR20; VAR10++)
                {
                    if (FUN2(VAR6, VAR10, VAR11))
                    {
                        VAR13[0][VAR10] = VAR6->VAR21[VAR22];
                        VAR13[1][VAR10 >> VAR6->VAR23] = VAR6->VAR21[VAR24];
                        VAR13[2][VAR10 >> VAR6->VAR23] = VAR6->VAR21[VAR25];
                        VAR13[3][VAR10] = VAR6->VAR21[VAR26];
                    }
                }
            }
        }
    }
    else
    {
        for (VAR11 = 0; VAR11 < VAR4->VAR15; VAR11++)
        {
            VAR13[0] = VAR4->VAR16[0] + VAR11 * VAR4->VAR17[0];
            for (VAR9 = 1; VAR9 < 3; VAR9++)
                VAR13[VAR9] = VAR4->VAR16[VAR9] + VAR4->VAR17[VAR9] * (VAR11 >> VAR6->VAR18);
            if (VAR6->VAR19)
            {
                for (VAR10 = 0; VAR10 < VAR4->VAR20; VAR10++)
                    if (FUN2(VAR6, VAR10, VAR11))
                        VAR13[0][VAR10] = 0xff - VAR13[0][VAR10];
            }
            else
            {
                for (VAR10 = 0; VAR10 < VAR4->VAR20; VAR10++)
                {
                    double VAR27 = (double)VAR6->VAR21[VAR26] / 255;
                    if (FUN2(VAR6, VAR10, VAR11))
                    {
                        VAR13[0][VAR10] = (1 - VAR27) * VAR13[0][VAR10] + VAR27 * VAR6->VAR21[VAR22];
                        VAR13[1][VAR10 >> VAR6->VAR23] = (1 - VAR27) * VAR13[1][VAR10 >> VAR6->VAR23] + VAR27 * VAR6->VAR21[VAR24];
                        VAR13[2][VAR10 >> VAR6->VAR23] = (1 - VAR27) * VAR13[2][VAR10 >> VAR6->VAR23] + VAR27 * VAR6->VAR21[VAR25];
                    }
                }
            }
        }
    }
    return FUN3(VAR2->VAR7->VAR28[0], VAR4);
}