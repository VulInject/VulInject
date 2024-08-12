static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR2;
    int VAR7 = VAR3;
    int VAR8, VAR9;
    struct VAR10 *VAR11 = NULL;
    if ((VAR7 & 0xf80) == 0x80)
    {
        VAR8 = (VAR7 & 0x60) >> 5;
        if (VAR8 < VAR6->VAR12)
        {
            VAR7 &= ~0x60;
            VAR11 = &VAR6->VAR11[VAR8];
        }
    }
    switch (VAR7)
    {
    case 0x00:
        return VAR6->VAR13;
    case 0x10:
        return (VAR6->VAR14 >> 2) & 1;
    case 0x14:
        return 1;
    case 0x40:
        return VAR6->VAR15[0];
    case 0x44:
        return VAR6->VAR15[1];
    case 0x48:
        return (!VAR6->VAR16) << 2;
    case 0x4c:
    case 0x50:
        return VAR6->VAR14 & 3;
    case 0x80:
        return VAR11->VAR17;
    case 0x84:
        return VAR11->VAR16;
    case 0x88:
    case 0x8c:
    case 0x90:
        return VAR11->VAR18;
    case 0x94:
    case 0x98:
        return VAR11->VAR19 & ~VAR11->VAR16 & ~VAR11->VAR20;
    case 0x9c:
        return VAR11->VAR19 & ~VAR11->VAR16 & VAR11->VAR20;
    case 0x100 ... 0x300:
        VAR8 = (VAR7 - 0x100) >> 7;
        if (VAR8 > VAR6->VAR12)
            break;
        VAR11 = &VAR6->VAR11[VAR8];
        VAR9 = (VAR7 & 0x7f) >> 2;
        return (VAR11->VAR21[VAR9] << 2) | ((VAR11->VAR20 >> VAR9) & 1);
    }