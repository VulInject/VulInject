int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8, const VAR7 *VAR9, int VAR10, VAR11 *VAR12, int VAR13, int VAR14, int VAR15, int VAR16, int VAR17)
{
    int VAR18, VAR19, VAR20, VAR21;
    VAR11 *VAR22 = VAR12 + VAR14;
    VAR12 += VAR13;
    for (;;)
    {
        VAR18 = FUN2(VAR4, VAR6->VAR23, VAR24, VAR25);
        if (VAR18 < 0)
            return -1;
        if (VAR18 == 1)
        {
            break;
        }
        else if (VAR18 == 0)
        {
            if (!VAR10)
            {
                VAR20 = FUN3(VAR4, VAR17);
                VAR19 = FUN3(VAR4, VAR16);
            }
            else
            {
                VAR20 = FUN4(VAR4);
                if (FUN5(VAR4))
                {
                    if (FUN5(VAR4))
                    {
                        if (FUN5(VAR4))
                        {
                            FUN6(VAR2, VAR26, "");
                            return -1;
                        }
                        else
                            VAR19 = FUN3(VAR4, VAR16) + 4;
                    }
                    else
                        VAR19 = FUN3(VAR4, 2) + 1;
                }
                else
                    VAR19 = 0;
            }
        }
        else
        {
            VAR19 = VAR9[VAR18];
            VAR20 = VAR8[VAR18];
        }
        VAR21 = FUN5(VAR4);
        if (!VAR21)
            VAR20 = -VAR20;
        VAR12 += VAR19;
        if (VAR12 >= VAR22)
        {
            FUN6(NULL, VAR26, "");
            break;
        }
        *VAR12++ = VAR20;
        if (VAR12 >= VAR22)
            break;
    }
    return 0;
}