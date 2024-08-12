static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR2;
    int VAR7 = VAR3 & VAR8;
    uint16_t VAR9;
    if (VAR4 != 2)
    {
        return FUN2(VAR2, VAR3);
    }
    switch (VAR7)
    {
    case 0x00:
        if (((VAR6->VAR10[0] >> 5) & 7) < 3)
            return 0x0000;
    case 0x02:
        if (VAR6->VAR11 < 2)
        {
            FUN3("", VAR12);
            FUN4(VAR6);
        }
        else
        {
            VAR6->VAR13 -= 2;
            if (VAR6->VAR14 && VAR6->VAR14->VAR15.VAR16 >= 2)
            {
                VAR9 = VAR6->VAR14->VAR15.VAR17[VAR6->VAR14->VAR15.VAR18++] << 8;
                VAR9 |= VAR6->VAR14->VAR15.VAR17[VAR6->VAR14->VAR15.VAR18++];
                VAR6->VAR14->VAR15.VAR16 -= 2;
            }
            else
                VAR9 = 0x0000;
            if (!VAR6->VAR13)
                FUN4(VAR6);
            return VAR9;
        }
        return 0x0000;
    case 0x04:
    case 0x06:
        return 0x0000;
    case 0x08:
        return VAR6->VAR19[1];
    case 0x0a:
        return VAR6->VAR19[0];
    case 0x0c:
        return VAR6->VAR10[1];
    case 0x0e:
        return VAR6->VAR10[0];
    case 0x10:
        return VAR6->VAR20[1];
    case 0x12:
        return VAR6->VAR20[0];
    case 0x14:
        return VAR6->VAR21[1];
    case 0x16:
        return VAR6->VAR21[0];
    case 0x18:
        return VAR6->VAR22[1];
    case 0x1a:
        return VAR6->VAR22[0];
    case 0x1c:
        return VAR6->VAR23[0];
    case 0x1e:
        return VAR6->VAR23[1];
    case 0x20:
        return VAR6->VAR24[0];
    case 0x22:
        return VAR6->VAR24[1];
    case 0x24:
        return VAR6->VAR25;
    case 0x26:
        return VAR6->VAR23[2];
    case 0x28:
        return VAR6->VAR23[3];
    case 0x2a:
        return VAR6->VAR24[2];
    case 0x2c:
        return VAR6->VAR24[3];
    case 0x2e:
        return VAR6->VAR23[4];
    case 0x30:
        return VAR6->VAR23[5];
    case 0x32:
        return VAR6->VAR24[4];
    case 0x34:
        return VAR6->VAR24[5];
    case 0x36:
        return VAR6->VAR23[6];
    case 0x38:
        return VAR6->VAR23[7];
    case 0x3a:
        return VAR6->VAR24[6];
    case 0x3c:
        return VAR6->VAR24[7];
    }
    FUN5(VAR3);
    return 0;
}