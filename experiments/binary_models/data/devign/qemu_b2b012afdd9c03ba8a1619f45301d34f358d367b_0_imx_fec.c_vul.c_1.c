static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = FUN2(VAR1);
    uint32_t VAR7 = VAR2 >> 2;
    FUN3("" VAR8 "", FUN4(VAR6, VAR7), (VAR9)VAR3);
    switch (VAR7)
    {
    case VAR10:
        VAR6->VAR11[VAR7] &= ~VAR3;
        break;
    case VAR12:
        VAR6->VAR11[VAR7] = VAR3;
        break;
    case VAR13:
        if (VAR6->VAR11[VAR14] & VAR15)
        {
            if (!VAR6->VAR11[VAR7])
            {
                VAR6->VAR11[VAR7] = VAR16;
                FUN5(VAR6);
            }
        }
        else
        {
            VAR6->VAR11[VAR7] = 0;
        }
        break;
    case VAR17:
        if (VAR6->VAR11[VAR14] & VAR15)
        {
            VAR6->VAR11[VAR7] = VAR18;
            FUN6(VAR6);
        }
        VAR6->VAR11[VAR7] = 0;
        break;
    case VAR14:
        if (VAR3 & VAR19)
        {
            return FUN7(FUN8(VAR6));
        }
        VAR6->VAR11[VAR7] = VAR3;
        if ((VAR6->VAR11[VAR7] & VAR15) == 0)
        {
            VAR6->VAR11[VAR13] = 0;
            VAR6->VAR20 = VAR6->VAR11[VAR21];
            VAR6->VAR11[VAR17] = 0;
            VAR6->VAR22 = VAR6->VAR11[VAR23];
        }
        break;
    case VAR24:
        VAR6->VAR11[VAR7] = VAR3;
        if (FUN9(VAR3, 29, 1))
        {
            VAR6->VAR11[VAR24] = FUN10(VAR6->VAR11[VAR24], 0, 16, FUN11(VAR6, FUN9(VAR3, 18, 10)));
        }
        else
        {
            FUN12(VAR6, FUN9(VAR3, 18, 10), FUN9(VAR3, 0, 16));
        }
        VAR6->VAR11[VAR10] |= VAR25;
        break;
    case VAR26:
        VAR6->VAR11[VAR7] = VAR3 & 0xfe;
        break;
    case VAR27:
        VAR6->VAR11[VAR7] = (VAR3 & 0x80000000) ? 0xc0000000 : 0;
        break;
    case VAR28:
        VAR6->VAR11[VAR7] = VAR3 & 0x07ff003f;
        break;
    case VAR29:
        VAR6->VAR11[VAR7] = VAR3;
        if (VAR3 & 1)
        {
            VAR6->VAR11[VAR10] |= VAR30;
        }
        break;
    case VAR31:
        VAR6->VAR11[VAR7] = VAR3;
        VAR6->VAR32.VAR33.VAR34[0] = VAR3 >> 24;
        VAR6->VAR32.VAR33.VAR34[1] = VAR3 >> 16;
        VAR6->VAR32.VAR33.VAR34[2] = VAR3 >> 8;
        VAR6->VAR32.VAR33.VAR34[3] = VAR3;
        break;
    case VAR35:
        VAR6->VAR11[VAR7] = (VAR3 | 0x0000ffff) & 0xffff8808;
        VAR6->VAR32.VAR33.VAR34[4] = VAR3 >> 24;
        VAR6->VAR32.VAR33.VAR34[5] = VAR3 >> 16;
        break;
    case VAR36:
        VAR6->VAR11[VAR7] = (VAR3 & 0x0000ffff) | 0x00010000;
        break;
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
        break;
    case VAR41:
        if (VAR6->VAR42)
        {
            VAR6->VAR11[VAR7] = VAR3 & 0x3;
        }
        else
        {
            VAR6->VAR11[VAR7] = VAR3 & 0x13f;
        }
        break;
    case VAR21:
        if (VAR6->VAR42)
        {
            VAR6->VAR11[VAR7] = VAR3 & ~3;
        }
        else
        {
            VAR6->VAR11[VAR7] = VAR3 & ~7;
        }
        VAR6->VAR20 = VAR6->VAR11[VAR7];
        break;
    case VAR23:
        if (VAR6->VAR42)
        {
            VAR6->VAR11[VAR7] = VAR3 & ~3;
        }
        else
        {
            VAR6->VAR11[VAR7] = VAR3 & ~7;
        }
        VAR6->VAR22 = VAR6->VAR11[VAR7];
        break;
    case VAR43:
        VAR6->VAR11[VAR7] = VAR3 & 0x00003ff0;
        break;
    default:
        if (VAR6->VAR42)
        {
            FUN13(VAR6, VAR7, VAR3);
        }
        else
        {
            FUN14(VAR6, VAR7, VAR3);
        }
        return;
    }
    FUN15(VAR6);
}