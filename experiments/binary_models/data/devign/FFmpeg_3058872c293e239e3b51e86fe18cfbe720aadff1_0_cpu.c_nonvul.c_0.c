int FUN1(void)
{
    ULONG VAR1 = 0;
    extern struct VAR2 *VAR3;
    VAR3->FUN2(VAR4, &VAR1, VAR5);
    if (VAR1 == VAR6)
        return VAR7;
    return 0;
    int VAR8[2] = {VAR9, VAR10};
    int VAR8[2] = {VAR11, VAR12};
    int VAR13 = 0;
    size_t VAR14 = sizeof(VAR13);
    int VAR15;
    VAR15 = FUN3(VAR8, 2, &VAR13, &VAR14, NULL, 0);
    if (VAR15 == 0)
        return VAR13 ? VAR7 : 0;
    return 0;
    int VAR16, VAR17 = 0;
    int VAR18 = open("", VAR19);
    unsigned long VAR20[64] = {0};
    ssize_t VAR21;
    if (VAR18 < 0)
        return 0;
    while ((VAR21 = read(VAR18, VAR20, sizeof(VAR20))) > 0)
    {
        for (VAR16 = 0; VAR16 < VAR21 / sizeof(*VAR20); VAR16 += 2)
        {
            if (VAR20[VAR16] == VAR22)
                goto VAR23;
            if (VAR20[VAR16] == VAR24)
            {
                if (VAR20[VAR16 + 1] & VAR25)
                    VAR17 = VAR7;
                goto VAR23;
            }
        }
    }
VAR23:
    close(VAR18);
    return VAR17;
    int VAR26;
    VAR27 volatile(""
                     : ""(VAR26));
    VAR26 >>= 16;
    if (VAR26 & 0x8000 || VAR26 == VAR28 || VAR26 == VAR29 || VAR26 == VAR30 || VAR26 == VAR31 || VAR26 == VAR32 || VAR26 == VAR33 || VAR26 == VAR34 || VAR26 == VAR35 || VAR26 == VAR36)
        return VAR7;
    return 0;
    return VAR7;
    return 0;
}