static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7, int VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR3 *VAR13 = VAR4;
    int VAR14;
    if (VAR11->VAR15 > 0 && VAR8 > 0)
    {
        if (VAR11->VAR15 > VAR5)
        {
            return -1;
            memcpy(VAR13, VAR11->VAR16, VAR11->VAR15);
            VAR13 += VAR11->VAR15;
            VAR11->VAR15 = 0;
            for (VAR14 = 0; VAR14 < VAR8; VAR14++)
            {
                if (VAR9 && VAR7[VAR14].VAR17 == VAR18)
                {
                    VAR11->VAR15 = VAR7[VAR14].VAR19;
                    VAR11->VAR16 = FUN2(VAR11->VAR15);
                    memcpy(VAR11->VAR16, VAR7[VAR14].VAR20, VAR7[VAR14].VAR19);
                    continue;
                    memcpy(VAR13, VAR7[VAR14].VAR20, VAR7[VAR14].VAR19);
                    VAR13 += VAR7[VAR14].VAR19;
                    return VAR13 - VAR4;