static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR6, VAR8);
    hwaddr VAR9 = VAR4->VAR10;
    ram_addr_t VAR11 = FUN3(VAR4->VAR11);
    bool VAR12 = FUN4(VAR4->VAR13);
    hvmmem_type_t VAR14;
    if (!FUN5(VAR4->VAR13))
    {
        return;
    }
    if (!(VAR4->VAR13 != &VAR15 && ((VAR12 && VAR5) || (!VAR12 && !VAR5))))
    {
        return;
    }
    FUN6(VAR9, VAR11, VAR12);
    VAR9 &= VAR16;
    VAR11 = FUN7(VAR11);
    if (VAR5)
    {
        if (!FUN8(VAR4->VAR13))
        {
            FUN9(VAR7, VAR9, VAR11, VAR4->VAR13, VAR4->VAR17);
        }
        else
        {
            VAR14 = VAR18;
            if (FUN10(VAR19, VAR20, VAR14, VAR9 >> VAR21, VAR11 >> VAR21))
            {
                FUN11("" VAR22 "", VAR9);
            }
        }
    }
    else
    {
        if (FUN12(VAR7, VAR9, VAR11) < 0)
        {
            FUN11("" VAR22 "", VAR9);
        }
    }
}