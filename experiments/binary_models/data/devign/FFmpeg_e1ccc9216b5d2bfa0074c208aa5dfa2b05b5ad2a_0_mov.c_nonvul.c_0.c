static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    int64_t VAR6 = 0;
    MOVAtom VAR7;
    int VAR8;
    if (VAR5.VAR9 < 0)
        VAR5.VAR9 = VAR10;
    while (VAR6 + 8 <= VAR5.VAR9 && !FUN2(VAR4))
    {
        int (*VAR11)(VAR1 *, VAR3 *, VAR12) = NULL;
        VAR7.VAR9 = VAR5.VAR9;
        VAR7.VAR13 = 0;
        if (VAR5.VAR9 >= 8)
        {
            VAR7.VAR9 = FUN3(VAR4);
            VAR7.VAR13 = FUN4(VAR4);
            VAR6 += 8;
            if (VAR7.VAR9 == 1)
            {
                VAR7.VAR9 = FUN5(VAR4) - 8;
                VAR6 += 8;
            }
        }
        FUN6(VAR2->VAR14, "" VAR15 "" VAR15 "" VAR15 "", VAR7.VAR13, (char *)&VAR7.VAR13, (char *)&VAR5.VAR13, VAR7.VAR9, VAR6, VAR5.VAR9);
        if (VAR7.VAR9 == 0)
        {
            VAR7.VAR9 = VAR5.VAR9 - VAR6 + 8;
        }
        VAR7.VAR9 -= 8;
        if (VAR7.VAR9 < 0)
            break;
        VAR7.VAR9 = FUN7(VAR7.VAR9, VAR5.VAR9 - VAR6);
        for (VAR8 = 0; VAR16[VAR8].VAR13; VAR8++)
            if (VAR16[VAR8].VAR13 == VAR7.VAR13)
            {
                VAR11 = VAR16[VAR8].VAR11;
                break;
            }
        if (!VAR11 && (VAR5.VAR13 == FUN8('', '', '', '') || VAR5.VAR13 == FUN8('', '', '', '')))
            VAR11 = VAR17;
        if (!VAR11)
        {
            FUN9(VAR4, VAR7.VAR9);
        }
        else
        {
            int64_t VAR18 = FUN10(VAR4);
            int64_t VAR19;
            int VAR20 = FUN11(VAR2, VAR4, VAR7);
            if (VAR20 < 0)
                return VAR20;
            if (VAR2->VAR21 && VAR2->VAR22 && (!VAR4->VAR23 || VAR18 + VAR7.VAR9 == FUN12(VAR4)))
                return 0;
            VAR19 = VAR7.VAR9 - FUN10(VAR4) + VAR18;
            if (VAR19 > 0)
                FUN9(VAR4, VAR19);
        }
        VAR6 += VAR7.VAR9;
    }
    if (VAR6 < VAR5.VAR9 && VAR5.VAR9 < 0x7ffff)
        FUN9(VAR4, VAR5.VAR9 - VAR6);
    return 0;
}