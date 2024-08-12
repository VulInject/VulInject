void FUN1(int VAR1)
{
    VAR2 *VAR3;
    fd_set VAR4, VAR5, VAR6;
    int VAR7, VAR8;
    struct timeval VAR9;
    int VAR10;
    if (VAR1)
        VAR10 = 0;
    else
    {
        VAR10 = FUN2();
        FUN3(&VAR10);
    }
    FUN4(&VAR10);
    VAR8 = -1;
    FUN5(&VAR4);
    FUN5(&VAR5);
    FUN5(&VAR6);
    FUN6(VAR3, &VAR11, VAR12)
    {
        if (VAR3->VAR13)
            continue;
        if (VAR3->VAR14 && (!VAR3->VAR15 || VAR3->FUN7(VAR3->VAR16) != 0))
        {
            FUN8(VAR3->VAR17, &VAR4);
            if (VAR3->VAR17 > VAR8)
                VAR8 = VAR3->VAR17;
        }
        if (VAR3->VAR18)
        {
            FUN8(VAR3->VAR17, &VAR5);
            if (VAR3->VAR17 > VAR8)
                VAR8 = VAR3->VAR17;
        }
    }
    VAR9.VAR19 = VAR10 / 1000;
    VAR9.VAR20 = (VAR10 % 1000) * 1000;
    FUN9(&VAR8, &VAR4, &VAR5, &VAR6);
    FUN10();
    VAR7 = FUN11(VAR8 + 1, &VAR4, &VAR5, &VAR6, &VAR9);
    FUN12();
    if (VAR7 > 0)
    {
        VAR2 *VAR21;
        FUN13(VAR3, &VAR11, VAR12, VAR21)
        {
            if (VAR3->VAR13)
            {
                FUN14(VAR3, VAR12);
                FUN15(VAR3);
                continue;
            }
            if (VAR3->VAR14 && FUN16(VAR3->VAR17, &VAR4))
            {
                VAR3->FUN17(VAR3->VAR16);
            }
            if (VAR3->VAR18 && FUN16(VAR3->VAR17, &VAR5))
            {
                VAR3->FUN18(VAR3->VAR16);
            }
        }
    }
    FUN19(&VAR4, &VAR5, &VAR6, (VAR7 < 0));
    FUN20();
    FUN21();
}