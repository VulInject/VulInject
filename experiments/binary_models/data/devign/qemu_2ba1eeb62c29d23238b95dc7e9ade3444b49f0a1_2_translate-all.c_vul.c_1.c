int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned long VAR5, void *VAR6)
{
    VAR7 *VAR8 = &VAR9;
    int VAR10;
    unsigned long VAR11;
    int64_t VAR12;
    VAR12 = FUN2();
    FUN3(VAR8);
    if (FUN4(VAR4, VAR2) < 0)
        return -1;
    VAR11 = (unsigned long)VAR2->VAR11;
    if (VAR5 < VAR11)
        return -1;
    VAR8->VAR13 = VAR2->VAR13;
    VAR8->VAR14 = VAR2->VAR14;
    VAR8->VAR15 = NULL;
    VAR8->VAR14 = NULL;
    VAR8->VAR15 = VAR2->VAR15;
    VAR10 = FUN5(VAR8, (VAR16 *)VAR11, (void *)VAR5);
    if (VAR10 < 0)
        return -1;
    while (VAR17[VAR10] == 0)
        VAR10--;
    {
        int VAR18;
        if (VAR19 & VAR20)
        {
            int VAR21;
            fprintf(VAR22, "");
            for (VAR21 = 0; VAR21 <= VAR10; VAR21++)
            {
                if (VAR17[VAR21])
                {
                    fprintf(VAR22, "" VAR23 "", VAR21, VAR24[VAR21]);
                }
            }
            fprintf(VAR22, "" VAR23 "", VAR5, VAR10, VAR24[VAR10] - VAR2->VAR25, (VAR26)VAR2->VAR25);
        }
        VAR4->VAR27 = VAR24[VAR10] - VAR2->VAR25;
        VAR18 = VAR28[VAR10];
        if (VAR18 != VAR29)
            VAR4->VAR18 = VAR18;
    }
    VAR4->VAR30[15] = VAR24[VAR10];
    {
        target_ulong VAR31;
        VAR4->VAR32 = VAR24[VAR10];
        VAR31 = VAR33[VAR10];
        if (VAR31 == 1)
        {
        }
        else if (VAR31 == 2)
        {
            target_ulong VAR34 = (VAR35)(unsigned long)VAR6;
            if (VAR34)
                VAR4->VAR31 = VAR36[0];
            else
                VAR4->VAR31 = VAR36[1];
        }
        else
        {
            VAR4->VAR31 = VAR31;
        }
    }
    {
        int VAR37, VAR38;
        VAR4->VAR39 = VAR24[VAR10];
        VAR38 = VAR40[VAR10];
        switch (VAR38)
        {
        case VAR41##VAR42##_raw case VAR41##VAR42##VAR43:
        case VAR41##VAR42##VAR44:
        case VAR41##VAR42##VAR45 FUN6(VAR46):
            FUN6(VAR47) : FUN6(VAR48) : FUN6(VAR49) : VAR37 = VAR50;
            break;
            FUN6(VAR51) : VAR37 = VAR52;
            break;
            FUN6(VAR53) : VAR37 = VAR52;
            break;
            FUN6(VAR54) : FUN6(VAR55) : VAR37 = VAR56;
            break;
        default:
            VAR37 = VAR57;
            break;
        }
        VAR4->VAR58 = VAR37;
    }
    VAR4->VAR32 = VAR24[VAR10];
    VAR4->VAR59[VAR4->VAR60] = VAR24[VAR10];
    VAR4->VAR61 &= ~VAR62;
    VAR4->VAR61 |= VAR63[VAR10];
    VAR4->VAR32 = VAR24[VAR10];
    VAR4->VAR32 = VAR24[VAR10];
    VAR4->VAR64 = VAR63[VAR10];
    VAR65 += FUN2() - VAR12;
    VAR66++;
    return 0;
}