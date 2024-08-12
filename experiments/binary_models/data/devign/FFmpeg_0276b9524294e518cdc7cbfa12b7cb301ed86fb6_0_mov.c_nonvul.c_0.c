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
    FUN6(VAR2->VAR12, "", VAR8, VAR9, VAR10, VAR11);
    if (FUN3(VAR8, "", 4) == 0)
    {
        uint8_t VAR16 = FUN7(VAR4) >> 7;
        FUN6(VAR2->VAR12, "" VAR17 "", VAR16);
        if (VAR16)
            VAR7->VAR18->VAR16 = VAR19;
        else
            VAR7->VAR18->VAR16 = VAR20;
        if (VAR9 >= VAR21)
            VAR9 = VAR22;
        if ((VAR10 >= VAR23 && VAR10 <= VAR24) || VAR10 >= VAR25)
            VAR10 = VAR26;
        if (VAR11 >= VAR27)
            VAR11 = VAR28;
        VAR7->VAR18->VAR9 = VAR9;
        VAR7->VAR18->VAR10 = VAR10;
        VAR7->VAR18->VAR29 = VAR11;
    }
    else
    {
        switch (VAR9)
        {
        case 1:
            VAR7->VAR18->VAR9 = VAR30;
            break;
        case 5:
            VAR7->VAR18->VAR9 = VAR31;
            break;
        case 6:
            VAR7->VAR18->VAR9 = VAR32;
            break;
        }
        switch (VAR10)
        {
        case 1:
            VAR7->VAR18->VAR10 = VAR33;
            break;
        case 7:
            VAR7->VAR18->VAR10 = VAR34;
            break;
        }
        switch (VAR11)
        {
        case 1:
            VAR7->VAR18->VAR29 = VAR35;
            break;
        case 6:
            VAR7->VAR18->VAR29 = VAR36;
            break;
        case 7:
            VAR7->VAR18->VAR29 = VAR37;
            break;
        }
    }
    FUN6(VAR2->VAR12, "");
    return 0;
}