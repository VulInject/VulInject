static VAR1 FUN1(VAR2 *VAR3, target_phys_addr_t VAR4, int VAR5, int VAR6)
{
    target_phys_addr_t VAR7;
    uint32_t VAR8;
    VAR9 *VAR10;
    FUN2("" VAR11 "", VAR12, VAR4);
    VAR8 = -1;
    if (!VAR3->VAR13)
    {
        if (VAR3->VAR14 == 0)
            FUN3(VAR3, 1);
    }
    VAR4 &= VAR3->VAR15 - 1;
    VAR7 = VAR4 & 0xFF;
    if (VAR3->VAR5 == 2)
        VAR7 = VAR7 >> 1;
    else if (VAR3->VAR5 == 4)
        VAR7 = VAR7 >> 2;
    switch (VAR3->VAR16)
    {
    default:
        FUN2("", VAR12, VAR3->VAR16);
        VAR3->VAR14 = 0;
        VAR3->VAR16 = 0;
    case 0x80:
    case 0x00:
    VAR17:
        VAR10 = VAR3->VAR18;
        switch (VAR5)
        {
        case 1:
            VAR8 = VAR10[VAR4];
            break;
        case 2:
            if (VAR6)
            {
                VAR8 = VAR10[VAR4] << 8;
                VAR8 |= VAR10[VAR4 + 1];
            }
            else
            {
                VAR8 = VAR10[VAR4];
                VAR8 |= VAR10[VAR4 + 1] << 8;
            }
            break;
        case 4:
            if (VAR6)
            {
                VAR8 = VAR10[VAR4] << 24;
                VAR8 |= VAR10[VAR4 + 1] << 16;
                VAR8 |= VAR10[VAR4 + 2] << 8;
                VAR8 |= VAR10[VAR4 + 3];
            }
            else
            {
                VAR8 = VAR10[VAR4];
                VAR8 |= VAR10[VAR4 + 1] << 8;
                VAR8 |= VAR10[VAR4 + 2] << 16;
                VAR8 |= VAR10[VAR4 + 3] << 24;
            }
            break;
        }
        break;
    case 0x90:
        switch (VAR7)
        {
        case 0x00:
        case 0x01:
            VAR8 = VAR3->VAR19[VAR7 & 0x01];
            break;
        case 0x02:
            VAR8 = 0x00;
            break;
        case 0x0E:
        case 0x0F:
            if (VAR3->VAR19[2 + (VAR7 & 0x01)] == (VAR9)-1)
                goto VAR17;
            VAR8 = VAR3->VAR19[2 + (VAR7 & 0x01)];
            break;
        default:
            goto VAR17;
        }
        FUN2("" VAR20 "", VAR12, VAR7, VAR8);
        break;
    case 0xA0:
    case 0x10:
    case 0x30:
        VAR8 = VAR3->VAR21;
        FUN2("", VAR12, VAR8);
        VAR3->VAR21 ^= 0x40;
        break;
    case 0x98:
        if (VAR7 > VAR3->VAR22)
            VAR8 = 0;
        else
            VAR8 = VAR3->VAR23[VAR7];
        break;
    }
    return VAR8;
}