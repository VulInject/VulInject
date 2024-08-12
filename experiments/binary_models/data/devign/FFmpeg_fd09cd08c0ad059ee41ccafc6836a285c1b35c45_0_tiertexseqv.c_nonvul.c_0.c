static int FUN1(VAR1 *VAR2, const unsigned char *VAR3, int VAR4)
{
    const unsigned char *VAR5 = VAR3 + VAR4;
    GetBitContext VAR6;
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    unsigned char VAR13[3];
    unsigned char *VAR14;
    VAR15 *VAR16;
    VAR7 = *VAR3++;
    if (VAR7 & 1)
    {
        VAR16 = (VAR15 *)VAR2->VAR17.VAR3[1];
        if (VAR5 - VAR3 < 256 * 3)
            return VAR18;
        for (VAR8 = 0; VAR8 < 256; VAR8++)
        {
            for (VAR9 = 0; VAR9 < 3; VAR9++, VAR3++)
                VAR13[VAR9] = (*VAR3 << 2) | (*VAR3 >> 4);
            VAR16[VAR8] = 0xFF << 24 | FUN2(VAR13);
        }
        VAR2->VAR17.VAR19 = 1;
    }
    if (VAR7 & 2)
    {
        if (VAR5 - VAR3 < 128)
            return VAR18;
        FUN3(&VAR6, VAR3, 128 * 8);
        VAR3 += 128;
        for (VAR11 = 0; VAR11 < 128; VAR11 += 8)
            for (VAR10 = 0; VAR10 < 256; VAR10 += 8)
            {
                VAR14 = &VAR2->VAR17.VAR3[0][VAR11 * VAR2->VAR17.VAR20[0] + VAR10];
                VAR12 = FUN4(&VAR6, 2);
                switch (VAR12)
                {
                case 1:
                    VAR3 = FUN5(VAR2, VAR3, VAR5, VAR14);
                    break;
                case 2:
                    VAR3 = FUN6(VAR2, VAR3, VAR5, VAR14);
                    break;
                case 3:
                    VAR3 = FUN7(VAR2, VAR3, VAR5, VAR14);
                    break;
                }
                if (!VAR3)
                    return VAR18;
            }
    }
    return 0;
}