static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14 = 0;
    if (VAR6->VAR15 == 0 || VAR9->VAR16)
    {
        return FUN2(VAR17);
        if (!VAR6->VAR18)
        {
            uint32_t VAR19 = 0;
            while (VAR19 != FUN3('', '', '', ''))
            {
                if (VAR9->VAR16)
                    return FUN2(VAR17);
                VAR19 = 256 * VAR19 + FUN4(VAR9);
                VAR13 = FUN5(VAR9);
                FUN5(VAR9);
                VAR11 = FUN5(VAR9);
                FUN5(VAR9);
                VAR12 = FUN5(VAR9);
                VAR14 = VAR12 - VAR11;
                VAR6->VAR20 = VAR13 - VAR12;
                VAR10 = FUN6(VAR9, VAR4, VAR14);
                if (VAR10 < 0)
                    return VAR10;
                VAR4->VAR21 = VAR6->VAR22;
                VAR6->VAR22 += VAR10;
            }
            else if (VAR6->VAR20 > 0)
            {
                VAR10 = FUN6(VAR9, VAR4, VAR6->VAR20);
                if (VAR10 < 0)
                    return VAR10;
                VAR4->VAR21 = VAR6->VAR23;
                VAR6->VAR23 += VAR10 / VAR6->VAR20;
                VAR6->VAR15--;
            }
            else
            {
                VAR10 = FUN2(VAR24);
                VAR6->VAR18 = !VAR6->VAR18;
                VAR4->VAR25 = VAR6->VAR18;
                return VAR10;