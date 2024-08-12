int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 & VAR4 || (VAR2->VAR5.VAR6 && !VAR2->VAR5.VAR7))
    {
        if (VAR2->VAR8->VAR9 > 1 || VAR2->VAR10[0])
            FUN2(VAR2->VAR8, VAR11, ""
                                             "");
        else
            VAR2->VAR12 = 1;
    }
    if (VAR2->VAR8->VAR9 < 2)
        VAR2->VAR8->VAR9 = !VAR2->VAR12;
    if (VAR2->VAR8->VAR13 != VAR2->VAR5.VAR14 || VAR2->VAR15 != VAR2->VAR5.VAR16)
    {
        if (VAR2->VAR8->VAR17 && VAR2->VAR8->VAR17->VAR18 & VAR19 && (VAR2->VAR5.VAR14 != 8 || VAR2->VAR5.VAR16 > 1))
        {
            FUN2(VAR2->VAR8, VAR20, "");
            return VAR21;
        }
        if (VAR2->VAR5.VAR14 >= 8 && VAR2->VAR5.VAR14 <= 14 && VAR2->VAR5.VAR14 != 11 && VAR2->VAR5.VAR14 != 13)
        {
            VAR2->VAR8->VAR13 = VAR2->VAR5.VAR14;
            VAR2->VAR15 = VAR2->VAR5.VAR16;
            VAR2->VAR22 = VAR2->VAR5.VAR14 > 8;
            FUN3(&VAR2->VAR23, VAR2->VAR5.VAR14, VAR2->VAR5.VAR16);
            FUN4(&VAR2->VAR24, VAR2->VAR5.VAR25);
            FUN5(&VAR2->VAR26, VAR2->VAR5.VAR14);
            FUN6(&VAR2->VAR27, VAR2->VAR8->VAR28, VAR2->VAR5.VAR14, VAR2->VAR5.VAR16);
            FUN7(&VAR2->VAR29, VAR2->VAR5.VAR14);
        }
        else
        {
            FUN2(VAR2->VAR8, VAR20, "", VAR2->VAR5.VAR14);
            return VAR21;
        }
    }
    return 0;
}