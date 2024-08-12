static VAR1 FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR2 *VAR6;
    ram_addr_t VAR7, VAR8;
    VAR7 = FUN2() >> VAR9;
    FUN3();
    VAR3->VAR10 = FUN4(VAR3->VAR11);
    if (!VAR3->VAR12)
    {
        if (FUN5())
        {
            FUN6(VAR3->VAR10, VAR3->VAR11, VAR3->VAR13);
        }
        else
        {
            VAR3->VAR12 = FUN7(VAR3->VAR11, &VAR3->VAR13->VAR14);
            if (!VAR3->VAR12)
            {
                FUN8(VAR5, VAR15, "", FUN9(VAR3->VAR13));
                FUN10();
                return -1;
            }
            FUN11(VAR3->VAR12, VAR3->VAR11);
        }
    }
    FUN12(VAR6, &VAR16.VAR17, VAR18)
    {
        if (VAR6->VAR11 < VAR3->VAR11)
        {
            break;
        }
    }
    if (VAR6)
    {
        FUN13(VAR6, VAR3, VAR18);
    }
    else
    {
        FUN14(&VAR16.VAR17, VAR3, VAR18);
    }
    VAR16.VAR19 = NULL;
    VAR16.VAR20++;
    FUN10();
    VAR8 = FUN2() >> VAR9;
    if (VAR8 > VAR7)
    {
        int VAR21;
        for (VAR21 = 0; VAR21 < VAR22; VAR21++)
        {
            VAR16.VAR23[VAR21] = FUN15(VAR16.VAR23[VAR21], VAR7, VAR8);
        }
    }
    FUN16(VAR3->VAR10, VAR3->VAR24);
    if (VAR3->VAR12)
    {
        FUN17(VAR3->VAR12, VAR3->VAR11);
        FUN18(VAR3->VAR12, VAR3->VAR11, VAR25);
        FUN18(VAR3->VAR12, VAR3->VAR11, VAR26);
        if (FUN19())
        {
            FUN20(VAR3->VAR12, VAR3->VAR11);
        }
    }
    return VAR3->VAR10;
}