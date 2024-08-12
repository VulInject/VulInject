static int FUN1(VAR1 *VAR2, VAR3 *VAR4, ppc_hash_pte64_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    unsigned VAR8, VAR9;
    int VAR10 = 0;
    VAR9 = !!(VAR11 ? (VAR4->VAR12 & VAR13) : (VAR4->VAR12 & VAR14));
    VAR8 = (VAR5.VAR15 & VAR16) | ((VAR5.VAR15 & VAR17) >> 61);
    if (VAR9 == 0)
    {
        switch (VAR8)
        {
        case 0x0:
        case 0x1:
        case 0x2:
            VAR10 = VAR18 | VAR19 | VAR20;
            break;
        case 0x3:
        case 0x6:
            VAR10 = VAR18 | VAR20;
            break;
        }
    }
    else
    {
        switch (VAR8)
        {
        case 0x0:
        case 0x6:
            break;
        case 0x1:
        case 0x3:
            VAR10 = VAR18 | VAR20;
            break;
        case 0x2:
            VAR10 = VAR18 | VAR19 | VAR20;
            break;
        }
    }
    if (!(VAR5.VAR15 & VAR21) || (VAR5.VAR15 & VAR22) || (VAR4->VAR12 & VAR23))
    {
        VAR10 |= VAR20;
    }
    return VAR10;
}