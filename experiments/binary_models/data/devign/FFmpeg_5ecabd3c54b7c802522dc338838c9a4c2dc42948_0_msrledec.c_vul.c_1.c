static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    unsigned char VAR7;
    unsigned char VAR8, VAR9;
    unsigned char VAR10;
    unsigned int VAR11 = 0;
    int VAR12 = VAR4->VAR13[0];
    int VAR14 = (VAR2->VAR15 - 1) * VAR12;
    int VAR16 = VAR12 * VAR2->VAR15;
    int VAR17;
    while (VAR14 >= 0)
    {
        if (FUN2(VAR6) <= 0)
        {
            FUN3(VAR2, VAR18, "", VAR14);
            return VAR19;
        }
        VAR7 = VAR10 = FUN4(VAR6);
        if (VAR7 == 0)
        {
            VAR10 = FUN5(VAR6);
            if (VAR10 == 0)
            {
                VAR14 -= VAR12;
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
                VAR14 -= VAR10 * VAR12;
            }
            else
            {
                VAR9 = VAR10 & 1;
                VAR7 = (VAR10 + 1) / 2;
                VAR8 = VAR7 & 0x01;
                if (VAR14 + VAR11 + VAR10 > VAR16 || FUN2(VAR6) < VAR7)
                {
                    FUN3(VAR2, VAR18, "");
                    return VAR19;
                }
                for (VAR17 = 0; VAR17 < VAR7; VAR17++)
                {
                    if (VAR11 >= VAR2->VAR20)
                        break;
                    VAR10 = FUN4(VAR6);
                    VAR4->VAR21[0][VAR14 + VAR11] = VAR10 >> 4;
                    VAR11++;
                    if (VAR17 + 1 == VAR7 && VAR9)
                        break;
                    if (VAR11 >= VAR2->VAR20)
                        break;
                    VAR4->VAR21[0][VAR14 + VAR11] = VAR10 & 0x0F;
                    VAR11++;
                }
                if (VAR8)
                    FUN6(VAR6, 1);
            }
        }
        else
        {
            if (VAR14 + VAR11 + VAR10 > VAR16)
            {
                FUN3(VAR2, VAR18, "");
                return VAR19;
            }
            VAR10 = FUN5(VAR6);
            for (VAR17 = 0; VAR17 < VAR7; VAR17++)
            {
                if (VAR11 >= VAR2->VAR20)
                    break;
                if ((VAR17 & 1) == 0)
                    VAR4->VAR21[0][VAR14 + VAR11] = VAR10 >> 4;
                else
                    VAR4->VAR21[0][VAR14 + VAR11] = VAR10 & 0x0F;
                VAR11++;
            }
        }
    }
    if (FUN2(VAR6))
    {
        FUN3(VAR2, VAR18, "", FUN2(VAR6));
        return VAR19;
    }
    return 0;
}