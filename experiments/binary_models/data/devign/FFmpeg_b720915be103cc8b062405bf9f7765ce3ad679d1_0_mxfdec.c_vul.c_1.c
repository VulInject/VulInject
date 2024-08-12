static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, VAR6 *VAR7, VAR6 *VAR8, int VAR9)
{
    int VAR10;
    int VAR11 = 0;
    for (VAR10 = 0; VAR10 < VAR4->VAR12; VAR10++)
    {
        VAR13 *VAR14 = VAR4->VAR15[VAR10];
        VAR5 = FUN2(VAR5, VAR14->VAR16);
        if (VAR5 < VAR14->VAR16 + VAR14->VAR17)
        {
            int64_t VAR18 = VAR5 - VAR14->VAR16;
            if (VAR14->VAR19)
                VAR11 += VAR14->VAR19 * VAR18;
            else if (VAR14->VAR20)
            {
                if (VAR14->VAR20 == 2 * VAR14->VAR17 + 1)
                    VAR18 *= 2;
                if (VAR18 < 0 || VAR18 > VAR14->VAR20)
                {
                    FUN3(VAR2->VAR21, VAR22, "" VAR23 "", VAR4->VAR24, VAR14->VAR16);
                    return VAR25;
                }
                VAR11 = VAR14->VAR26[VAR18];
            }
            else
            {
                FUN3(VAR2->VAR21, VAR22, "" VAR23 "", VAR4->VAR24, VAR14->VAR16);
                return VAR25;
            }
            if (VAR7)
                *VAR7 = VAR5;
            return FUN4(VAR2, VAR4->VAR27, VAR11, VAR8);
        }
        else
        {
            VAR11 += VAR14->VAR19 * VAR14->VAR17;
        }
    }
    if (VAR9)
        FUN3(VAR2->VAR21, VAR22, "" VAR23 "", VAR5, VAR4->VAR24);
    return VAR25;
}