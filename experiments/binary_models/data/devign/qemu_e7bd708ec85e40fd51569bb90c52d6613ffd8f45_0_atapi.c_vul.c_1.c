void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    const struct VAR6 *VAR7 = &VAR8[VAR2->VAR5[0]];
    {
        int VAR9;
        FUN2("", VAR2->VAR10 | (VAR2->VAR11 << 8));
        for (VAR9 = 0; VAR9 < VAR12; VAR9++)
        {
            FUN2("", VAR4[VAR9]);
        }
        FUN2("");
    }
    if (VAR2->VAR13 == VAR14 && !(VAR7->VAR15 & VAR16))
    {
        FUN3(VAR2);
        return;
    }
    if (!(VAR7->VAR15 & VAR16) && !VAR2->VAR17 && FUN4(VAR2->VAR18) && VAR2->VAR19)
    {
        if (VAR2->VAR19 == 1)
        {
            FUN5(VAR2, VAR20, VAR21);
            VAR2->VAR19 = 2;
        }
        else
        {
            FUN5(VAR2, VAR14, VAR22);
            VAR2->VAR19 = 0;
        }
        return;
    }
    if ((VAR7->VAR15 & VAR23) && (!FUN6(VAR2) || !FUN4(VAR2->VAR18)))
    {
        FUN5(VAR2, VAR20, VAR21);
        return;
    }
    if (VAR7->VAR24 && !(VAR7->VAR15 & VAR25))
    {
        if (!(FUN7(VAR2) || VAR2->VAR26))
        {
            FUN8(VAR2);
            return;
        }
    }
    if (VAR7->VAR24)
    {
        VAR7->FUN9(VAR2, VAR4);
        return;
    }
    FUN5(VAR2, VAR27, VAR28);
}