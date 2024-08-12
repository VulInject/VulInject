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
        if (VAR2->VAR5.VAR14 >= 8 && VAR2->VAR5.VAR14 <= 10)
        {
            VAR2->VAR8->VAR13 = VAR2->VAR5.VAR14;
            VAR2->VAR15 = VAR2->VAR5.VAR16;
            VAR2->VAR17 = VAR2->VAR5.VAR14 > 8;
            FUN3(&VAR2->VAR18, VAR2->VAR5.VAR14, VAR2->VAR5.VAR16);
            FUN4(&VAR2->VAR19, VAR2->VAR5.VAR20);
            FUN5(&VAR2->VAR21, VAR2->VAR5.VAR14);
            FUN6(&VAR2->VAR22, VAR2->VAR8->VAR23, VAR2->VAR5.VAR14, VAR2->VAR5.VAR16);
            FUN7(&VAR2->VAR24, VAR2->VAR5.VAR14);
        }
        else
        {
            FUN2(VAR2->VAR8, VAR25, "", VAR2->VAR5.VAR14);
            return VAR26;
        }
    }
    return 0;
}