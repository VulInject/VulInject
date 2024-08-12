static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR1;
    int VAR7 = VAR2 & VAR8;
    struct tm VAR9;
    time_t VAR10[2];
    if (VAR4 != 1)
    {
        return FUN2(VAR1, VAR2, VAR3);
    }
    switch (VAR7)
    {
    case 0x00:
        FUN3("", VAR3);
        VAR6->VAR10 -= VAR6->VAR11.VAR12;
        VAR6->VAR10 += FUN4(VAR3);
        return;
    case 0x04:
        FUN3("", VAR3);
        VAR6->VAR10 -= VAR6->VAR11.VAR13 * 60;
        VAR6->VAR10 += FUN4(VAR3) * 60;
        return;
    case 0x08:
        FUN3("", VAR3);
        VAR6->VAR10 -= VAR6->VAR11.VAR14 * 3600;
        if (VAR6->VAR15)
        {
            VAR6->VAR10 += (FUN4(VAR3 & 0x3f) & 12) * 3600;
            VAR6->VAR10 += ((VAR3 >> 7) & 1) * 43200;
        }
        else
            VAR6->VAR10 += FUN4(VAR3 & 0x3f) * 3600;
        return;
    case 0x0c:
        FUN3("", VAR3);
        VAR6->VAR10 -= VAR6->VAR11.VAR16 * 86400;
        VAR6->VAR10 += FUN4(VAR3) * 86400;
        return;
    case 0x10:
        FUN3("", VAR3);
        memcpy(&VAR9, &VAR6->VAR11, sizeof(VAR9));
        VAR9.VAR17 = FUN4(VAR3);
        VAR10[0] = FUN5(&VAR6->VAR11);
        VAR10[1] = FUN5(&VAR9);
        if (VAR10[0] != -1 && VAR10[1] != -1)
        {
            VAR6->VAR10 -= VAR10[0];
            VAR6->VAR10 += VAR10[1];
        }
        else
        {
            VAR6->VAR10 -= VAR6->VAR11.VAR17 * 2592000;
            VAR6->VAR10 += FUN4(VAR3) * 2592000;
        }
        return;
    case 0x14:
        FUN3("", VAR3);
        memcpy(&VAR9, &VAR6->VAR11, sizeof(VAR9));
        VAR9.VAR18 += FUN4(VAR3) - (VAR9.VAR18 % 100);
        VAR10[0] = FUN5(&VAR6->VAR11);
        VAR10[1] = FUN5(&VAR9);
        if (VAR10[0] != -1 && VAR10[1] != -1)
        {
            VAR6->VAR10 -= VAR10[0];
            VAR6->VAR10 += VAR10[1];
        }
        else
        {
            VAR6->VAR10 -= (VAR6->VAR11.VAR18 % 100) * 31536000;
            VAR6->VAR10 += FUN4(VAR3) * 31536000;
        }
        return;
    case 0x18:
        return;
    case 0x20:
        FUN3("", VAR3);
        VAR6->VAR19.VAR12 = FUN4(VAR3);
        FUN6(VAR6);
        return;
    case 0x24:
        FUN3("", VAR3);
        VAR6->VAR19.VAR13 = FUN4(VAR3);
        FUN6(VAR6);
        return;
    case 0x28:
        FUN3("", VAR3);
        if (VAR6->VAR15)
            VAR6->VAR19.VAR14 = ((FUN4(VAR3 & 0x3f)) % 12) + ((VAR3 >> 7) & 1) * 12;
        else
            VAR6->VAR19.VAR14 = FUN4(VAR3);
        FUN6(VAR6);
        return;
    case 0x2c:
        FUN3("", VAR3);
        VAR6->VAR19.VAR16 = FUN4(VAR3);
        FUN6(VAR6);
        return;
    case 0x30:
        FUN3("", VAR3);
        VAR6->VAR19.VAR17 = FUN4(VAR3);
        FUN6(VAR6);
        return;
    case 0x34:
        FUN3("", VAR3);
        VAR6->VAR19.VAR18 = FUN4(VAR3);
        FUN6(VAR6);
        return;
    case 0x40:
        FUN3("", VAR3);
        VAR6->VAR15 = (VAR3 >> 3) & 1;
        VAR6->VAR20 = (VAR3 >> 2) & 1;
        VAR6->VAR21 = (VAR3 >> 1) & 1;
        VAR6->VAR22 = VAR3 & 1;
        VAR6->VAR23 &= 0xfd;
        VAR6->VAR23 |= VAR6->VAR22 << 1;
        return;
    case 0x44:
        FUN3("", VAR3);
        VAR6->VAR23 &= ~((VAR3 & 0xc0) ^ 0x80);
        FUN7(VAR6);
        return;
    case 0x48:
        FUN3("", VAR3);
        VAR6->VAR24 = VAR3;
        return;
    case 0x4c:
        FUN3("", VAR3);
        VAR6->VAR25 &= 0xff00;
        VAR6->VAR25 |= 0x00ff & VAR3;
        return;
    case 0x50:
        FUN3("", VAR3);
        VAR6->VAR25 &= 0x00ff;
        VAR6->VAR25 |= 0xff00 & (VAR3 << 8);
        return;
    default:
        FUN8(VAR2);
        return;
    }
}