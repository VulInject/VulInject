static int FUN1(VAR1 *VAR2, target_ulong VAR3, uint64_t VAR4, VAR5 *VAR6, int *VAR7, int VAR8, bool VAR9)
{
    uint64_t VAR10 = 0;
    int VAR11;
    int VAR12;
    switch (VAR4)
    {
    case VAR13:
        FUN2("", VAR14);
        VAR10 = VAR2->VAR15[1];
        break;
    case VAR16:
        FUN2("", VAR14);
        VAR10 = VAR2->VAR15[7];
        break;
    case VAR17:
        FUN2("", VAR14);
        VAR10 = VAR2->VAR15[13];
        break;
    }
    if (VAR10 & VAR18)
    {
        *VAR6 = VAR3;
        return 0;
    }
    VAR11 = VAR10 & VAR19;
    switch (VAR11)
    {
    case VAR20:
        if ((VAR3 >> 62) > (VAR10 & VAR21))
        {
            FUN3(VAR2, VAR3, VAR22, VAR4, VAR8, VAR9);
            return -1;
        }
        break;
    case VAR23:
        if (VAR3 & 0xffe0000000000000ULL)
        {
            FUN4("" VAR24 "", VAR14, VAR3);
            FUN3(VAR2, VAR3, VAR25, VAR4, VAR8, VAR9);
            return -1;
        }
        if ((VAR3 >> 51 & 3) > (VAR10 & VAR21))
        {
            FUN3(VAR2, VAR3, VAR26, VAR4, VAR8, VAR9);
            return -1;
        }
        break;
    case VAR27:
        if (VAR3 & 0xfffffc0000000000ULL)
        {
            FUN4("" VAR24 "", VAR14, VAR3);
            FUN3(VAR2, VAR3, VAR25, VAR4, VAR8, VAR9);
            return -1;
        }
        if ((VAR3 >> 40 & 3) > (VAR10 & VAR21))
        {
            FUN3(VAR2, VAR3, VAR28, VAR4, VAR8, VAR9);
            return -1;
        }
        break;
    case VAR29:
        if (VAR3 & 0xffffffff80000000ULL)
        {
            FUN4("" VAR24 "", VAR14, VAR3);
            FUN3(VAR2, VAR3, VAR25, VAR4, VAR8, VAR9);
            return -1;
        }
        if ((VAR3 >> 29 & 3) > (VAR10 & VAR21))
        {
            FUN3(VAR2, VAR3, VAR30, VAR4, VAR8, VAR9);
            return -1;
        }
        break;
    }
    VAR12 = FUN5(VAR2, VAR3, VAR4, VAR10, VAR11, VAR6, VAR7, VAR8, VAR9);
    if ((VAR8 == 1) && !(*VAR7 & VAR31))
    {
        FUN6(VAR2, VAR3, VAR4, VAR8, VAR9);
        return -1;
    }
    return VAR12;
}