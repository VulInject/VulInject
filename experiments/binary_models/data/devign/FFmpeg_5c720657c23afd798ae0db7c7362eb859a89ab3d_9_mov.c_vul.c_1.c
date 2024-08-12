static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    char VAR8[5] = {0};
    int VAR9, VAR10, VAR11;
    if (VAR2->VAR12->VAR13 < 1)
        return 0;
    VAR7 = VAR2->VAR12->VAR14[VAR2->VAR12->VAR13 - 1];
    FUN2(VAR4, VAR8, 4);
    if (FUN3(VAR8, "", 4) && FUN3(VAR8, "", 4))
    {
        FUN4(VAR2->VAR12, VAR15, "", VAR8);
        return 0;
    }
    VAR9 = FUN5(VAR4);
    VAR10 = FUN5(VAR4);
    VAR11 = FUN5(VAR4);
    FUN4(VAR2->VAR12, VAR16, "" VAR17 "" VAR17 "" VAR17 "", VAR8, VAR9, VAR10, VAR11);
    if (!FUN3(VAR8, "", 4))
    {
        uint8_t VAR18 = FUN6(VAR4) >> 7;
        FUN4(VAR2->VAR12, VAR16, "" VAR19 "", VAR18);
        if (VAR18)
            VAR7->VAR20->VAR18 = VAR21;
        else
            VAR7->VAR20->VAR18 = VAR22;
        if (VAR9 >= VAR23)
            VAR9 = VAR24;
        if ((VAR10 >= VAR25 && VAR10 <= VAR26) || VAR10 >= VAR27)
            VAR10 = VAR28;
        if (VAR11 >= VAR29)
            VAR11 = VAR30;
        VAR7->VAR20->VAR9 = VAR9;
        VAR7->VAR20->VAR10 = VAR10;
        VAR7->VAR20->VAR31 = VAR11;
    }
    else if (!FUN3(VAR8, "", 4))
    {
        switch (VAR9)
        {
        case 1:
            VAR7->VAR20->VAR9 = VAR32;
            break;
        case 5:
            VAR7->VAR20->VAR9 = VAR33;
            break;
        case 6:
            VAR7->VAR20->VAR9 = VAR34;
            break;
        }
        switch (VAR10)
        {
        case 1:
            VAR7->VAR20->VAR10 = VAR35;
            break;
        case 7:
            VAR7->VAR20->VAR10 = VAR36;
            break;
        }
        switch (VAR11)
        {
        case 1:
            VAR7->VAR20->VAR31 = VAR37;
            break;
        case 6:
            VAR7->VAR20->VAR31 = VAR38;
            break;
        case 7:
            VAR7->VAR20->VAR31 = VAR39;
            break;
        }
    }
    FUN4(VAR2->VAR12, VAR16, "");
    return 0;
}