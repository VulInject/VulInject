static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8 = 0;
    unsigned char VAR9;
    unsigned char VAR10, VAR11;
    unsigned char VAR12;
    int VAR13 = 0;
    int VAR14 = VAR4->VAR15[0];
    int VAR16 = (VAR2->VAR17 - 1) * VAR14;
    int VAR18 = VAR14 * VAR2->VAR17;
    int VAR19;
    while (VAR16 >= 0)
    {
        FUN2();
        VAR9 = VAR12;
        if (VAR9 == 0)
        {
            FUN2();
            if (VAR12 == 0)
            {
                VAR16 -= VAR14;
                VAR13 = 0;
            }
            else if (VAR12 == 1)
            {
                return 0;
            }
            else if (VAR12 == 2)
            {
                FUN2();
                VAR13 += VAR12;
                FUN2();
                VAR16 -= VAR12 * VAR14;
            }
            else
            {
                VAR11 = VAR12 & 1;
                VAR9 = (VAR12 + 1) / 2;
                VAR10 = VAR9 & 0x01;
                if (VAR16 + VAR13 + VAR12 > VAR18)
                {
                    FUN3(VAR2, VAR20, "");
                    return -1;
                }
                for (VAR19 = 0; VAR19 < VAR9; VAR19++)
                {
                    if (VAR13 >= VAR2->VAR21)
                        break;
                    FUN2();
                    VAR4->VAR6[0][VAR16 + VAR13] = VAR12 >> 4;
                    VAR13++;
                    if (VAR19 + 1 == VAR9 && VAR11)
                        break;
                    if (VAR13 >= VAR2->VAR21)
                        break;
                    VAR4->VAR6[0][VAR16 + VAR13] = VAR12 & 0x0F;
                    VAR13++;
                }
                if (VAR10)
                    VAR8++;
            }
        }
        else
        {
            if (VAR16 + VAR13 + VAR12 > VAR18)
            {
                FUN3(VAR2, VAR20, "");
                return -1;
            }
            FUN2();
            for (VAR19 = 0; VAR19 < VAR9; VAR19++)
            {
                if (VAR13 >= VAR2->VAR21)
                    break;
                if ((VAR19 & 1) == 0)
                    VAR4->VAR6[0][VAR16 + VAR13] = VAR12 >> 4;
                else
                    VAR4->VAR6[0][VAR16 + VAR13] = VAR12 & 0x0F;
                VAR13++;
            }
        }
    }
    if (VAR8 < VAR7)
    {
        FUN3(VAR2, VAR20, "", VAR8, VAR7);
        return -1;
    }
    return 0;
}