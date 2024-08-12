static VAR1 FUN1(void)
{
    int64_t VAR2, VAR3;
    long VAR4, VAR5, VAR6;
    ram_addr_t VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR10 = 1;
    VAR10 = 0;
    VAR4 = FUN2(VAR11.VAR12, VAR13, NULL, (VAR14 *)&VAR2, NULL, (VAR14 *)&VAR3, VAR10, VAR15, 1);
    if (VAR4 >= 0)
    {
        if ((VAR2 & ~0x7fffffffULL) == 0x80000000)
            VAR2 = (VAR16)VAR2;
    }
    else
    {
        fprintf(VAR17, "", VAR11.VAR12);
        FUN3(1);
    }
    VAR5 = 0;
    VAR7 = 0;
    if (VAR11.VAR18)
    {
        VAR5 = FUN4(VAR11.VAR18);
        if (VAR5 > 0)
        {
            VAR7 = (VAR3 + ~VAR19) & VAR19;
            if (VAR7 + VAR5 > VAR20)
            {
                fprintf(VAR17, "", VAR11.VAR18);
                FUN3(1);
            }
            VAR5 = FUN5(VAR11.VAR18, VAR7, VAR20 - VAR7);
        }
        if (VAR5 == (VAR21)-1)
        {
            fprintf(VAR17, "", VAR11.VAR18);
            FUN3(1);
        }
    }
    VAR6 = 264;
    VAR9 = FUN6(VAR6);
    VAR9[0] = FUN7(VAR20);
    VAR9[1] = FUN7(0x12345678);
    if (VAR5 > 0)
    {
        snprintf((char *)VAR9 + 8, 256, "" VAR22 "", FUN8(NULL, VAR7), VAR5, VAR11.VAR23);
    }
    else
    {
        snprintf((char *)VAR9 + 8, 256, "", VAR11.VAR23);
    }
    FUN9("", VAR9, VAR6, (16 << 20) - 264);
    return VAR2;