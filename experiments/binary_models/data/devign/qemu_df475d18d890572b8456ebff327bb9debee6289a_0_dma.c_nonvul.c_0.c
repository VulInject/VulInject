static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    struct VAR4 *VAR5 = VAR1;
    int VAR6, VAR7;
    VAR6 = (VAR2 >> VAR5->VAR8) & 0x0f;
    switch (VAR6)
    {
    case 8:
        if ((VAR3 != 0) && (VAR3 & VAR9))
        {
            FUN2("", VAR3);
            return;
        }
        VAR5->VAR10 = VAR3;
        break;
    case 9:
        VAR7 = VAR3 & 3;
        if (VAR3 & 4)
        {
            VAR5->VAR11 |= 1 << (VAR7 + 4);
        }
        else
        {
            VAR5->VAR11 &= ~(1 << (VAR7 + 4));
        }
        VAR5->VAR11 &= ~(1 << VAR7);
        break;
    case 0xa:
        if (VAR3 & 4)
            VAR5->VAR12 |= 1 << (VAR3 & 3);
        else
            VAR5->VAR12 &= ~(1 << (VAR3 & 3));
        break;
    case 0xb:
    {
        VAR7 = VAR3 & 3;
        int VAR13;
        int VAR14;
        int VAR15;
        int VAR16;
        VAR13 = (VAR3 >> 2) & 3;
        VAR14 = (VAR3 >> 4) & 1;
        VAR15 = (VAR3 >> 5) & 1;
        VAR16 = (VAR3 >> 6) & 3;
        FUN3("", VAR7, VAR13, VAR14, VAR15, VAR16);
        VAR5->VAR17[VAR7].VAR18 = VAR3;
        break;
    }
    case 0xc:
        VAR5->VAR19 = 0;
        break;
    case 0xd:
        VAR5->VAR19 = 0;
        VAR5->VAR12 = ~0;
        VAR5->VAR11 = 0;
        VAR5->VAR10 = 0;
        break;
    case 0xe:
        VAR5->VAR12 = 0;
        break;
    case 0xf:
        VAR5->VAR12 = VAR3;
        break;
    default:
        FUN2("", VAR6);
        break;
    }
    if (0xc != VAR6)
    {
        FUN3("", VAR2, VAR7, VAR3);
    }
}