void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2();
    if (VAR2->VAR7 && (VAR2->VAR8 < 0 || VAR2->VAR8 > 9))
    {
        FUN3(VAR4, VAR9, "", "");
        return;
    }
    if (VAR2->VAR10 && (VAR2->VAR11 < 1 || VAR2->VAR11 > 255))
    {
        FUN3(VAR4, VAR9, "", "");
        return;
    }
    if (VAR2->VAR12 && (VAR2->VAR13 < 1 || VAR2->VAR13 > 255))
    {
        FUN3(VAR4, VAR9, "", "");
        return;
    }
    if (VAR2->VAR14 && (VAR2->VAR15 < 1 || VAR2->VAR15 > 99))
    {
        FUN3(VAR4, VAR9, "", "");
        return;
    }
    if (VAR2->VAR16 && (VAR2->VAR17 < 1 || VAR2->VAR17 > 99))
    {
        FUN3(VAR4, VAR9, "", "");
        return;
    }
    if (VAR2->VAR18 && (VAR2->VAR19 < 0 || VAR2->VAR19 > VAR20))
    {
        FUN3(VAR4, ""
                         "",
                   VAR20);
        return;
    }
    if (VAR2->VAR21 && (VAR2->VAR22 < 0 || VAR2->VAR22 > VAR23))
    {
        FUN3(VAR4, ""
                         "",
                   VAR23);
        return;
    }
    if (VAR2->VAR24 && (VAR2->VAR25 < 0))
    {
        FUN3(VAR4, VAR9, "", "");
    }
    if (VAR2->VAR7)
    {
        VAR6->VAR26.VAR8 = VAR2->VAR8;
    }
    if (VAR2->VAR10)
    {
        VAR6->VAR26.VAR11 = VAR2->VAR11;
    }
    if (VAR2->VAR12)
    {
        VAR6->VAR26.VAR13 = VAR2->VAR13;
    }
    if (VAR2->VAR14)
    {
        VAR6->VAR26.VAR15 = VAR2->VAR15;
    }
    if (VAR2->VAR16)
    {
        VAR6->VAR26.VAR17 = VAR2->VAR17;
    }
    if (VAR2->VAR27)
    {
        FUN4(VAR6->VAR26.VAR28);
        VAR6->VAR26.VAR28 = FUN5(VAR2->VAR28);
    }
    if (VAR2->VAR29)
    {
        FUN4(VAR6->VAR26.VAR30);
        VAR6->VAR26.VAR30 = FUN5(VAR2->VAR30);
    }
    if (VAR2->VAR18)
    {
        VAR6->VAR26.VAR19 = VAR2->VAR19;
        if (VAR6->VAR31)
        {
            FUN6(VAR6->VAR31, VAR6->VAR26.VAR19 / VAR32);
        }
    }
    if (VAR2->VAR21)
    {
        VAR6->VAR26.VAR22 = VAR2->VAR22;
    }
    if (VAR2->VAR24)
    {
        VAR6->VAR26.VAR25 = VAR2->VAR25;
        if (FUN7())
        {
            FUN8(VAR6);
        }
    }
}