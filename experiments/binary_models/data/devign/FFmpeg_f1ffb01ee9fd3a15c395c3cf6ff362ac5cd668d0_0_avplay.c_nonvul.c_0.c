static int FUN1(VAR1 *VAR2, short *VAR3, int VAR4, double VAR5)
{
    int VAR6, VAR7;
    double VAR8;
    VAR6 = VAR2->VAR9 * FUN2(VAR2->VAR10);
    VAR7 = VAR4;
    if (((VAR2->VAR11 == VAR12 && VAR2->VAR13) || VAR2->VAR11 == VAR14))
    {
        double VAR15, VAR16;
        int VAR17, VAR18, VAR19, VAR20;
        VAR8 = FUN3(VAR2);
        VAR15 = FUN4(VAR2) - VAR8;
        if (VAR15 < VAR21)
        {
            VAR2->VAR22 = VAR15 + VAR2->VAR23 * VAR2->VAR22;
            if (VAR2->VAR24 < VAR25)
            {
                VAR2->VAR24++;
            }
            else
            {
                VAR16 = VAR2->VAR22 * (1.0 - VAR2->VAR23);
                if (FUN5(VAR16) >= VAR2->VAR26)
                {
                    VAR17 = VAR7 + ((int)(VAR15 * VAR2->VAR27->VAR28->VAR29) * VAR6);
                    VAR20 = VAR7 / VAR6;
                    VAR18 = ((VAR20 * (100 - VAR30)) / 100) * VAR6;
                    VAR19 = ((VAR20 * (100 + VAR30)) / 100) * VAR6;
                    if (VAR17 < VAR18)
                        VAR17 = VAR18;
                    else if (VAR17 > VAR19)
                        VAR17 = VAR19;
                    if (VAR17 < VAR7)
                    {
                        VAR7 = VAR17;
                    }
                    else if (VAR17 > VAR7)
                    {
                        VAR31 *VAR32, *VAR33;
                        int VAR34;
                        VAR34 = (VAR7 - VAR17);
                        VAR32 = (VAR31 *)VAR3 + VAR7 - VAR6;
                        VAR33 = VAR32 + VAR6;
                        while (VAR34 > 0)
                        {
                            memcpy(VAR33, VAR32, VAR6);
                            VAR33 += VAR6;
                            VAR34 -= VAR6;
                        }
                        VAR7 = VAR17;
                    }
                }
                FUN6(NULL, "", VAR15, VAR16, VAR7 - VAR4, VAR2->VAR35, VAR2->VAR36, VAR2->VAR26);
            }
        }
        else
        {
            VAR2->VAR24 = 0;
            VAR2->VAR22 = 0;
        }
    }
    return VAR7;
}