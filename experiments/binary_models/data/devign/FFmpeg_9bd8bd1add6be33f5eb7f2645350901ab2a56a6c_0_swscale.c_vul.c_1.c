static void FUN1(VAR1 *VAR2, VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    int VAR10[3];
    VAR3 *VAR11[3];
    VAR3 *VAR12[3];
    if (VAR2->VAR13 == VAR14)
    {
        VAR11[0] = VAR4[0];
        VAR11[1] = VAR4[2];
        VAR11[2] = VAR4[1];
        VAR10[0] = VAR5[0];
        VAR10[1] = VAR5[2];
        VAR10[2] = VAR5[1];
    }
    else if (VAR2->VAR13 == VAR15)
    {
        VAR11[0] = VAR4[0];
        VAR11[1] = VAR4[1];
        VAR11[2] = VAR4[2];
        VAR10[0] = VAR5[0];
        VAR10[1] = VAR5[1];
        VAR10[2] = VAR5[2];
    }
    else if (FUN2(VAR2->VAR13) || FUN3(VAR2->VAR13))
    {
        VAR11[0] = VAR4[0];
        VAR11[1] = VAR11[2] = NULL;
        VAR10[0] = VAR5[0];
        VAR10[1] = VAR10[2] = 0;
    }
    if (VAR2->VAR16 == VAR14)
    {
        VAR12[0] = VAR8[0];
        VAR12[1] = VAR8[2];
        VAR12[2] = VAR8[1];
    }
    else
    {
        VAR12[0] = VAR8[0];
        VAR12[1] = VAR8[1];
        VAR12[2] = VAR8[2];
    }
    if (FUN2(VAR2->VAR13))
    {
        if (VAR9[0] == VAR10[0])
            memcpy(VAR12[0] + VAR9[0] * VAR6, VAR11[0], VAR7 * VAR9[0]);
        else
        {
            int VAR17;
            VAR3 *VAR18 = VAR11[0];
            VAR3 *VAR19 = VAR12[0] + VAR9[0] * VAR6;
            int VAR20 = 0;
            while (VAR20 + VAR2->VAR21 <= VAR9[0] && VAR20 + VAR2->VAR21 <= VAR10[0])
                VAR20 += VAR2->VAR21;
            FUN4(VAR20 != 0);
            for (VAR17 = 0; VAR17 < VAR7; VAR17++)
            {
                memcpy(VAR19, VAR18, VAR20);
                VAR18 += VAR10[0];
                VAR19 += VAR9[0];
            }
        }
    }
    else
    {
        int VAR22;
        for (VAR22 = 0; VAR22 < 3; VAR22++)
        {
            int VAR20 = VAR22 == 0 ? VAR2->VAR21 : ((VAR2->VAR21 + 1) >> 1);
            int VAR23 = VAR22 == 0 ? VAR6 : ((VAR6 + 1) >> 1);
            int VAR24 = VAR22 == 0 ? VAR7 : ((VAR7 + 1) >> 1);
            if (VAR9[VAR22] == VAR10[VAR22])
                memcpy(VAR12[VAR22] + VAR9[VAR22] * VAR23, VAR11[VAR22], VAR24 * VAR9[VAR22]);
            else
            {
                int VAR17;
                VAR3 *VAR18 = VAR11[VAR22];
                VAR3 *VAR19 = VAR12[VAR22] + VAR9[VAR22] * VAR23;
                for (VAR17 = 0; VAR17 < VAR24; VAR17++)
                {
                    memcpy(VAR19, VAR18, VAR20);
                    VAR18 += VAR10[VAR22];
                    VAR19 += VAR9[VAR22];
                }
            }
        }
    }
}