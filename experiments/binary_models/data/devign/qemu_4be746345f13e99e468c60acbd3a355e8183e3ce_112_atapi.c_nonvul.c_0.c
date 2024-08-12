void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR4 = VAR2->VAR5;
    {
        int VAR6;
        FUN2("", VAR2->VAR7 | (VAR2->VAR8 << 8));
        for (VAR6 = 0; VAR6 < VAR9; VAR6++)
        {
            FUN2("", VAR4[VAR6]);
        }
        FUN2("");
    }
    if (VAR2->VAR10 == VAR11 && !(VAR12[VAR2->VAR5[0]].VAR13 & VAR14))
    {
        FUN3(VAR2);
        return;
    }
    if (!(VAR12[VAR2->VAR5[0]].VAR13 & VAR14) && !VAR2->VAR15 && FUN4(VAR2->VAR16) && VAR2->VAR17)
    {
        if (VAR2->VAR17 == 1)
        {
            FUN5(VAR2, VAR18, VAR19);
            VAR2->VAR17 = 2;
        }
        else
        {
            FUN5(VAR2, VAR11, VAR20);
            VAR2->VAR17 = 0;
        }
        return;
    }
    if ((VAR12[VAR2->VAR5[0]].VAR13 & VAR21) && (!FUN6(VAR2) || !FUN4(VAR2->VAR16)))
    {
        FUN5(VAR2, VAR18, VAR19);
        return;
    }
    if (VAR12[VAR2->VAR5[0]].VAR22)
    {
        VAR12[VAR2->VAR5[0]].FUN7(VAR2, VAR4);
        return;
    }
    FUN5(VAR2, VAR23, VAR24);
}