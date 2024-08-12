static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    GetBitContext VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    int VAR8;
    int VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    uint32_t VAR12;
    for (VAR8 = 0; VAR8 < VAR13; VAR8 += 2)
    {
        VAR2->VAR14[VAR8] = VAR4[VAR8 + 1];
        VAR2->VAR14[VAR8 + 1] = VAR4[VAR8];
    }
    FUN2(&VAR5, VAR2->VAR14, VAR13 * 8);
    for (VAR8 = 0; VAR8 < 2; VAR8++)
        VAR7->VAR15[VAR8] = FUN3(&VAR5, 5);
    for (; VAR8 < 8; VAR8++)
        VAR7->VAR15[VAR8] = FUN3(&VAR5, 4);
    for (; VAR8 < 14; VAR8++)
        VAR7->VAR15[VAR8] = FUN3(&VAR5, 3);
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        VAR7->VAR16[VAR9] = FUN3(&VAR5, 5);
        VAR7->VAR17[VAR9].VAR18 = FUN4(&VAR5, 31);
        VAR7->VAR17[VAR9].VAR19 = FUN3(&VAR5, 6);
        for (VAR8 = 0; VAR8 < 7; VAR8++)
            VAR7->VAR17[VAR9].VAR20[VAR8] = FUN3(&VAR5, 3);
    }
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        unsigned int VAR21[VAR22] = {72, 2556, 59640, 1028790, 13991544, 156238908, 1473109704, 3379081753};
        unsigned int VAR18 = VAR7->VAR17[VAR9].VAR18;
        int VAR23 = 6;
        if (VAR18 < VAR21[VAR22 - 1])
        {
            if (VAR2->VAR24)
            {
                int VAR25, VAR26;
                VAR25 = VAR22 - 1;
                VAR26 = 71;
                VAR18 = VAR7->VAR17[VAR9].VAR18;
                for (VAR8 = 0; VAR8 < 7; VAR8++)
                {
                    for (; VAR18 < VAR27[VAR25][VAR26]; --VAR26)
                        ;
                    VAR18 -= VAR27[VAR25][VAR26];
                    VAR25--;
                    VAR7->VAR17[VAR9].VAR28[VAR8] = VAR26;
                }
            }
        }
        else
        {
            VAR2->VAR24 = 0;
            VAR7->VAR17[VAR9].VAR28[6] = 0;
            for (VAR8 = 71; VAR8 >= 0; VAR8--)
            {
                if (VAR21[VAR23] <= VAR18)
                {
                    VAR18 -= VAR21[VAR23];
                    VAR7->VAR17[VAR9].VAR28[6 - VAR23] = VAR8;
                    if (!VAR23)
                        break;
                    --VAR23;
                }
                --VAR21[0];
                if (VAR23)
                {
                    int VAR29;
                    for (VAR29 = 0; VAR29 < VAR23; VAR29++)
                        VAR21[VAR29 + 1] -= VAR21[VAR29];
                }
            }
        }
    }
    VAR10 = FUN3(&VAR5, 24);
    VAR7->VAR12[0] = (VAR10 % 151) + 36;
    VAR10 /= 151;
    for (VAR8 = 1; VAR8 < VAR30 - 1; VAR8++)
    {
        VAR7->VAR12[VAR8] = VAR10 % 48;
        VAR10 /= 48;
    }
    if (VAR10 > 47)
    {
        FUN5(VAR2->VAR31, VAR32, "");
        VAR10 = 0;
    }
    VAR7->VAR12[VAR8] = VAR10;
    VAR12 = VAR7->VAR12[0];
    for (VAR8 = 1; VAR8 < VAR30; VAR8++)
    {
        if (VAR12 > 162)
        {
            VAR7->VAR12[VAR8] += 162 - 23;
        }
        else
        {
            VAR11 = VAR12 - 23;
            if (VAR11 < 36)
                VAR11 = 36;
            VAR7->VAR12[VAR8] += VAR11;
        }
        VAR12 = VAR7->VAR12[VAR8];
    }
}