static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR7 *VAR8;
    uint16_t VAR9;
    VAR4 -= VAR6->VAR10;
    switch (VAR6->VAR11 & VAR12)
    {
    case VAR13:
        if ((VAR4 & ~0x3ff) == 0x400)
        {
            VAR4 = 0;
        }
        break;
    case VAR14:
        VAR4 &= 0xf;
        break;
    case VAR15:
        if ((VAR4 & ~0xf) == 0x3f0)
        {
            VAR4 -= 0x3e8;
        }
        else if ((VAR4 & ~0xf) == 0x1f0)
        {
            VAR4 -= 0x1f0;
        }
        break;
    case VAR16:
        if ((VAR4 & ~0xf) == 0x370)
        {
            VAR4 -= 0x368;
        }
        else if ((VAR4 & ~0xf) == 0x170)
        {
            VAR4 -= 0x170;
        }
    }
    switch (VAR4)
    {
    case 0x0:
    case 0x8:
        return FUN3(&VAR6->VAR17, 0);
        if (VAR6->VAR18)
        {
            VAR9 = VAR6->VAR19 >> 8;
        }
        else
        {
            VAR6->VAR19 = FUN3(&VAR6->VAR17, 0);
            VAR9 = VAR6->VAR19 & 0xff;
        }
        VAR6->VAR18 = !VAR6->VAR18;
        return VAR9;
    case 0x9:
        return VAR6->VAR19 >> 8;
    case 0xd:
        return FUN4(&VAR6->VAR17, 0x1);
    case 0xe:
        VAR8 = FUN5(&VAR6->VAR17);
        if (VAR8->VAR20)
        {
            return VAR8->VAR21;
        }
        else
        {
            return 0;
        }
    case 0xf:
        VAR8 = FUN5(&VAR6->VAR17);
        return 0xc2 | ((~VAR8->VAR22 << 2) & 0x3c);
    default:
        return FUN4(&VAR6->VAR17, VAR4);
    }
    return 0;
}