static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8 = 0;
    int VAR9;
    int64_t VAR10;
    for (VAR9 = 0; VAR9 < VAR4->VAR11; VAR9++)
    {
        VAR12 *VAR13 = &VAR4->VAR14[VAR9];
        if (VAR13->VAR15->VAR16 == VAR17 && !VAR13->VAR18)
        {
            FUN2(VAR2, VAR9, VAR13->VAR19);
            VAR13->VAR18 = 1;
        }
    }
    if (!VAR4->VAR20 && !(VAR4->VAR21 & VAR22))
    {
        if (VAR4->VAR23 & (VAR24 | VAR25 | VAR26) && VAR2->VAR27)
        {
            VAR4->VAR20 = VAR4->VAR11++;
            if ((VAR8 = FUN3(VAR2, VAR4->VAR20)) < 0)
                goto VAR28;
        }
    }
    if (!(VAR4->VAR21 & VAR22))
    {
        VAR10 = FUN4(VAR7);
        if (VAR4->VAR29 + 8 <= VAR30)
        {
            FUN5(VAR7, VAR4->VAR31, VAR32);
            FUN6(VAR7, VAR4->VAR29 + 8);
        }
        else
        {
            FUN5(VAR7, VAR4->VAR31 - 8, VAR32);
            FUN6(VAR7, 1);
            FUN7(VAR7, "");
            FUN8(VAR7, VAR4->VAR29 + 16);
        }
        FUN5(VAR7, VAR4->VAR33 > 0 ? VAR4->VAR34 : VAR10, VAR32);
        if (VAR4->VAR21 & VAR35)
        {
            FUN9(VAR2, VAR36, "");
            VAR8 = FUN10(VAR2);
            if (VAR8 == 0)
            {
                FUN5(VAR2->VAR7, VAR4->VAR34, VAR32);
                FUN11(VAR7, VAR4, VAR2);
            }
        }
        else if (VAR4->VAR33 > 0)
        {
            int64_t VAR37;
            FUN11(VAR7, VAR4, VAR2);
            VAR37 = VAR4->VAR33 - (FUN4(VAR7) - VAR4->VAR34);
            if (VAR37 < 8)
            {
                FUN9(VAR2, VAR38, "" VAR39 "", 8 - VAR37);
                return -1;
            }
            FUN6(VAR7, VAR37);
            FUN7(VAR7, "");
            FUN12(VAR7, 0, VAR37 - 8);
            FUN5(VAR7, VAR10, VAR32);
        }
        else
        {
            FUN11(VAR7, VAR4, VAR2);
        }
    }
    else
    {
        FUN13(VAR2);
        FUN14(VAR7, VAR4);
    }
    for (VAR9 = 0; VAR9 < VAR4->VAR11; VAR9++)
    {
        if (VAR4->VAR21 & VAR22 && VAR4->VAR14[VAR9].VAR40.VAR41 && VAR2->VAR7->VAR42)
        {
            int64_t VAR43 = FUN4(VAR7);
            uint8_t VAR44[7];
            if (FUN15(&VAR4->VAR14[VAR9], VAR44) >= 0)
            {
                FUN5(VAR7, VAR4->VAR14[VAR9].VAR40.VAR41, VAR32);
                FUN16(VAR7, VAR44, 7);
                FUN5(VAR7, VAR43, VAR32);
            }
        }
    }
VAR28:
    FUN17(VAR2);
    return VAR8;
}