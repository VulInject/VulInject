static VAR1 FUN1(void)
{
    int64_t VAR2, VAR3;
    long VAR4;
    ram_addr_t VAR5;
    int VAR6;
    VAR7 *VAR8;
    long VAR9;
    int VAR10 = 0;
    FUN2 (*VAR11)(void *VAR12, uint64_t VAR13);
    VAR6 = 1;
    VAR6 = 0;
    if (FUN3(VAR14.VAR15, VAR16, NULL, (VAR17 *)&VAR2, NULL, (VAR17 *)&VAR3, VAR6, VAR18, 1) < 0)
    {
        fprintf(VAR19, "", VAR14.VAR15);
        FUN4(1);
    }
    if (FUN5())
    {
        if (VAR2 & 0x80000000ll)
        {
            FUN6(""
                         "");
            FUN4(1);
        }
        VAR11 = VAR20;
    }
    else
    {
        if (!(VAR2 & 0x80000000ll))
        {
            FUN6(""
                         "");
            FUN4(1);
        }
        VAR11 = VAR21;
    }
    VAR4 = 0;
    VAR5 = 0;
    if (VAR14.VAR22)
    {
        VAR4 = FUN7(VAR14.VAR22);
        if (VAR4 > 0)
        {
            VAR5 = (VAR3 + ~VAR23) & VAR23;
            if (VAR5 + VAR4 > VAR24)
            {
                fprintf(VAR19, "", VAR14.VAR22);
                FUN4(1);
            }
            VAR4 = FUN8(VAR14.VAR22, VAR5, VAR24 - VAR5);
        }
        if (VAR4 == (VAR25)-1)
        {
            fprintf(VAR19, "", VAR14.VAR22);
            FUN4(1);
        }
    }
    VAR9 = VAR26 * (sizeof(VAR27) + VAR28);
    VAR8 = FUN9(VAR9);
    FUN10(VAR8, VAR10++, "", VAR14.VAR15);
    if (VAR4 > 0)
    {
        FUN10(VAR8, VAR10++, "" VAR29 "", FUN11(NULL, VAR5), VAR4, VAR14.VAR30);
    }
    else
    {
        FUN10(VAR8, VAR10++, "", VAR14.VAR30);
    }
    FUN10(VAR8, VAR10++, "");
    FUN10(VAR8, VAR10++, "", FUN12(VAR14.VAR24, 256 << 20));
    FUN10(VAR8, VAR10++, "");
    FUN10(VAR8, VAR10++, "");
    FUN10(VAR8, VAR10++, NULL);
    FUN13("", VAR8, VAR9, FUN14(NULL, VAR31));
    return VAR2;