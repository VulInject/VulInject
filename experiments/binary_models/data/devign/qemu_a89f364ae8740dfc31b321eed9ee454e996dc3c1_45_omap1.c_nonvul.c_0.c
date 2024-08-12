static void FUN1(void *VAR1, hwaddr VAR2, uint32_t VAR3)
{
    struct VAR4 *VAR5 = (struct VAR4 *)VAR1;
    int VAR6 = VAR2 & VAR7;
    switch (VAR6)
    {
    case 0x00:
    case 0x02:
        FUN2(VAR2);
        return;
    case 0x04:
        if (((VAR5->VAR8[0] >> 5) & 7) < 3)
            return;
    case 0x06:
        if (VAR5->VAR9 > 1)
        {
            VAR5->VAR9 -= 2;
            if (VAR5->VAR10 && VAR5->VAR10->VAR11)
            {
                VAR5->VAR10->VAR12.VAR13[VAR5->VAR10->VAR12.VAR14++] = (VAR3 >> 8) & 0xff;
                VAR5->VAR10->VAR12.VAR13[VAR5->VAR10->VAR12.VAR14++] = (VAR3 >> 0) & 0xff;
            }
            if (VAR5->VAR9 < 2)
                FUN3(VAR5);
        }
        else
            FUN4("", VAR15);
        return;
    case 0x08:
        VAR5->VAR16[1] &= 0x0002;
        VAR5->VAR16[1] |= 0x03f9 & VAR3;
        VAR5->VAR16[1] |= 0x0004 & (VAR3 << 2);
        if (~VAR3 & 1)
            VAR5->VAR16[1] &= ~6;
        FUN5(VAR5);
        return;
    case 0x0a:
        VAR5->VAR16[0] &= 0x0006;
        VAR5->VAR16[0] |= 0xf8f9 & VAR3;
        if (VAR3 & (1 << 15))
            FUN4("", VAR15);
        if (~VAR3 & 1)
        {
            VAR5->VAR16[0] &= ~6;
            VAR5->VAR17 = 0;
            FUN6(VAR5);
        }
        FUN5(VAR5);
        return;
    case 0x0c:
        VAR5->VAR18[1] = VAR3 & 0xffff;
        return;
    case 0x0e:
        VAR5->VAR18[0] = VAR3 & 0x7fe0;
        return;
    case 0x10:
        VAR5->VAR8[1] = VAR3 & 0xffff;
        return;
    case 0x12:
        VAR5->VAR8[0] = VAR3 & 0x7fe0;
        return;
    case 0x14:
        VAR5->VAR19[1] = VAR3 & 0xffff;
        FUN5(VAR5);
        return;
    case 0x16:
        VAR5->VAR19[0] = VAR3 & 0xffff;
        FUN5(VAR5);
        return;
    case 0x18:
        VAR5->VAR20[1] = VAR3 & 0x03e3;
        if (VAR3 & 3)
            FUN4("", VAR15);
        return;
    case 0x1a:
        VAR5->VAR20[0] = VAR3 & 0x03e1;
        if (VAR3 & 1)
            FUN4("", VAR15);
        return;
    case 0x1c:
        VAR5->VAR21[0] = VAR3 & 0xffff;
        return;
    case 0x1e:
        VAR5->VAR21[1] = VAR3 & 0xffff;
        return;
    case 0x20:
        VAR5->VAR22[0] = VAR3 & 0xffff;
        return;
    case 0x22:
        VAR5->VAR22[1] = VAR3 & 0xffff;
        return;
    case 0x24:
        VAR5->VAR23 = VAR3 & 0x7faf;
        return;
    case 0x26:
        VAR5->VAR21[2] = VAR3 & 0xffff;
        return;
    case 0x28:
        VAR5->VAR21[3] = VAR3 & 0xffff;
        return;
    case 0x2a:
        VAR5->VAR22[2] = VAR3 & 0xffff;
        return;
    case 0x2c:
        VAR5->VAR22[3] = VAR3 & 0xffff;
        return;
    case 0x2e:
        VAR5->VAR21[4] = VAR3 & 0xffff;
        return;
    case 0x30:
        VAR5->VAR21[5] = VAR3 & 0xffff;
        return;
    case 0x32:
        VAR5->VAR22[4] = VAR3 & 0xffff;
        return;
    case 0x34:
        VAR5->VAR22[5] = VAR3 & 0xffff;
        return;
    case 0x36:
        VAR5->VAR21[6] = VAR3 & 0xffff;
        return;
    case 0x38:
        VAR5->VAR21[7] = VAR3 & 0xffff;
        return;
    case 0x3a:
        VAR5->VAR22[6] = VAR3 & 0xffff;
        return;
    case 0x3c:
        VAR5->VAR22[7] = VAR3 & 0xffff;
        return;
    }
    FUN7(VAR2);
}