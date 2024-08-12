static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    VAR2 &= 0xff;
    if (VAR2 >= 0x20 && VAR2 < 0x40)
    {
        FUN2(VAR5, VAR3);
        return;
    }
    switch (VAR2)
    {
    case VAR6:
        VAR5->VAR7 = (VAR5->VAR7 & VAR8) | (VAR3 & VAR9);
        break;
    case VAR10:
        VAR5->VAR11 &= ~VAR3;
        break;
    case VAR12:
        VAR5->VAR13 = VAR3 & ~VAR14;
        VAR5->VAR11 |= VAR3 & VAR15;
        break;
    case VAR16:
        FUN3("", VAR3);
        VAR5->VAR17 = VAR3;
        break;
    case VAR18:
        if (VAR3 & 0x8000)
        {
            VAR5->VAR19 = 0;
            VAR5->VAR20 = 0;
            VAR5->VAR21 = VAR5->VAR22;
            VAR5->VAR23[VAR5->VAR22] = 0;
        }
        VAR5->VAR24 = VAR3 & 0xcfff1ff0;
        break;
    case VAR25:
        if (VAR3 & 0x8000)
        {
            VAR5->VAR26 = 0;
        }
        if (VAR3 & 0x4000)
        {
            VAR5->VAR27->VAR28 = VAR29;
            VAR5->VAR27->VAR30 = 0;
            VAR5->VAR27->VAR31 = 0xffffffff;
        }
        VAR5->VAR32 = VAR3 & 6;
        break;
    case VAR33:
        if (VAR3 & 1)
        {
            FUN4(&VAR5->VAR34.VAR35);
        }
        else
        {
            VAR5->VAR36 = VAR3 & 0x003f300;
        }
        break;
    case VAR37:
        if (VAR3 & 0x80000000)
        {
            VAR5->VAR38 = 0;
            VAR5->VAR39 = 0;
            if (VAR5->VAR40 == 0)
            {
                FUN5(VAR5);
                VAR5->VAR38 = 0;
                VAR5->VAR39 = 0;
            }
            VAR5->VAR41 += VAR5->VAR40;
            if (VAR5->VAR41 >= VAR5->VAR42)
            {
                VAR5->VAR41 -= VAR5->VAR42;
            }
        }
        break;
    case VAR43:
        if (VAR3 & 0x400)
        {
            FUN6(VAR5);
        }
        VAR5->VAR44 &= ~0x34e;
        VAR5->VAR44 |= (VAR3 & 0x34e);
        break;
    case VAR45:
        VAR5->VAR46 = VAR3 & 0x7777071f;
        break;
    case VAR47:
        if ((VAR5->VAR48 ^ VAR3) & VAR49)
        {
            if (VAR3 & VAR49)
            {
                FUN7(VAR5->VAR50, VAR3 & 0xffff);
                FUN8(VAR5->VAR50, 0);
            }
            else
            {
                FUN9(VAR5->VAR50);
                FUN7(VAR5->VAR50, 0xffff);
            }
        }
        VAR5->VAR48 = VAR3 & (VAR49 | 0xffff);
        break;
    case VAR51:
        VAR5->VAR52 = VAR3;
        break;
    case VAR53:
        VAR5->VAR54 = VAR3 & 0x4000000f;
        if (VAR3 & 0x80000000)
        {
            if (VAR3 & 0x40000000)
            {
                VAR5->VAR55 = FUN10(VAR5, VAR3 & 0xf);
                FUN3("", VAR3 & 0xf, VAR5->VAR55);
            }
            else
            {
                FUN3("", VAR3 & 0xf, VAR5->VAR55);
                FUN11(VAR5, VAR3 & 0xf, VAR5->VAR55);
            }
        }
        break;
    case VAR56:
        VAR5->VAR55 = VAR3;
        break;
    case VAR57:
        VAR5->VAR58 = VAR3 & 0x00ffffff;
        break;
    case VAR59:
        FUN12(VAR5, (VAR3 >> 28) & 7, VAR3 & 0xff);
        break;
    case VAR60:
        VAR5->VAR61 = VAR3 & 0xff;
        break;
    default:
        FUN13("", (int)VAR2, VAR3);
        break;
    }
    FUN14(VAR5);
}