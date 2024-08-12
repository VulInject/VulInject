static VAR1 FUN1(void)
{
    int64_t VAR2, VAR3;
    long VAR4;
    ram_addr_t VAR5;
    int VAR6;
    VAR7 *VAR8;
    long VAR9;
    int VAR10 = 0;
    VAR6 = 1;
    VAR6 = 0;
    if (FUN2(VAR11.VAR12, VAR13, NULL, (VAR14 *)&VAR2, NULL, (VAR14 *)&VAR3, VAR6, VAR15, 1) < 0)
    {
        fprintf(VAR16, "", VAR11.VAR12);
        FUN3(1);
    }
    VAR4 = 0;
    VAR5 = 0;
    if (VAR11.VAR17)
    {
        VAR4 = FUN4(VAR11.VAR17);
        if (VAR4 > 0)
        {
            VAR5 = (VAR3 + ~VAR18) & VAR18;
            if (VAR5 + VAR4 > VAR19)
            {
                fprintf(VAR16, "", VAR11.VAR17);
                FUN3(1);
            }
            VAR4 = FUN5(VAR11.VAR17, VAR5, VAR19 - VAR5);
        }
        if (VAR4 == (VAR20)-1)
        {
            fprintf(VAR16, "", VAR11.VAR17);
            FUN3(1);
        }
    }
    VAR9 = VAR21 * (sizeof(VAR22) + VAR23);
    VAR8 = FUN6(VAR9);
    FUN7(VAR8, VAR10++, "", VAR11.VAR12);
    if (VAR4 > 0)
    {
        FUN7(VAR8, VAR10++, "" VAR24 "", FUN8(NULL, VAR5), VAR4, VAR11.VAR25);
    }
    else
    {
        FUN7(VAR8, VAR10++, "", VAR11.VAR25);
    }
    FUN7(VAR8, VAR10++, "");
    FUN7(VAR8, VAR10++, "", FUN9(VAR11.VAR19, 256 << 20));
    FUN7(VAR8, VAR10++, "");
    FUN7(VAR8, VAR10++, "");
    FUN7(VAR8, VAR10++, NULL);
    FUN10("", VAR8, VAR9, FUN11(NULL, VAR26));
    return VAR2;
}