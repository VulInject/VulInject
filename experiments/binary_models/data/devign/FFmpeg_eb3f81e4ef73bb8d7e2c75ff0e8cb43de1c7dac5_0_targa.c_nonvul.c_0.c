static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, VAR5 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    int VAR13, VAR14, VAR15;
    int VAR16 = (VAR12 + 1) >> 3;
    int VAR17, VAR18;
    int VAR19;
    const VAR5 *VAR20 = VAR6 + VAR7;
    VAR19 = VAR11 - VAR9 * VAR16;
    VAR14 = VAR15 = 0;
    while (VAR15 < VAR10)
    {
        FUN2(VAR6, VAR20, 1, "");
        VAR17 = *VAR6++;
        VAR18 = (VAR17 & 0x7F) + 1;
        VAR17 &= 0x80;
        if (VAR14 + VAR18 > (VAR10 - VAR15) * VAR9)
        {
            FUN3(VAR2, VAR21, "", VAR14, VAR15, VAR18);
            return -1;
        }
        if (VAR17)
        {
            FUN2(VAR6, VAR20, VAR16, "");
        }
        else
        {
            FUN2(VAR6, VAR20, VAR18 * VAR16, "");
        }
        for (VAR13 = 0; VAR13 < VAR18; VAR13++)
        {
            switch (VAR16)
            {
            case 1:
                *VAR8 = *VAR6;
                break;
            case 2:
                FUN4(VAR8, FUN5(VAR6));
                break;
            case 3:
                VAR8[0] = VAR6[0];
                VAR8[1] = VAR6[1];
                VAR8[2] = VAR6[2];
                break;
            case 4:
                FUN6(VAR8, FUN7(VAR6));
                break;
            }
            VAR8 += VAR16;
            if (!VAR17)
                VAR6 += VAR16;
            VAR14++;
            if (VAR14 == VAR9)
            {
                VAR14 = 0;
                VAR15++;
                VAR8 += VAR19;
            }
        }
        if (VAR17)
            VAR6 += VAR16;
    }
    return VAR7;
}