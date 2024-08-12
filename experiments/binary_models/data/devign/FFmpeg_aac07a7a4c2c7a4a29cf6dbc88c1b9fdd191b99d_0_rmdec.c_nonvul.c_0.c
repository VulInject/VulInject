static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    unsigned int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR12 *VAR13;
    do
    {
        if (FUN2(VAR4) != FUN3('', '', '', ''))
            return -1;
        VAR5 = FUN4(VAR4);
        if (VAR5 < 20)
            return -1;
        FUN5(VAR4, 2);
        VAR6 = FUN4(VAR4);
        VAR7 = FUN6(VAR4);
        VAR8 = FUN4(VAR4);
        for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9++)
            if (VAR2->VAR15[VAR9]->VAR16 == VAR7)
            {
                VAR13 = VAR2->VAR15[VAR9];
                break;
            }
        if (VAR9 == VAR2->VAR14)
        {
            FUN7(VAR2, VAR17, "" VAR18 "", VAR7, FUN8(VAR4));
            goto VAR19;
        }
        else if ((FUN9(VAR4) - FUN8(VAR4)) / 14 < VAR6)
        {
            FUN7(VAR2, VAR17, ""
                                    "" VAR18 "" VAR18 "",
                   VAR7, FUN9(VAR4), FUN8(VAR4), (FUN9(VAR4) - FUN8(VAR4)) / 14);
            goto VAR19;
        }
        for (VAR9 = 0; VAR9 < VAR6; VAR9++)
        {
            FUN5(VAR4, 2);
            VAR11 = FUN4(VAR4);
            VAR10 = FUN4(VAR4);
            FUN5(VAR4, 4);
            FUN10(VAR13, VAR10, VAR11, 0, 0, VAR20);
        }
    VAR19:
        if (VAR8 && FUN8(VAR4) < VAR8 && FUN11(VAR4, VAR8, VAR21) < 0)
        {
            FUN7(VAR2, VAR17, "");
            return -1;
        }
    } while (VAR8);
    return 0;
}