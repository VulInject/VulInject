VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    target_ulong VAR5 = 0;
    switch (VAR4)
    {
    case 0:
        VAR5 = (VAR6)VAR3->VAR7.VAR8;
        break;
    case 1:
        if (VAR3->VAR7.VAR8 & (1 << VAR9))
        {
            if (VAR3->VAR10 & (1 << VAR11))
            {
                VAR5 = (VAR6)((VAR3->VAR12 & (1 << VAR13)) >> VAR13);
            }
            else
            {
                FUN2(VAR3, VAR14);
            }
        }
        break;
    case 25:
        VAR5 = ((VAR3->VAR7.VAR15 >> 24) & 0xfe) | ((VAR3->VAR7.VAR15 >> 23) & 0x1);
        break;
    case 26:
        VAR5 = VAR3->VAR7.VAR15 & 0x0003f07c;
        break;
    case 28:
        VAR5 = (VAR3->VAR7.VAR15 & 0x00000f83) | ((VAR3->VAR7.VAR15 >> 22) & 0x4);
        break;
    default:
        VAR5 = (VAR6)VAR3->VAR7.VAR15;
        break;
    }
    return VAR5;
}