static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = FUN2(&VAR2->VAR6), VAR7;
    GetByteContext VAR8;
    if (FUN3(&VAR2->VAR6) < VAR5)
        return VAR9;
    FUN4(&VAR8, VAR2->VAR6.VAR10 + VAR5, FUN3(&VAR2->VAR6) - VAR5);
    while (VAR2->VAR6.VAR10 < VAR8.VAR11)
    {
        int VAR12, VAR13;
        int VAR14 = FUN5(&VAR2->VAR6);
        int VAR15 = FUN5(&VAR2->VAR6) + ((VAR14 & 0x80) << 1);
        VAR14 &= 0x7F;
        if (VAR14 == 0)
        {
            VAR7 += VAR15;
            continue;
        }
        if (VAR7 + VAR4 >= VAR2->VAR16->VAR17)
            return 0;
        for (VAR12 = 0; VAR12 < VAR14; VAR12++)
        {
            int VAR18 = FUN5(&VAR2->VAR6);
            for (VAR13 = 0; VAR13 < 8; VAR13++)
            {
                int VAR19 = (VAR18 >> (7 - VAR13)) & 1;
                if (VAR19)
                {
                    int VAR20 = FUN5(&VAR8);
                    VAR2->VAR21.VAR22[0][VAR7 * VAR2->VAR21.VAR23[0] + VAR15] = VAR20;
                    if (VAR3)
                        VAR2->VAR21.VAR22[0][VAR7 * VAR2->VAR21.VAR23[0] + VAR15 + 1] = VAR20;
                    if (VAR4)
                    {
                        VAR2->VAR21.VAR22[0][(VAR7 + 1) * VAR2->VAR21.VAR23[0] + VAR15] = VAR20;
                        if (VAR3)
                            VAR2->VAR21.VAR22[0][(VAR7 + 1) * VAR2->VAR21.VAR23[0] + VAR15 + 1] = VAR20;
                    }
                }
                VAR15 += 1 + VAR3;
            }
        }
        VAR7 += 1 + VAR4;
    }
    return 0;
}