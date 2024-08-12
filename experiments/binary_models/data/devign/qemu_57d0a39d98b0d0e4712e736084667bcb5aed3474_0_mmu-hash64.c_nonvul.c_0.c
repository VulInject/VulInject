static int FUN1(VAR1 *VAR2, VAR3 *VAR4, ppc_hash_pte64_t VAR5)
{
    unsigned VAR6, VAR7;
    int VAR8 = 0;
    VAR7 = !!(VAR9 ? (VAR4->VAR10 & VAR11) : (VAR4->VAR10 & VAR12));
    VAR6 = (VAR5.VAR13 & VAR14) | ((VAR5.VAR13 & VAR15) >> 61);
    if (VAR7 == 0)
    {
        switch (VAR6)
        {
        case 0x0:
        case 0x1:
        case 0x2:
            VAR8 = VAR16 | VAR17;
            break;
        case 0x3:
        case 0x6:
            VAR8 = VAR16;
            break;
        }
    }
    else
    {
        switch (VAR6)
        {
        case 0x0:
        case 0x6:
            VAR8 = 0;
            break;
        case 0x1:
        case 0x3:
            VAR8 = VAR16;
            break;
        case 0x2:
            VAR8 = VAR16 | VAR17;
            break;
        }
    }
    if (!(VAR5.VAR13 & VAR18) || (VAR5.VAR13 & VAR19) || (VAR4->VAR10 & VAR20))
    {
        VAR8 |= VAR21;
    }
    return VAR8;
}