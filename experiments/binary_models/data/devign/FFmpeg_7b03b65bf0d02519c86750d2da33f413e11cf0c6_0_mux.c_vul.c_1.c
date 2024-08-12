int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6 = 0;
    if (VAR4)
    {
        VAR7 *VAR8 = VAR2->VAR9[VAR4->VAR10];
        if (VAR8->VAR11->VAR12 == VAR13 && VAR4->VAR14 == 0)
            return 0;
        FUN2(VAR2, "" VAR15 "" VAR15 "", VAR4->VAR14, VAR4->VAR16, VAR4->VAR17);
        if ((VAR5 = FUN3(VAR2, VAR8, VAR4)) < 0 && !(VAR2->VAR18->VAR19 & VAR20))
            if (VAR4->VAR16 == VAR21 && !(VAR2->VAR18->VAR19 & VAR20))
                return FUN4(VAR22);
    }
    else
    {
        FUN2(VAR2, "");
        VAR6 = 1;
    }
    for (;;)
    {
        AVPacket VAR23;
        int VAR5 = FUN5(VAR2, &VAR23, VAR4, VAR6);
        if (VAR5 <= 0)
            VAR5 = FUN6(VAR2, &VAR23);
        if (VAR5 >= 0)
            VAR2->VAR9[VAR23.VAR10]->VAR24++;
        FUN7(&VAR23);
        VAR4 = NULL;
    }