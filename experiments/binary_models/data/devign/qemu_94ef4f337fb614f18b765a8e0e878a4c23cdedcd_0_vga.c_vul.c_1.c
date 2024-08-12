void FUN1(VAR1 *VAR2, hwaddr VAR3, uint32_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    uint32_t VAR11, VAR12, VAR13;
    FUN2("" VAR14 "", VAR3, VAR4);
    VAR5 = (VAR2->VAR15[VAR16] >> 2) & 3;
    VAR3 &= 0x1ffff;
    switch (VAR5)
    {
    case 0:
        break;
    case 1:
        if (VAR3 >= 0x10000)
            return;
        VAR3 += VAR2->VAR17;
        break;
    case 2:
        VAR3 -= 0x10000;
        if (VAR3 >= 0x8000)
            return;
        break;
    default:
    case 3:
        VAR3 -= 0x18000;
        if (VAR3 >= 0x8000)
            return;
        break;
    }
    if (VAR2->VAR18[VAR19] & VAR20)
    {
        VAR6 = VAR3 & 3;
        VAR10 = (1 << VAR6);
        if (VAR2->VAR18[VAR21] & VAR10)
        {
            assert(VAR3 < VAR2->VAR22);
            VAR2->VAR23[VAR3] = VAR4;
            FUN2("" VAR14 "", VAR3);
            VAR2->VAR24 |= VAR10;
            FUN3(&VAR2->VAR25, VAR3, 1);
        }
    }
    else if (VAR2->VAR15[VAR26] & 0x10)
    {
        VAR6 = (VAR2->VAR15[VAR27] & 2) | (VAR3 & 1);
        VAR10 = (1 << VAR6);
        if (VAR2->VAR18[VAR21] & VAR10)
        {
            VAR3 = ((VAR3 & ~1) << 1) | VAR6;
            if (VAR3 >= VAR2->VAR22)
            {
                return;
            }
            VAR2->VAR23[VAR3] = VAR4;
            FUN2("" VAR14 "", VAR3);
            VAR2->VAR24 |= VAR10;
            FUN3(&VAR2->VAR25, VAR3, 1);
        }
    }
    else
    {
        VAR7 = VAR2->VAR15[VAR26] & 3;
        switch (VAR7)
        {
        default:
        case 0:
            VAR8 = VAR2->VAR15[VAR28] & 7;
            VAR4 = ((VAR4 >> VAR8) | (VAR4 << (8 - VAR8))) & 0xff;
            VAR4 |= VAR4 << 8;
            VAR4 |= VAR4 << 16;
            VAR13 = VAR29[VAR2->VAR15[VAR30]];
            VAR4 = (VAR4 & ~VAR13) | (VAR29[VAR2->VAR15[VAR31]] & VAR13);
            VAR12 = VAR2->VAR15[VAR32];
            break;
        case 1:
            VAR4 = VAR2->VAR33;
            goto VAR34;
        case 2:
            VAR4 = VAR29[VAR4 & 0x0f];
            VAR12 = VAR2->VAR15[VAR32];
            break;
        case 3:
            VAR8 = VAR2->VAR15[VAR28] & 7;
            VAR4 = (VAR4 >> VAR8) | (VAR4 << (8 - VAR8));
            VAR12 = VAR2->VAR15[VAR32] & VAR4;
            VAR4 = VAR29[VAR2->VAR15[VAR31]];
            break;
        }
        VAR9 = VAR2->VAR15[VAR28] >> 3;
        switch (VAR9)
        {
        case 0:
        default:
            break;
        case 1:
            VAR4 &= VAR2->VAR33;
            break;
        case 2:
            VAR4 |= VAR2->VAR33;
            break;
        case 3:
            VAR4 ^= VAR2->VAR33;
            break;
        }
        VAR12 |= VAR12 << 8;
        VAR12 |= VAR12 << 16;
        VAR4 = (VAR4 & VAR12) | (VAR2->VAR33 & ~VAR12);
    VAR34:
        VAR10 = VAR2->VAR18[VAR21];
        VAR2->VAR24 |= VAR10;
        VAR11 = VAR29[VAR10];
        if (VAR3 * sizeof(VAR35) >= VAR2->VAR22)
        {
            return;
        }
        ((VAR35 *)VAR2->VAR23)[VAR3] = (((VAR35 *)VAR2->VAR23)[VAR3] & ~VAR11) | (VAR4 & VAR11);
        FUN2("" VAR14 "", VAR3 * 4, VAR11, VAR4);
        FUN3(&VAR2->VAR25, VAR3 << 2, sizeof(VAR35));
    }
}