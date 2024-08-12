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
            if (VAR7.VAR13 == FUN5('', '', '', '') && VAR7.VAR9 >= 8 && VAR2->VAR14)
            {
                uint8_t VAR15[8];
                VAR16 *VAR13 = (VAR16 *)VAR15 + 1;
                FUN6(VAR4, VAR15, 8);
                FUN7(VAR4, -8, VAR17);
                if (*VAR13 == FUN5('', '', '', '') || *VAR13 == FUN5('', '', '', ''))
                {
                    FUN8(VAR2->VAR18, VAR19, "");
                    VAR7.VAR13 = FUN5('', '', '', '');
                }
            }
            if (VAR5.VAR13 != FUN5('', '', '', '') && VAR5.VAR13 != FUN5('', '', '', ''))
            {
                if (VAR7.VAR13 == FUN5('', '', '', '') || VAR7.VAR13 == FUN5('', '', '', ''))
                {
                    FUN8(VAR2->VAR18, VAR19, "");
                    FUN9(VAR4, -8);
                    return 0;
                }
            }
            VAR6 += 8;
            if (VAR7.VAR9 == 1)
            {
                VAR7.VAR9 = FUN10(VAR4) - 8;
                VAR6 += 8;
            }
        }
        FUN11(VAR2->VAR18, "" VAR20 "" VAR20 "" VAR20 "", VAR7.VAR13, (char *)&VAR7.VAR13, (char *)&VAR5.VAR13, VAR7.VAR9, VAR6, VAR5.VAR9);
        if (VAR7.VAR9 == 0)
        {
            VAR7.VAR9 = VAR5.VAR9 - VAR6 + 8;
        }
        VAR7.VAR9 -= 8;
        if (VAR7.VAR9 < 0)
            break;
        VAR7.VAR9 = FUN12(VAR7.VAR9, VAR5.VAR9 - VAR6);
        for (VAR8 = 0; VAR21[VAR8].VAR13; VAR8++)
            if (VAR21[VAR8].VAR13 == VAR7.VAR13)
            {
                VAR11 = VAR21[VAR8].VAR11;
                break;
            }
        if (!VAR11 && (VAR5.VAR13 == FUN5('', '', '', '') || VAR5.VAR13 == FUN5('', '', '', '')))
            VAR11 = VAR22;
        if (!VAR11)
        {
            FUN9(VAR4, VAR7.VAR9);
        }
        else
        {
            int64_t VAR23 = FUN13(VAR4);
            int64_t VAR24;
            int VAR25 = FUN14(VAR2, VAR4, VAR7);
            if (VAR25 < 0)
                return VAR25;
            if (VAR2->VAR26 && VAR2->VAR27 && ((!VAR4->VAR28 || VAR2->VAR18->VAR29 & VAR30) || VAR23 + VAR7.VAR9 == FUN15(VAR4)))
            {
                if (!VAR4->VAR28 || VAR2->VAR18->VAR29 & VAR30)
                    VAR2->VAR31 = VAR23 + VAR7.VAR9;
                return 0;
            }
            VAR24 = VAR7.VAR9 - FUN13(VAR4) + VAR23;
            if (VAR24 > 0)
                FUN9(VAR4, VAR24);
            else if (VAR24 < 0)
            {
                FUN8(VAR2->VAR18, VAR32, "" VAR20 "", (char *)&VAR7.VAR13, -VAR24);
                FUN7(VAR4, VAR24, VAR17);
            }
        }
        VAR6 += VAR7.VAR9;
    }
    if (VAR6 < VAR5.VAR9 && VAR5.VAR9 < 0x7ffff)
        FUN9(VAR4, VAR5.VAR9 - VAR6);
    return 0;
}