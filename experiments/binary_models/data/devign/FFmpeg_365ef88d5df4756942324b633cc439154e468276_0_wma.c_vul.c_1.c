int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const float *VAR7, const VAR8 *VAR9, int VAR10, VAR11 *VAR12, int VAR13, int VAR14, int VAR15, int VAR16, int VAR17)
{
    int VAR18, VAR19, VAR20;
    const VAR21 *VAR22 = (const VAR21 *)VAR7;
    VAR21 *VAR23 = (VAR21 *)VAR12;
    const unsigned int VAR24 = VAR15 - 1;
    for (; VAR13 < VAR14; VAR13++)
    {
        VAR18 = FUN2(VAR4, VAR6->VAR25, VAR26, VAR27);
        if (VAR18 > 1)
        {
            VAR13 += VAR9[VAR18];
            VAR20 = FUN3(VAR4) - 1;
            VAR23[VAR13 & VAR24] = VAR22[VAR18] ^ VAR20 << 31;
        }
        else if (VAR18 == 1)
        {
            break;
        }
        else
        {
            if (!VAR10)
            {
                VAR19 = FUN4(VAR4, VAR17);
                VAR13 += FUN4(VAR4, VAR16);
            }
            else
            {
                VAR19 = FUN5(VAR4);
                if (FUN3(VAR4))
                {
                    if (FUN3(VAR4))
                    {
                        if (FUN3(VAR4))
                        {
                            FUN6(VAR2, VAR28, "");
                            return -1;
                        }
                        else
                            VAR13 += FUN4(VAR4, VAR16) + 4;
                    }
                    else
                        VAR13 += FUN4(VAR4, 2) + 1;
                }
            }
            VAR20 = FUN3(VAR4) - 1;
            VAR12[VAR13 & VAR24] = (VAR19 ^ VAR20) - VAR20;
        }
    }
    if (VAR13 > VAR14)
    {
        FUN6(VAR2, VAR28, "");
        return -1;
    }
    return 0;
}