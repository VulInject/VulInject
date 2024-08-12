static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7;
    int64_t VAR8 = FUN2(VAR2);
    int VAR9 = 0, VAR10 = 0;
    int VAR11 = 0x200;
    int VAR12;
    for (VAR12 = 0; VAR12 < VAR4->VAR13; VAR12++)
    {
        VAR14 *VAR15 = VAR4->VAR16[VAR12];
        if (VAR15->VAR17->VAR18 == VAR19)
            VAR10 = 1;
        if (VAR15->VAR17->VAR20 == VAR21)
            VAR9 = 1;
    }
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    if (VAR6->VAR22 && strlen(VAR6->VAR22) >= 4)
        FUN4(VAR2, VAR6->VAR22);
    else if (VAR6->VAR23 == VAR24)
    {
        FUN4(VAR2, VAR9 ? "" : "");
        VAR11 = VAR9 ? 0x100 : 0x200;
    }
    else if (VAR6->VAR23 & VAR25)
    {
        FUN4(VAR2, VAR9 ? "" : "");
        VAR11 = VAR9 ? 0x20000 : 0x10000;
    }
    else if (VAR6->VAR23 == VAR26)
        FUN4(VAR2, "");
    else if (VAR6->VAR23 == VAR27)
        FUN4(VAR2, "");
    else if (VAR6->VAR23 == VAR28)
        FUN4(VAR2, VAR10 ? "" : "");
    else if (VAR6->VAR23 == VAR29)
        FUN4(VAR2, "");
    else if (VAR6->VAR23 == VAR30)
        FUN4(VAR2, "");
    else
        FUN4(VAR2, "");
    FUN3(VAR2, VAR11);
    if (VAR6->VAR23 == VAR31)
        FUN4(VAR2, "");
    else if (VAR6->VAR23 == VAR29)
    {
        FUN4(VAR2, "");
        FUN4(VAR2, "");
    }
    else
    {
        FUN4(VAR2, "");
        FUN4(VAR2, "");
        if (VAR9)
            FUN4(VAR2, "");
    }
    if (VAR6->VAR23 == VAR24)
        FUN4(VAR2, VAR9 ? "" : "");
    else if (VAR6->VAR23 & VAR25)
        FUN4(VAR2, VAR9 ? "" : "");
    else if (VAR6->VAR23 == VAR26)
        FUN4(VAR2, "");
    else if (VAR6->VAR23 == VAR27)
        FUN4(VAR2, "");
    return FUN5(VAR2, VAR8);
}