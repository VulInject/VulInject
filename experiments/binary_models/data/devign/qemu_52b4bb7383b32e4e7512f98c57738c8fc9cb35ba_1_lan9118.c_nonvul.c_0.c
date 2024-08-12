static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    VAR2 &= 0xff;
    if (VAR2 >= 0x20 && VAR2 < 0x40)
    {
        FUN2(VAR6, VAR3);
        return;
    }
    switch (VAR2)
    {
    case VAR7:
        VAR3 &= (VAR8 | VAR9 | VAR10);
        VAR6->VAR11 = (VAR6->VAR11 & VAR12) | VAR3;
        break;
    case VAR13:
        VAR6->VAR14 &= ~VAR3;
        break;
    case VAR15:
        VAR6->VAR16 = VAR3 & ~VAR17;
        VAR6->VAR14 |= VAR3 & VAR18;
        break;
    case VAR19:
        FUN3("", VAR3);
        VAR6->VAR20 = VAR3;
        break;
    case VAR21:
        if (VAR3 & 0x8000)
        {
            VAR6->VAR22 = 0;
            VAR6->VAR23 = 0;
            VAR6->VAR24 = VAR6->VAR25;
            VAR6->VAR26[VAR6->VAR25] = 0;
        }
        VAR6->VAR27 = VAR3 & 0xcfff1ff0;
        break;
    case VAR28:
        if (VAR3 & 0x8000)
        {
            VAR6->VAR29 = 0;
        }
        if (VAR3 & 0x4000)
        {
            VAR6->VAR30->VAR31 = VAR32;
            VAR6->VAR30->VAR33 = 0;
            VAR6->VAR30->VAR34 = 0xffffffff;
        }
        VAR6->VAR35 = VAR3 & 6;
        break;
    case VAR36:
        if (VAR3 & 1)
        {
            FUN4(FUN5(VAR6));
        }
        else
        {
            VAR6->VAR37 = (VAR3 & 0x003f300) | (VAR6->VAR37 & 0x4);
        }
        break;
    case VAR38:
        if (VAR3 & 0x80000000)
        {
            VAR6->VAR39 = 0;
            VAR6->VAR40 = 0;
            if (VAR6->VAR41 == 0)
            {
                FUN6(VAR6);
                VAR6->VAR39 = 0;
                VAR6->VAR40 = 0;
            }
            VAR6->VAR42 += VAR6->VAR41;
            if (VAR6->VAR42 >= VAR6->VAR43)
            {
                VAR6->VAR42 -= VAR6->VAR43;
            }
        }
        break;
    case VAR44:
        if (VAR3 & 0x400)
        {
            FUN7(VAR6);
        }
        VAR6->VAR45 &= ~0x34e;
        VAR6->VAR45 |= (VAR3 & 0x34e);
        break;
    case VAR46:
        VAR6->VAR47 = VAR3 & 0x7777071f;
        break;
    case VAR48:
        if ((VAR6->VAR49 ^ VAR3) & VAR50)
        {
            if (VAR3 & VAR50)
            {
                FUN8(VAR6->VAR51, VAR3 & 0xffff);
                FUN9(VAR6->VAR51, 0);
            }
            else
            {
                FUN10(VAR6->VAR51);
                FUN8(VAR6->VAR51, 0xffff);
            }
        }
        VAR6->VAR49 = VAR3 & (VAR50 | 0xffff);
        break;
    case VAR52:
        VAR6->VAR53 = VAR3;
        break;
    case VAR54:
        VAR6->VAR55 = VAR3 & 0x4000000f;
        if (VAR3 & 0x80000000)
        {
            if (VAR3 & 0x40000000)
            {
                VAR6->VAR56 = FUN11(VAR6, VAR3 & 0xf);
                FUN3("", VAR3 & 0xf, VAR6->VAR56);
            }
            else
            {
                FUN3("", VAR3 & 0xf, VAR6->VAR56);
                FUN12(VAR6, VAR3 & 0xf, VAR6->VAR56);
            }
        }
        break;
    case VAR57:
        VAR6->VAR56 = VAR3;
        break;
    case VAR58:
        VAR6->VAR59 = VAR3 & 0x00ffffff;
        break;
    case VAR60:
        FUN13(VAR6, (VAR3 >> 28) & 7, VAR3 & 0x7f);
        break;
    case VAR61:
        VAR6->VAR62 = VAR3 & 0xff;
        break;
    default:
        FUN14(VAR63, "", (int)VAR2, (int)VAR3);
        break;
    }
    FUN15(VAR6);
}