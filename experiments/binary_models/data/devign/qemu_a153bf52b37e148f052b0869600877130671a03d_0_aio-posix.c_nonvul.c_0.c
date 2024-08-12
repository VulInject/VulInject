static bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    bool VAR6 = false;
    FUN2(VAR4, &VAR2->VAR7, VAR4, VAR5)
    {
        int VAR8;
        VAR8 = VAR4->VAR9.VAR8 & VAR4->VAR9.VAR10;
        VAR4->VAR9.VAR8 = 0;
        if (!VAR4->VAR11 && (VAR8 & (VAR12 | VAR13 | VAR14)) && FUN3(VAR2, VAR4->VAR15) && VAR4->VAR16)
        {
            VAR4->FUN4(VAR4->VAR17);
            if (VAR4->VAR17 != &VAR2->VAR18)
            {
                VAR6 = true;
            }
        }
        if (!VAR4->VAR11 && (VAR8 & (VAR19 | VAR14)) && FUN3(VAR2, VAR4->VAR15) && VAR4->VAR20)
        {
            VAR4->FUN5(VAR4->VAR17);
            VAR6 = true;
        }
        if (VAR4->VAR11)
        {
            if (FUN6(&VAR2->VAR21))
            {
                FUN7(VAR4, VAR4);
                FUN8(VAR4);
                FUN9(&VAR2->VAR21);
            }
        }
    }
    return VAR6;
}