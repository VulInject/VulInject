static int FUN1(VAR1 *VAR2, int8_t VAR3, VAR4 *VAR5, int VAR6)
{
    struct CParam VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    int VAR10;
    if (!VAR3)
    {
        memset(VAR5, 0, VAR6 * sizeof(*VAR5));
        return 0;
    }
    if (VAR3 > FUN2(VAR11))
        return VAR12;
    VAR7 = VAR11[VAR3 - 1];
    for (VAR10 = 0; VAR10 < VAR6; VAR10++)
    {
        int VAR13 = FUN3(VAR9, VAR7.VAR14);
        if (VAR13 >= VAR7.VAR15 && FUN4(VAR9))
        {
            VAR13 |= 1 << VAR7.VAR14;
            if (VAR13 >= VAR7.VAR16)
            {
                int VAR17 = FUN5(VAR9, 1, 9);
                if (VAR17 == 9)
                {
                    int VAR18 = FUN6(VAR9, 3);
                    if (VAR18 > 0)
                    {
                        if (VAR18 == 7)
                        {
                            VAR18 += FUN6(VAR9, 5);
                            if (VAR18 > 29)
                                return VAR12;
                        }
                        VAR17 = FUN3(VAR9, VAR18) + 1;
                        VAR13 += VAR7.VAR17 * VAR17;
                    }
                    VAR13 += VAR7.VAR19;
                }
                else
                    VAR13 += VAR7.VAR17 * VAR17 - VAR7.VAR15;
            }
            else
                VAR13 -= VAR7.VAR15;
        }
        VAR5[VAR10] = (VAR13 >> 1) ^ -(VAR13 & 1);
    }
    return 0;
}