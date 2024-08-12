static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8 = 0;
    int VAR9;
    int64_t VAR10 = FUN2(VAR7);
    if (!(VAR4->VAR11 & VAR12))
    {
        if (VAR4->VAR13 + 8 <= VAR14)
        {
            FUN3(VAR7, VAR4->VAR15, VAR16);
            FUN4(VAR7, VAR4->VAR13 + 8);
        }
        else
        {
            FUN3(VAR7, VAR4->VAR15 - 8, VAR16);
            FUN4(VAR7, 1);
            FUN5(VAR7, "");
            FUN6(VAR7, VAR4->VAR13 + 16);
        }
        FUN3(VAR7, VAR4->VAR17 ? VAR4->VAR18 : VAR10, VAR16);
        FUN7(VAR7, VAR4, VAR2);
        if (VAR4->VAR17)
        {
            int64_t VAR19 = VAR4->VAR17 - (FUN2(VAR7) - VAR4->VAR18);
            if (VAR19 < 8)
            {
                FUN8(VAR2, VAR20, "" VAR21 "", 8 - VAR19);
                return -1;
            }
            FUN4(VAR7, VAR19);
            FUN5(VAR7, "");
            for (VAR9 = 0; VAR9 < VAR19; VAR9++)
                FUN9(VAR7, 0);
            FUN3(VAR7, VAR10, VAR16);
        }
    }
    else
    {
        FUN10(VAR2);
        FUN11(VAR7, VAR4);
    }
    if (VAR4->VAR22)
        FUN12(&VAR4->VAR23[VAR4->VAR22].VAR24);
    for (VAR9 = 0; VAR9 < VAR4->VAR25; VAR9++)
    {
        if (VAR4->VAR23[VAR9].VAR26 == FUN13('', '', '', ''))
            FUN14(&VAR4->VAR23[VAR9]);
        else if (VAR4->VAR23[VAR9].VAR26 == FUN13('', '', '', ''))
            FUN12(&VAR4->VAR23[VAR9].VAR24);
        if (VAR4->VAR11 & VAR12 && VAR4->VAR23[VAR9].VAR27.VAR28 && VAR2->VAR7->VAR29)
        {
            int64_t VAR30 = FUN2(VAR7);
            uint8_t VAR31[7];
            if (FUN15(&VAR4->VAR23[VAR9], VAR31) >= 0)
            {
                FUN3(VAR7, VAR4->VAR23[VAR9].VAR27.VAR28, VAR16);
                FUN16(VAR7, VAR31, 7);
                FUN3(VAR7, VAR30, VAR16);
            }
        }
        FUN12(&VAR4->VAR23[VAR9].VAR32);
        FUN12(&VAR4->VAR23[VAR9].VAR33);
        if (VAR4->VAR23[VAR9].VAR34)
            FUN17(VAR4->VAR23[VAR9].VAR35);
    }
    FUN18(VAR7);
    FUN12(&VAR4->VAR23);
    return VAR8;
}