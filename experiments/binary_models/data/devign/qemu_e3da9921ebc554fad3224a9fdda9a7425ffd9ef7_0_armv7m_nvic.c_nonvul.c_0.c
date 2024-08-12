static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6;
    uint32_t VAR7;
    int VAR8;
    switch (VAR4)
    {
    case 4:
        return (VAR3->VAR9 / 32) - 1;
    case 0x10:
        VAR7 = VAR3->VAR10.VAR11;
        VAR3->VAR10.VAR11 &= ~VAR12;
        return VAR7;
    case 0x14:
        return VAR3->VAR10.VAR13;
    case 0x18:
    {
        int64_t VAR14;
        if ((VAR3->VAR10.VAR11 & VAR15) == 0)
            return 0;
        VAR14 = FUN2(VAR16);
        if (VAR14 >= VAR3->VAR10.VAR17)
            return 0;
        VAR7 = ((VAR3->VAR10.VAR17 - (VAR14 + 1)) / FUN3(VAR3)) + 1;
        if (VAR7 > VAR3->VAR10.VAR13)
            VAR7 = 0;
        return VAR7;
    }
    case 0x1c:
        return 10000;
    case 0xd00:
        VAR6 = FUN4(VAR18);
        return VAR6->VAR19;
    case 0xd04:
        VAR7 = VAR3->VAR20.VAR21[0];
        if (VAR7 == 1023)
        {
            VAR7 = 0;
        }
        else if (VAR7 >= 32)
        {
            VAR7 -= 16;
        }
        if (VAR3->VAR20.VAR21[0] == 1023 || VAR3->VAR20.VAR22[VAR3->VAR20.VAR21[0]][0] == 1023)
        {
            VAR7 |= (1 << 11);
        }
        if (VAR3->VAR20.VAR23[0] != 1023)
            VAR7 |= (VAR3->VAR20.VAR23[0] << 12);
        for (VAR8 = 32; VAR8 < VAR3->VAR9; VAR8++)
        {
            if (VAR3->VAR20.VAR24[VAR8].VAR25)
            {
                VAR7 |= (1 << 22);
                break;
            }
        }
        if (VAR3->VAR20.VAR24[VAR26].VAR25)
            VAR7 |= (1 << 26);
        if (VAR3->VAR20.VAR24[VAR27].VAR25)
            VAR7 |= (1 << 28);
        if (VAR3->VAR20.VAR24[VAR28].VAR25)
            VAR7 |= (1 << 31);
        return VAR7;
    case 0xd08:
        VAR6 = FUN4(VAR18);
        return VAR6->VAR29.VAR30.VAR31;
    case 0xd0c:
        return 0xfa05000;
    case 0xd10:
        return 0;
    case 0xd14:
        return 0;
    case 0xd24:
        VAR7 = 0;
        if (VAR3->VAR20.VAR24[VAR32].VAR33)
            VAR7 |= (1 << 0);
        if (VAR3->VAR20.VAR24[VAR34].VAR33)
            VAR7 |= (1 << 1);
        if (VAR3->VAR20.VAR24[VAR35].VAR33)
            VAR7 |= (1 << 3);
        if (VAR3->VAR20.VAR24[VAR36].VAR33)
            VAR7 |= (1 << 7);
        if (VAR3->VAR20.VAR24[VAR37].VAR33)
            VAR7 |= (1 << 8);
        if (VAR3->VAR20.VAR24[VAR27].VAR33)
            VAR7 |= (1 << 10);
        if (VAR3->VAR20.VAR24[VAR26].VAR33)
            VAR7 |= (1 << 11);
        if (VAR3->VAR20.VAR24[VAR35].VAR25)
            VAR7 |= (1 << 12);
        if (VAR3->VAR20.VAR24[VAR32].VAR25)
            VAR7 |= (1 << 13);
        if (VAR3->VAR20.VAR24[VAR34].VAR25)
            VAR7 |= (1 << 14);
        if (VAR3->VAR20.VAR24[VAR36].VAR25)
            VAR7 |= (1 << 15);
        if (VAR3->VAR20.VAR24[VAR32].VAR38)
            VAR7 |= (1 << 16);
        if (VAR3->VAR20.VAR24[VAR34].VAR38)
            VAR7 |= (1 << 17);
        if (VAR3->VAR20.VAR24[VAR35].VAR38)
            VAR7 |= (1 << 18);
        return VAR7;
    case 0xd28:
        FUN5(VAR39, "");
        return 0;
    case 0xd2c:
    case 0xd30:
    case 0xd34:
    case 0xd38:
    case 0xd3c:
        FUN5(VAR39, "");
        return 0;
    case 0xd40:
        return 0x00000030;
    case 0xd44:
        return 0x00000200;
    case 0xd48:
        return 0x00100000;
    case 0xd4c:
        return 0x00000000;
    case 0xd50:
        return 0x00000030;
    case 0xd54:
        return 0x00000000;
    case 0xd58:
        return 0x00000000;
    case 0xd5c:
        return 0x00000000;
    case 0xd60:
        return 0x01141110;
    case 0xd64:
        return 0x02111000;
    case 0xd68:
        return 0x21112231;
    case 0xd6c:
        return 0x01111110;
    case 0xd70:
        return 0x01310102;
    default:
        FUN5(VAR40, "", VAR4);
        return 0;
    }
}