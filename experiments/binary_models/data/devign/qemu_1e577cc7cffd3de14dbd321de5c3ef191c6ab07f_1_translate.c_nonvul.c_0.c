void FUN1(VAR1 *VAR2, VAR3 *VAR4, fprintf_function VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = &VAR8->VAR10;
    int VAR11;
    if (FUN3(VAR10))
    {
        FUN4(VAR2, VAR4, VAR5, VAR6);
        return;
    }
    for (VAR11 = 0; VAR11 < 16; VAR11++)
    {
        FUN5(VAR4, "", VAR11, VAR10->VAR12[VAR11]);
        if ((VAR11 % 4) == 3)
            FUN5(VAR4, "");
        else
            FUN5(VAR4, "");
    }
    if (FUN6(VAR10, VAR13))
    {
        uint32_t VAR14 = FUN7(VAR10);
        const char *VAR15;
        const char *VAR16 = "";
        if (FUN6(VAR10, VAR17))
        {
            VAR16 = VAR10->VAR18.VAR19 ? "" : "";
        }
        if (VAR14 & VAR20)
        {
            VAR15 = "";
        }
        else
        {
            if (VAR10->VAR18.VAR21 & VAR22)
            {
                VAR15 = "";
            }
            else
            {
                VAR15 = "";
            }
        }
        FUN5(VAR4, "", VAR14, VAR14 & VAR23 ? '' : '', VAR14 & VAR24 ? '' : '', VAR14 & VAR25 ? '' : '', VAR14 & VAR26 ? '' : '', VAR14 & VAR27 ? '' : '', VAR16, VAR15);
    }
    else
    {
        uint32_t VAR28 = FUN8(VAR10);
        const char *VAR16 = "";
        if (FUN6(VAR10, VAR29) && (VAR28 & VAR30) != VAR31)
        {
            VAR16 = VAR10->VAR32.VAR33 & VAR34 ? "" : "";
        }
        FUN5(VAR4, "", VAR28, VAR28 & VAR35 ? '' : '', VAR28 & VAR36 ? '' : '', VAR28 & VAR37 ? '' : '', VAR28 & VAR38 ? '' : '', VAR28 & VAR39 ? '' : '', VAR16, VAR40[VAR28 & 0xf], (VAR28 & 0x10) ? 32 : 26);
    }
    if (VAR6 & VAR41)
    {
        int VAR42 = 0;
        if (FUN6(VAR10, VAR43))
        {
            VAR42 += 16;
        }
        if (FUN6(VAR10, VAR44))
        {
            VAR42 += 16;
        }
        for (VAR11 = 0; VAR11 < VAR42; VAR11++)
        {
            uint64_t VAR45 = FUN9(VAR10->VAR46.VAR12[VAR11]);
            FUN5(VAR4, "" VAR47 "", VAR11 * 2, (VAR48)VAR45, VAR11 * 2 + 1, (VAR48)(VAR45 >> 32), VAR11, VAR45);
        }
        FUN5(VAR4, "", (int)VAR10->VAR46.VAR49[VAR50]);
    }
}