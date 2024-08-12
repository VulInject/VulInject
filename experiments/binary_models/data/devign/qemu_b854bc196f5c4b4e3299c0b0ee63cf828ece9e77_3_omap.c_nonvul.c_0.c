static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, uint16_t VAR5)
{
    switch (VAR4)
    {
    case 0x00:
        VAR2->VAR3[VAR3].VAR6[1] = (VAR5 & 0xc000) >> 14;
        VAR2->VAR3[VAR3].VAR7[1] = (VAR5 & 0x2000) >> 13;
        VAR2->VAR3[VAR3].VAR8[1] = (enum VAR9)((VAR5 & 0x1e00) >> 9);
        VAR2->VAR3[VAR3].VAR6[0] = (VAR5 & 0x0180) >> 7;
        VAR2->VAR3[VAR3].VAR7[0] = (VAR5 & 0x0040) >> 6;
        VAR2->VAR3[VAR3].VAR8[0] = (enum VAR9)((VAR5 & 0x003c) >> 2);
        VAR2->VAR3[VAR3].VAR10 = (1 << (VAR5 & 3));
        if (VAR2->VAR3[VAR3].VAR8[0] >= VAR11)
            FUN2("", VAR12, VAR2->VAR3[VAR3].VAR8[0]);
        if (VAR2->VAR3[VAR3].VAR8[1] >= VAR11)
            FUN2("", VAR12, VAR2->VAR3[VAR3].VAR8[1]);
        if ((VAR5 & 3) == 3)
            FUN2("", VAR12, VAR3);
        break;
    case 0x02:
        VAR2->VAR3[VAR3].VAR13[1] = (VAR14)((VAR5 & 0xc000) >> 14);
        VAR2->VAR3[VAR3].VAR13[0] = (VAR14)((VAR5 & 0x3000) >> 12);
        VAR2->VAR3[VAR3].VAR15 = (VAR5 & 0x0800) >> 11;
        VAR2->VAR3[VAR3].VAR16 = (VAR5 & 0x0200) >> 9;
        VAR2->VAR3[VAR3].VAR17 = (VAR5 & 0x0100) >> 8;
        VAR2->VAR3[VAR3].VAR18 = (VAR5 & 0x0040) >> 6;
        VAR2->VAR3[VAR3].VAR19 = (VAR5 & 0x0020) >> 5;
        VAR2->VAR3[VAR3].VAR20 = VAR5 & 0x001f;
        if (VAR5 & 0x0080)
        {
            if (VAR2->VAR3[VAR3].VAR21)
            {
                if (!VAR2->VAR3[VAR3].VAR22 && VAR2->VAR3[VAR3].VAR17 && VAR2->VAR3[VAR3].VAR15)
                    FUN3(VAR2, VAR3);
            }
            else
            {
                VAR2->VAR3[VAR3].VAR21 = 1;
                FUN3(VAR2, VAR3);
            }
            if (!VAR2->VAR3[VAR3].VAR20 || (VAR2->VAR23 & (1 << VAR2->VAR3[VAR3].VAR20)))
                FUN4(VAR2, VAR3, 0);
        }
        else
        {
            VAR2->VAR3[VAR3].VAR21 = 0;
            FUN5(VAR2, VAR3);
        }
        break;
    case 0x04:
        VAR2->VAR3[VAR3].VAR24 = VAR5 & 0x003f;
        break;
    case 0x06:
        return 1;
    case 0x08:
        VAR2->VAR3[VAR3].VAR25[0] &= 0xffff0000;
        VAR2->VAR3[VAR3].VAR25[0] |= VAR5;
        break;
    case 0x0a:
        VAR2->VAR3[VAR3].VAR25[0] &= 0x0000ffff;
        VAR2->VAR3[VAR3].VAR25[0] |= (VAR26)VAR5 << 16;
        break;
    case 0x0c:
        VAR2->VAR3[VAR3].VAR25[1] &= 0xffff0000;
        VAR2->VAR3[VAR3].VAR25[1] |= VAR5;
        break;
    case 0x0e:
        VAR2->VAR3[VAR3].VAR25[1] &= 0x0000ffff;
        VAR2->VAR3[VAR3].VAR25[1] |= (VAR26)VAR5 << 16;
        break;
    case 0x10:
        VAR2->VAR3[VAR3].VAR27 = VAR5 & 0xffff;
        break;
    case 0x12:
        VAR2->VAR3[VAR3].VAR28 = VAR5 & 0xffff;
        break;
    case 0x14:
        VAR2->VAR3[VAR3].VAR29 = VAR5 & 0xffff;
        break;
    case 0x16:
        VAR2->VAR3[VAR3].VAR30 = VAR5 & 0xffff;
        break;
    case 0x18:
        return 1;
    default:
        FUN6((unsigned long)VAR4);
    }
    return 0;
}