static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR4->VAR11[0];
    int VAR12, VAR13;
    for (VAR12 = 0; VAR12 < VAR2->VAR14; VAR12++)
    {
        int VAR15, VAR16, VAR17, VAR18;
        VAR9 *VAR19 = VAR10;
        int VAR20 = 0;
        if (VAR7 / 4 > 200)
            VAR15 = VAR16 = FUN2(VAR6);
        else
            VAR15 = VAR16 = FUN3(VAR6);
        if (FUN4(VAR6) < VAR15)
            return VAR21;
        while (VAR16 > 0)
        {
            VAR17 = FUN3(VAR6);
            if (VAR17 & 0x80)
            {
                VAR18 = FUN3(VAR6);
                for (VAR13 = 0; VAR13 < 257 - VAR17; VAR13++)
                {
                    if (VAR20 < VAR7)
                        VAR19[VAR20++] = (VAR18 & 0xC0) >> 6;
                    if (VAR20 < VAR7)
                        VAR19[VAR20++] = (VAR18 & 0x30) >> 4;
                    if (VAR20 < VAR7)
                        VAR19[VAR20++] = (VAR18 & 0x0C) >> 2;
                    if (VAR20 < VAR7)
                        VAR19[VAR20++] = (VAR18 & 0x03);
                }
                VAR16 -= 2;
            }
            else
            {
                for (VAR13 = 0; VAR13 < VAR17 + 1; VAR13++)
                {
                    VAR18 = FUN3(VAR6);
                    if (VAR20 < VAR7)
                        VAR19[VAR20++] = (VAR18 & 0xC0) >> 6;
                    if (VAR20 < VAR7)
                        VAR19[VAR20++] = (VAR18 & 0x30) >> 4;
                    if (VAR20 < VAR7)
                        VAR19[VAR20++] = (VAR18 & 0x0C) >> 2;
                    if (VAR20 < VAR7)
                        VAR19[VAR20++] = (VAR18 & 0x03);
                }
                VAR16 -= 1 + (VAR17 + 1);
            }
        }
        VAR10 += VAR4->VAR22[0];
    }
    return 0;
}