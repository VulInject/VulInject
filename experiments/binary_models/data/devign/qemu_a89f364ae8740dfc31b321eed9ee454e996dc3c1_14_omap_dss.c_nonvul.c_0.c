static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR1;
    if (VAR4 != 4)
    {
        FUN2(VAR1, VAR2, VAR3);
        return;
    }
    switch (VAR2)
    {
    case 0x010:
        if (VAR3 & 2)
            FUN3(VAR6);
        VAR6->VAR7.VAR8 = VAR3 & 0x301b;
        break;
    case 0x018:
        VAR6->VAR7.VAR9 &= ~VAR3;
        FUN4(VAR6);
        break;
    case 0x01c:
        VAR6->VAR7.VAR10 = VAR3 & 0xffff;
        FUN4(VAR6);
        break;
    case 0x040:
        VAR6->VAR7.VAR11 = VAR3 & 0x07ff9fff;
        VAR6->VAR12.VAR13 = (VAR3 >> 1) & 1;
        VAR6->VAR14.VAR13 = (VAR3 >> 0) & 1;
        if (VAR3 & (1 << 12))
            if (!((VAR6->VAR7.VAR15[1].VAR16 | VAR6->VAR7.VAR15[2].VAR16) & 1))
            {
                fprintf(VAR17, ""
                                ""
                                "",
                        VAR18);
            }
        if (VAR3 & (1 << 6))
        {
        }
        if (VAR3 & (1 << 5))
        {
        }
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x044:
        VAR6->VAR7.VAR20 = VAR3 & 0x3fff;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x048:
        VAR6->VAR7.VAR21 = VAR3 & 0x3ff;
        break;
    case 0x04c:
        VAR6->VAR7.VAR22[0] = VAR3 & 0xffffff;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x050:
        VAR6->VAR7.VAR22[1] = VAR3 & 0xffffff;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x054:
        VAR6->VAR7.VAR23[0] = VAR3 & 0xffffff;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x058:
        VAR6->VAR7.VAR23[1] = VAR3 & 0xffffff;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x060:
        VAR6->VAR7.VAR24 = VAR3 & 0x7ff;
        break;
    case 0x064:
        VAR6->VAR7.VAR25[0] = VAR3 & 0x0ff0ff3f;
        break;
    case 0x068:
        VAR6->VAR7.VAR25[1] = VAR3 & 0x0ff0ff3f;
        break;
    case 0x06c:
        VAR6->VAR7.VAR25[2] = VAR3 & 0x0003ffff;
        break;
    case 0x070:
        VAR6->VAR7.VAR25[3] = VAR3 & 0x00ff00ff;
        break;
    case 0x078:
        VAR6->VAR12.VAR26 = ((VAR3 >> 0) & 0x7ff) + 1;
        VAR6->VAR12.VAR27 = ((VAR3 >> 16) & 0x7ff) + 1;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x07c:
        VAR6->VAR14.VAR26 = ((VAR3 >> 0) & 0x7ff) + 1;
        VAR6->VAR14.VAR27 = ((VAR3 >> 16) & 0x7ff) + 1;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x080:
        VAR6->VAR7.VAR15[0].VAR2[0] = (VAR28)VAR3;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x084:
        VAR6->VAR7.VAR15[0].VAR2[1] = (VAR28)VAR3;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x088:
        VAR6->VAR7.VAR15[0].VAR29 = ((VAR3 >> 0) & 0x7ff);
        VAR6->VAR7.VAR15[0].VAR30 = ((VAR3 >> 16) & 0x7ff);
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x08c:
        VAR6->VAR7.VAR15[0].VAR26 = ((VAR3 >> 0) & 0x7ff) + 1;
        VAR6->VAR7.VAR15[0].VAR27 = ((VAR3 >> 16) & 0x7ff) + 1;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x0a0:
        VAR6->VAR7.VAR15[0].VAR16 = VAR3 & 0x7ff;
        if (VAR3 & (3 << 9))
            fprintf(VAR17, "", VAR18);
        VAR6->VAR7.VAR15[0].VAR13 = VAR3 & 1;
        VAR6->VAR7.VAR15[0].VAR31 = (VAR3 >> 1) & 0xf;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x0a4:
        VAR6->VAR7.VAR15[0].VAR32 = VAR3 & 0x01ff01ff;
        break;
    case 0x0ac:
        VAR6->VAR7.VAR15[0].VAR33 = VAR3;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x0b0:
        VAR6->VAR7.VAR15[0].VAR34 = VAR3;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x0b4:
        VAR6->VAR7.VAR15[0].VAR35 = VAR3;
        break;
    case 0x0b8:
        VAR6->VAR7.VAR15[0].VAR2[2] = (VAR28)VAR3;
        VAR6->VAR7.VAR19 = 1;
        break;
    case 0x0bc:
    case 0x0c0:
    case 0x0c4:
    case 0x0c8:
    case 0x0cc:
    case 0x0d0:
    case 0x0d8:
    case 0x0dc:
    case 0x0e0:
    case 0x0e4:
    case 0x0e8:
    case 0x0ec:
    case 0x0f0 ... 0x140:
    case 0x14c:
    case 0x150:
    case 0x154:
    case 0x158:
    case 0x15c:
    case 0x160:
    case 0x168:
    case 0x16c:
    case 0x170:
    case 0x174:
    case 0x178:
    case 0x17c:
    case 0x180 ... 0x1d0:
    case 0x1d4:
    case 0x1d8:
    case 0x1dc:
        break;
    default:
        FUN5(VAR2);
    }
}