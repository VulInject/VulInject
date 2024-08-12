static int FUN1(VAR1 **VAR2)
{
    VAR3 *VAR4 = NULL;
    if (FUN2(VAR2))
    {
        return -1;
    }
    if (FUN3())
    {
        FUN4();
        VAR5.VAR6 = FUN5(VAR7);
        VAR5.VAR8 = FUN6(FUN7(), VAR7, &VAR4);
        if (!VAR5.VAR8)
        {
            FUN8();
            FUN9(VAR4);
            FUN10(*VAR2);
            *VAR2 = NULL;
            return -1;
        }
        FUN8();
        VAR5.VAR9 = FUN11(VAR7);
        if (!VAR5.VAR9)
        {
            FUN12("");
            FUN10(*VAR2);
            *VAR2 = NULL;
            return -1;
        }
        VAR5.VAR10 = FUN13(VAR7);
        if (!VAR5.VAR10)
        {
            FUN12("");
            FUN10(VAR5.VAR9);
            VAR5.VAR9 = NULL;
            FUN10(*VAR2);
            *VAR2 = NULL;
            return -1;
        }
    }
    FUN14();
    FUN15();
    FUN16();
    if (FUN17())
    {
        VAR11 *VAR12;
        FUN18(VAR12, &VAR13.VAR14, VAR15)
        {
            unsigned long VAR16 = VAR12->VAR17 >> VAR18;
            VAR12->VAR19 = FUN19(VAR16);
            FUN20(VAR12->VAR19, 0, VAR16);
            if (FUN21())
            {
                VAR12->VAR20 = FUN19(VAR16);
                FUN20(VAR12->VAR20, 0, VAR16);
            }
        }
    }
    FUN22();
    FUN23(*VAR2);
    FUN24();
    FUN25();
    FUN26();
    return 0;
}