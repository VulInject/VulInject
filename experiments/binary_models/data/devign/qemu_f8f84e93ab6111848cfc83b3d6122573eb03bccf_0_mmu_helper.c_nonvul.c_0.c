static int FUN1(VAR1 *VAR2, target_ulong VAR3, uint64_t VAR4, VAR5 *VAR6, int *VAR7, int VAR8)
{
    uint64_t VAR9 = 0;
    int VAR10;
    int VAR11;
    switch (VAR4)
    {
    case VAR12:
        FUN2("", VAR13);
        VAR9 = VAR2->VAR14[1];
        break;
    case VAR15:
        FUN2("", VAR13);
        VAR9 = VAR2->VAR14[7];
        break;
    case VAR16:
        FUN2("", VAR13);
        VAR9 = VAR2->VAR14[13];
        break;
    }
    if (VAR9 & VAR17)
    {
        *VAR6 = VAR3;
        return 0;
    }
    VAR10 = VAR9 & VAR18;
    switch (VAR10)
    {
    case VAR19:
        break;
    case VAR20:
        if (VAR3 & 0xffe0000000000000ULL)
        {
            FUN3("" VAR21 "", VAR13, VAR3);
            FUN4(VAR2, VAR3, VAR22, VAR4, VAR8);
            return -1;
        }
        break;
    case VAR23:
        if (VAR3 & 0xfffffc0000000000ULL)
        {
            FUN3("" VAR21 "", VAR13, VAR3);
            FUN4(VAR2, VAR3, VAR22, VAR4, VAR8);
            return -1;
        }
        break;
    case VAR24:
        if (VAR3 & 0xffffffff80000000ULL)
        {
            FUN3("" VAR21 "", VAR13, VAR3);
            FUN4(VAR2, VAR3, VAR22, VAR4, VAR8);
            return -1;
        }
        break;
    }
    VAR11 = FUN5(VAR2, VAR3, VAR4, VAR9, VAR10, VAR6, VAR7, VAR8);
    if ((VAR8 == 1) && !(*VAR7 & VAR25))
    {
        FUN6(VAR2, VAR3, VAR4);
        return -1;
    }
    return VAR11;
}