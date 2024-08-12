void FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, target_ulong VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR4);
    target_ulong VAR10;
    int VAR11;
    CPUDebug VAR12;
    FUN3(VAR12.VAR13, VAR2, fprintf);
    VAR12.VAR4 = VAR4;
    VAR12.VAR13.VAR14 = VAR15;
    VAR12.VAR13.VAR16 = NULL;
    VAR12.VAR13.VAR17 = VAR5;
    VAR12.VAR13.VAR18 = VAR6;
    VAR12.VAR13.VAR19 = VAR20;
    VAR12.VAR13.VAR21 = VAR22;
    VAR12.VAR13.VAR21 = VAR23;
    if (VAR9->VAR24)
    {
        VAR9->FUN4(VAR4, &VAR12.VAR13);
    }
    if (VAR7 == 2)
    {
        VAR12.VAR13.VAR25 = VAR26;
    }
    else if (VAR7 == 1)
    {
        VAR12.VAR13.VAR25 = VAR27;
    }
    else
    {
        VAR12.VAR13.VAR25 = VAR28;
    }
    VAR12.VAR13.VAR29 = VAR30;
    if ((VAR7 >> 16) & 1)
    {
        VAR12.VAR13.VAR21 = VAR23;
    }
    if (VAR7 & 0xFFFF)
    {
        VAR12.VAR13.VAR25 = VAR7 & 0xFFFF;
    }
    else
    {
        VAR12.VAR13.VAR25 = VAR31;
        VAR12.VAR13.VAR25 = VAR32;
    }
    VAR12.VAR13.VAR33 = (char *)"";
    VAR12.VAR13.VAR29 = VAR34;
    if (VAR12.VAR13.VAR29 == NULL)
    {
        VAR12.VAR13.VAR29 = VAR35;
    }
    for (VAR10 = VAR5; VAR6 > 0; VAR10 += VAR11, VAR6 -= VAR11)
    {
        fprintf(VAR2, "" VAR36 "", VAR10);
        VAR11 = VAR12.VAR13.FUN5(VAR10, &VAR12.VAR13);
        {
            int VAR37;
            uint8_t VAR38;
            fprintf(VAR2, "");
            for (VAR37 = 0; VAR37 < VAR11; VAR37++)
            {
                FUN6(VAR10 + VAR37, &VAR38, 1, &VAR12.VAR13);
                fprintf(VAR2, "", VAR38);
            }
            fprintf(VAR2, "");
        }
        fprintf(VAR2, "");
        if (VAR11 < 0)
            break;
        if (VAR6 < VAR11)
        {
            fprintf(VAR2, ""
                         ""
                         "");
            break;
        }
    }
}