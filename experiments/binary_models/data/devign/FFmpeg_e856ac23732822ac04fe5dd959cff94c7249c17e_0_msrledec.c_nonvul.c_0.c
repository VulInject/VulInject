static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    unsigned char VAR7;
    unsigned char VAR8, VAR9;
    unsigned char VAR10;
    int VAR11 = 0;
    int VAR12 = VAR2->VAR13 - 1;
    int VAR14;
    while (VAR12 >= 0 && VAR11 <= VAR2->VAR15)
    {
        if (FUN2(VAR6) <= 0)
        {
            FUN3(VAR2, VAR16, "", VAR2->VAR15 - VAR11, VAR12);
            return VAR17;
        }
        VAR7 = VAR10 = FUN4(VAR6);
        if (VAR7 == 0)
        {
            VAR10 = FUN5(VAR6);
            if (VAR10 == 0)
            {
                VAR12--;
                VAR11 = 0;
            }
            else if (VAR10 == 1)
            {
                return 0;
            }
            else if (VAR10 == 2)
            {
                VAR10 = FUN5(VAR6);
                VAR11 += VAR10;
                VAR10 = FUN5(VAR6);
                VAR12 -= VAR10;
            }
            else
            {
                VAR9 = VAR10 & 1;
                VAR7 = (VAR10 + 1) / 2;
                VAR8 = VAR7 & 0x01;
                if (VAR11 + 2 * VAR7 - VAR9 > VAR2->VAR15 || FUN2(VAR6) < VAR7)
                {
                    FUN3(VAR2, VAR16, "");
                    return VAR17;
                }
                for (VAR14 = 0; VAR14 < VAR7; VAR14++)
                {
                    if (VAR11 >= VAR2->VAR15)
                        break;
                    VAR10 = FUN4(VAR6);
                    VAR4->VAR18[0][VAR12 * VAR4->VAR19[0] + VAR11] = VAR10 >> 4;
                    VAR11++;
                    if (VAR14 + 1 == VAR7 && VAR9)
                        break;
                    if (VAR11 >= VAR2->VAR15)
                        break;
                    VAR4->VAR18[0][VAR12 * VAR4->VAR19[0] + VAR11] = VAR10 & 0x0F;
                    VAR11++;
                }
                if (VAR8)
                    FUN6(VAR6, 1);
            }
        }
        else
        {
            if (VAR11 + VAR7 > VAR2->VAR15 + 1)
            {
                FUN3(VAR2, VAR16, "", VAR11, VAR7, VAR2->VAR15);
                return VAR17;
            }
            VAR10 = FUN5(VAR6);
            for (VAR14 = 0; VAR14 < VAR7; VAR14++)
            {
                if (VAR11 >= VAR2->VAR15)
                    break;
                if ((VAR14 & 1) == 0)
                    VAR4->VAR18[0][VAR12 * VAR4->VAR19[0] + VAR11] = VAR10 >> 4;
                else
                    VAR4->VAR18[0][VAR12 * VAR4->VAR19[0] + VAR11] = VAR10 & 0x0F;
                VAR11++;
            }
        }
    }
    if (FUN2(VAR6))
    {
        FUN3(VAR2, VAR16, "", FUN2(VAR6));
        return VAR17;
    }
    return 0;
}