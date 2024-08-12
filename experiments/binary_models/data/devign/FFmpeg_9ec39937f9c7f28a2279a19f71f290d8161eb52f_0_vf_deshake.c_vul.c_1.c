static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    int VAR11, VAR12;
    IntMotionVector VAR13 = {0, 0};
    int VAR14[128][128];
    int VAR15 = 0;
    int VAR16;
    int VAR17;
    double *VAR18 = FUN2(sizeof(*VAR18) * VAR6 * VAR7 / (16 * VAR2->VAR19));
    int VAR20 = 0, VAR21 = 0;
    double VAR22, VAR23;
    for (VAR11 = 0; VAR11 < VAR2->VAR24 * 2 + 1; VAR11++)
    {
        for (VAR12 = 0; VAR12 < VAR2->VAR25 * 2 + 1; VAR12++)
        {
            VAR14[VAR11][VAR12] = 0;
        }
    }
    VAR17 = 0;
    for (VAR12 = VAR2->VAR25; VAR12 < VAR7 - VAR2->VAR25 - (VAR2->VAR19 * 2); VAR12 += VAR2->VAR19 * 2)
    {
        for (VAR11 = VAR2->VAR24; VAR11 < VAR6 - VAR2->VAR24 - 16; VAR11 += 16)
        {
            VAR16 = FUN3(VAR5, VAR11, VAR12, VAR8, VAR2->VAR19);
            if (VAR16 > VAR2->VAR16)
            {
                FUN4(VAR2, VAR4, VAR5, VAR11, VAR12, VAR8, &VAR13);
                if (VAR13.VAR11 != -1 && VAR13.VAR12 != -1)
                {
                    VAR14[VAR13.VAR11 + VAR2->VAR24][VAR13.VAR12 + VAR2->VAR25] += 1;
                    if (VAR11 > VAR2->VAR24 && VAR12 > VAR2->VAR25)
                        VAR18[VAR17++] = FUN5(VAR11, VAR12, 0, 0, &VAR13);
                    VAR20 += VAR13.VAR11;
                    VAR21 += VAR13.VAR12;
                }
            }
        }
    }
    VAR17 = FUN6(1, VAR17);
    VAR20 /= VAR17;
    VAR21 /= VAR17;
    VAR10->VAR26 = FUN7(VAR18, VAR17);
    if (VAR10->VAR26 < 0.001)
        VAR10->VAR26 = 0;
    for (VAR12 = VAR2->VAR25 * 2; VAR12 >= 0; VAR12--)
    {
        for (VAR11 = 0; VAR11 < VAR2->VAR24 * 2 + 1; VAR11++)
        {
            if (VAR14[VAR11][VAR12] > VAR15)
            {
                VAR10->VAR27.VAR11 = VAR11 - VAR2->VAR24;
                VAR10->VAR27.VAR12 = VAR12 - VAR2->VAR25;
                VAR15 = VAR14[VAR11][VAR12];
            }
        }
    }
    VAR22 = (VAR20 - VAR6 / 2);
    VAR23 = (VAR21 - VAR7 / 2);
    VAR10->VAR27.VAR11 += (FUN8(VAR10->VAR26) - 1) * VAR22 - FUN9(VAR10->VAR26) * VAR23;
    VAR10->VAR27.VAR12 += FUN9(VAR10->VAR26) * VAR22 + (FUN8(VAR10->VAR26) - 1) * VAR23;
    VAR10->VAR27.VAR11 = FUN10(VAR10->VAR27.VAR11, -VAR2->VAR24 * 2, VAR2->VAR24 * 2);
    VAR10->VAR27.VAR12 = FUN10(VAR10->VAR27.VAR12, -VAR2->VAR25 * 2, VAR2->VAR25 * 2);
    VAR10->VAR26 = FUN10(VAR10->VAR26, -0.1, 0.1);
    FUN11(VAR18);
}