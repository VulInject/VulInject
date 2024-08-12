static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11 = 0;
    int VAR12;
    int VAR13 = 0;
    DCTELEM VAR14 = 0;
    int VAR15;
    int VAR16;
    int VAR17 = 0;
    int VAR18 = VAR2->VAR19[VAR8][VAR7];
    VAR20 *VAR21 = VAR2->VAR21[VAR8][VAR7];
    int *VAR22 = VAR2->VAR22[VAR8];
    VAR23 *VAR24 = VAR2->VAR24;
    FUN2(*VAR25)
    [2] = VAR6->VAR6;
    if (VAR18 < 0)
        FUN3(VAR2->VAR26, VAR27, "", VAR7);
    if (VAR9 > VAR18)
    {
        VAR17 = VAR16 = VAR18;
        VAR9 -= VAR18;
    }
    else
    {
        VAR17 = VAR16 = VAR9;
        VAR9 = 0;
    }
    if (VAR16)
        VAR21[VAR11++] = VAR16 << 2;
    while (VAR17 < VAR18 && FUN4(VAR4) > 0)
    {
        VAR12 = FUN5(VAR4, VAR25, 11, 3);
        if (VAR12 <= 6)
        {
            VAR9 = VAR28[VAR12];
            if (VAR29[VAR12])
                VAR9 += FUN6(VAR4, VAR29[VAR12]);
            if (VAR9 > VAR18 - VAR17)
            {
                VAR21[VAR11++] = FUN7(VAR18 - VAR17);
                VAR16 += VAR18 - VAR17;
                VAR9 -= VAR18 - VAR17;
                VAR17 = VAR18;
            }
            else
            {
                VAR21[VAR11++] = FUN7(VAR9);
                VAR16 += VAR9;
                VAR17 += VAR9;
                VAR9 = 0;
            }
        }
        else
        {
            VAR15 = VAR30[VAR12];
            if (VAR15)
                VAR15 = FUN6(VAR4, VAR15);
            VAR14 = VAR31[VAR12][VAR15];
            VAR13 = VAR32[VAR12];
            if (VAR33[VAR12])
                VAR13 += FUN6(VAR4, VAR33[VAR12]);
            if (VAR13)
            {
                VAR21[VAR11++] = FUN8(VAR14, VAR13);
            }
            else
            {
                if (!VAR7)
                    VAR24[VAR22[VAR17]].VAR34 = VAR14;
                VAR21[VAR11++] = FUN9(VAR14);
            }
            if (VAR7 + VAR13 > 64)
            {
                FUN3(VAR2->VAR26, VAR35, ""
                                               "",
                       VAR13, 64 - VAR7);
                VAR13 = 64 - VAR7;
            }
            for (VAR10 = VAR7 + 1; VAR10 <= VAR7 + VAR13; VAR10++)
                VAR2->VAR19[VAR8][VAR10]--;
            VAR17++;
        }
    }
    if (VAR16 > VAR2->VAR19[VAR8][VAR7])
        FUN3(VAR2->VAR26, VAR27, "");
    if (VAR16)
        for (VAR10 = VAR7 + 1; VAR10 < 64; VAR10++)
            VAR2->VAR19[VAR8][VAR10] -= VAR16;
    if (VAR8 < 2)
        VAR2->VAR21[VAR8 + 1][VAR7] = VAR21 + VAR11;
    else if (VAR7 < 63)
        VAR2->VAR21[0][VAR7 + 1] = VAR21 + VAR11;
    return VAR9;
}