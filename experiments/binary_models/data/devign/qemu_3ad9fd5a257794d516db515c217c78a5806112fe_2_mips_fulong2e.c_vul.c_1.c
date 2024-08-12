static VAR1 FUN1(VAR2 *VAR3)
{
    int64_t VAR4, VAR5, VAR6;
    int VAR7 = 0;
    long VAR8;
    ram_addr_t VAR9;
    VAR10 *VAR11;
    long VAR12;
    if (FUN2(VAR13.VAR14, VAR15, NULL, (VAR16 *)&VAR4, (VAR16 *)&VAR5, (VAR16 *)&VAR6, 0, VAR17, 1) < 0)
    {
        fprintf(VAR18, "", VAR13.VAR14);
        FUN3(1);
    }
    VAR8 = 0;
    VAR9 = 0;
    if (VAR13.VAR19)
    {
        VAR8 = FUN4(VAR13.VAR19);
        if (VAR8 > 0)
        {
            VAR9 = (VAR6 + ~VAR20) & VAR20;
            if (VAR9 + VAR8 > VAR21)
            {
                fprintf(VAR18, "", VAR13.VAR19);
                FUN3(1);
            }
            VAR8 = FUN5(VAR13.VAR19, VAR9, VAR21 - VAR9);
        }
        if (VAR8 == (VAR22)-1)
        {
            fprintf(VAR18, "", VAR13.VAR19);
            FUN3(1);
        }
    }
    VAR12 = VAR23 * (sizeof(VAR24) + VAR25);
    VAR11 = FUN6(VAR12);
    FUN7(VAR11, VAR7++, "", VAR13.VAR14);
    if (VAR8 > 0)
    {
        FUN7(VAR11, VAR7++, "" VAR26 "", FUN8(NULL, VAR9), VAR8, VAR13.VAR27);
    }
    else
    {
        FUN7(VAR11, VAR7++, "", VAR13.VAR27);
    }
    FUN7(VAR11, VAR7++, "");
    FUN7(VAR11, VAR7++, "");
    FUN7(VAR11, VAR7++, "", VAR13.VAR21 / 1024 / 1024);
    FUN7(VAR11, VAR7++, "");
    FUN7(VAR11, VAR7++, NULL);
    FUN9("", VAR11, VAR12, FUN10(NULL, VAR28));
    return VAR4;