static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR4->VAR10[0];
    VAR1 *VAR11 = VAR4->VAR10[1];
    VAR12 *VAR13;
    int VAR14;
    if (VAR9->VAR15 != VAR11->VAR15)
    {
        FUN2(VAR4, VAR16, "");
        return FUN3(VAR17);
    }
    if (VAR9->VAR18 != VAR11->VAR18 || VAR9->VAR19 != VAR11->VAR19 || VAR9->VAR20.VAR21 != VAR11->VAR20.VAR21 || VAR9->VAR20.VAR22 != VAR11->VAR20.VAR22)
    {
        FUN2(VAR4, VAR16, ""
                                  ""
                                  "",
               VAR4->VAR23[0].VAR24, VAR9->VAR18, VAR9->VAR19, VAR9->VAR20.VAR21, VAR9->VAR20.VAR22, VAR4->VAR23[1].VAR24, VAR11->VAR18, VAR11->VAR19, VAR11->VAR20.VAR21, VAR11->VAR20.VAR22);
        return FUN3(VAR17);
    }
    VAR2->VAR18 = VAR9->VAR18;
    VAR2->VAR19 = VAR9->VAR19;
    VAR2->VAR25 = VAR9->VAR25;
    VAR2->VAR20 = VAR9->VAR20;
    VAR2->VAR26 = VAR9->VAR26;
    if ((VAR14 = FUN4(&VAR7->VAR27, VAR4, 2)) < 0)
        return VAR14;
    VAR13 = VAR7->VAR27.VAR13;
    VAR13[0].VAR25 = VAR9->VAR25;
    VAR13[1].VAR25 = VAR11->VAR25;
    VAR13[0].VAR28 = 1;
    VAR13[0].VAR29 = VAR30;
    VAR13[0].VAR31 = VAR32;
    VAR13[1].VAR28 = 1;
    VAR13[1].VAR29 = VAR30;
    VAR13[1].VAR31 = VAR32;
    VAR7->VAR27.VAR33 = VAR7;
    VAR7->VAR27.VAR34 = VAR35;
    if ((VAR14 = FUN5(VAR2)) < 0)
        return VAR14;
    return FUN6(&VAR7->VAR27);
}