static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR6, VAR8);
    hwaddr VAR9 = VAR4->VAR10;
    ram_addr_t VAR11 = FUN3(VAR4->VAR11);
    bool VAR12 = FUN4(VAR4->VAR13, VAR14);
    hvmmem_type_t VAR15;
    if (VAR4->VAR13 == &VAR16)
    {
        return;
    }
    else
    {
        if (VAR5)
        {
            FUN5(VAR17, VAR18, VAR7->VAR19, VAR4);
        }
        else
        {
            FUN6(VAR17, VAR18, VAR7->VAR19, VAR4);
        }
    }
    if (!FUN7(VAR4->VAR13))
    {
        return;
    }
    if (VAR12 != VAR5)
    {
        return;
    }
    FUN8(VAR9, VAR11, VAR12);
    VAR9 &= VAR20;
    VAR11 = FUN9(VAR11);
    if (VAR5)
    {
        if (!FUN10(VAR4->VAR13))
        {
            FUN11(VAR7, VAR9, VAR11, VAR4->VAR13, VAR4->VAR21);
        }
        else
        {
            VAR15 = VAR22;
            if (FUN12(VAR17, VAR18, VAR15, VAR9 >> VAR23, VAR11 >> VAR23))
            {
                FUN13("" VAR24 "", VAR9);
            }
        }
    }
    else
    {
        if (FUN14(VAR7, VAR9, VAR11) < 0)
        {
            FUN13("" VAR24 "", VAR9);
        }
    }
}