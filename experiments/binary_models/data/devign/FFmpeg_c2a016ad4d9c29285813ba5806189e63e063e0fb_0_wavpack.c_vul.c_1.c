static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    int VAR14;
    int VAR15 = 0;
    VAR8->VAR16 = 0;
    VAR8->VAR17 = 0;
    VAR8->VAR18 = 0;
    if (VAR8->VAR19)
    {
        VAR8->VAR20 = FUN2(VAR11);
        VAR11 += 4;
    }
    while (VAR12 > 0)
    {
        if (!VAR8->VAR21)
        {
            VAR14 = VAR12;
        }
        else
        {
            if (!VAR8->VAR19)
            {
                VAR14 = FUN2(VAR11) - 12;
                VAR11 += 4;
                VAR12 -= 4;
            }
            else
            {
                if (VAR12 < 12)
                    break;
                VAR14 = FUN2(VAR11 + 8) + 12;
            }
        }
        if (VAR14 < 0 || VAR14 > VAR12)
        {
            FUN3(VAR2, VAR22, "", VAR8->VAR16, VAR14, VAR12);
            return -1;
        }
        if ((VAR15 = FUN4(VAR2, VAR8->VAR16, VAR3, VAR4, VAR11, VAR14)) < 0)
            return -1;
        VAR8->VAR16++;
        VAR11 += VAR14;
        VAR12 -= VAR14;
    }
    *VAR4 = VAR15 * VAR2->VAR23;
    return VAR8->VAR17 > 0 ? 0 : VAR6->VAR13;
}