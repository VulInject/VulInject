static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR5 = FUN2(VAR2, VAR4);
    if (VAR5 < 0)
        return VAR5;
    if (!(VAR2->VAR6->VAR7 & VAR8))
    {
        VAR9 *VAR10 = VAR2->VAR11[VAR4->VAR12];
        if (!VAR10->VAR13->VAR14)
        {
            if (VAR4->VAR15 == VAR16 && VAR4->VAR17 != VAR16)
                VAR4->VAR15 = VAR4->VAR17;
            if (VAR4->VAR17 == VAR16 && VAR4->VAR15 != VAR16)
                VAR4->VAR17 = VAR4->VAR15;
        }
        if (VAR4->VAR15 == VAR16 || VAR4->VAR17 == VAR16)
        {
            FUN3(VAR2, VAR18, "", VAR10->VAR19);
            return FUN4(VAR20);
        }
        if (VAR10->VAR21 != VAR16 && ((!(VAR2->VAR6->VAR7 & VAR22) && VAR10->VAR21 >= VAR4->VAR17) || VAR10->VAR21 > VAR4->VAR17))
        {
            FUN3(VAR2, VAR18, ""
                                    "" VAR23 "" VAR23 "",
                   VAR10->VAR19, VAR10->VAR21, VAR4->VAR17);
            return FUN4(VAR20);
        }
        if (VAR4->VAR15 < VAR4->VAR17)
        {
            FUN3(VAR2, VAR18, "" VAR23 "" VAR23 "", VAR4->VAR15, VAR4->VAR17, VAR10->VAR19);
            return FUN4(VAR20);
        }
    }
    return 0;
}