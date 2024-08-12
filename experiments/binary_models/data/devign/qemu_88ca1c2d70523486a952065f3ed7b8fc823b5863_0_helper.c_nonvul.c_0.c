void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    uint32_t VAR7;
    uint32_t VAR8;
    int VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    assert(!FUN3(VAR6));
    FUN4(VAR2->VAR12);
    if (FUN5(VAR4, VAR2->VAR12))
    {
        FUN6(VAR4);
        FUN7(VAR13, "");
        return;
    }
    switch (VAR6->VAR14.VAR15 >> VAR16)
    {
    case VAR17:
    case VAR18:
        VAR11 = 1;
        break;
    case VAR19:
    case VAR20:
        VAR11 = 10;
        break;
    case VAR21:
        VAR11 = 3;
        break;
    case VAR22:
        VAR11 = 5;
        break;
    default:
        VAR11 = 0;
        break;
    }
    if (VAR11)
    {
        VAR6->VAR23.VAR24 = FUN8(VAR6->VAR23.VAR24, 2, 4, VAR11);
    }
    switch (VAR2->VAR12)
    {
    case VAR25:
        VAR9 = VAR26;
        VAR7 = 0x04;
        VAR8 = VAR27;
        if (VAR6->VAR28)
            VAR10 = 2;
        else
            VAR10 = 4;
        break;
    case VAR29:
        if (VAR30)
        {
            if (VAR6->VAR28)
            {
                VAR8 = FUN9(VAR6, VAR6->VAR31[15] - 2, VAR6->VAR32) & 0xff;
            }
            else
            {
                VAR8 = FUN10(VAR6, VAR6->VAR31[15] - 4, VAR6->VAR32) & 0xffffff;
            }
            if (((VAR8 == 0x123456 && !VAR6->VAR28) || (VAR8 == 0xab && VAR6->VAR28)) && (VAR6->VAR33 & VAR34) != VAR35)
            {
                VAR6->VAR31[0] = FUN11(VAR6);
                FUN7(VAR13, "");
                return;
            }
        }
        VAR9 = VAR36;
        VAR7 = 0x08;
        VAR8 = VAR27;
        VAR10 = 0;
        break;
    case VAR37:
        if (VAR6->VAR28 && VAR30)
        {
            VAR8 = FUN9(VAR6, VAR6->VAR31[15], VAR6->VAR32) & 0xff;
            if (VAR8 == 0xab && (VAR6->VAR33 & VAR34) != VAR35)
            {
                VAR6->VAR31[15] += 2;
                VAR6->VAR31[0] = FUN11(VAR6);
                FUN7(VAR13, "");
                return;
            }
        }
        VAR6->VAR14.VAR38 = 2;
    case VAR39:
        FUN12(VAR6, VAR40, VAR6->VAR14.VAR38);
        VAR6->VAR23.VAR41[1] = FUN8(VAR6->VAR23.VAR41[1], 32, 32, VAR6->VAR14.VAR42);
        FUN7(VAR13, "", VAR6->VAR14.VAR38, (VAR43)VAR6->VAR14.VAR42);
        VAR9 = VAR44;
        VAR7 = 0x0c;
        VAR8 = VAR45 | VAR27;
        VAR10 = 4;
        break;
    case VAR46:
        VAR6->VAR23.VAR47[1] = VAR6->VAR14.VAR38;
        VAR6->VAR23.VAR41[1] = FUN8(VAR6->VAR23.VAR41[1], 0, 32, VAR6->VAR14.VAR42);
        FUN7(VAR13, "", (VAR43)VAR6->VAR23.VAR47[1], (VAR43)VAR6->VAR14.VAR42);
        VAR9 = VAR44;
        VAR7 = 0x10;
        VAR8 = VAR45 | VAR27;
        VAR10 = 8;
        break;
    case VAR48:
        VAR9 = VAR49;
        VAR7 = 0x18;
        VAR8 = VAR45 | VAR27;
        VAR10 = 4;
        if (VAR6->VAR23.VAR50 & VAR51)
        {
            VAR9 = VAR52;
            VAR8 |= VAR53;
        }
        break;
    case VAR54:
        VAR9 = VAR55;
        VAR7 = 0x1c;
        VAR8 = VAR45 | VAR27 | VAR53;
        if (VAR6->VAR23.VAR50 & VAR56)
        {
            VAR9 = VAR52;
        }
        VAR10 = 4;
        break;
    case VAR57:
        VAR9 = VAR52;
        VAR7 = 0x08;
        VAR8 = VAR45 | VAR27 | VAR53;
        VAR10 = 0;
        break;
    default:
        FUN13(VAR2, "", VAR2->VAR12);
        return;
    }
    if (VAR9 == VAR52)
    {
        VAR7 += VAR6->VAR23.VAR58;
    }
    else if (FUN14(VAR6, VAR59) & VAR60)
    {
        VAR7 += 0xffff0000;
    }
    else
    {
        VAR7 += VAR6->VAR23.VAR61[1];
    }
    if ((VAR6->VAR33 & VAR34) == VAR52)
    {
        VAR6->VAR23.VAR50 &= ~VAR62;
    }
    FUN15(VAR6, VAR9);
    VAR6->VAR33 &= ~VAR63;
    VAR6->VAR64 = FUN16(VAR6);
    VAR6->VAR65 = 0;
    VAR6->VAR33 = (VAR6->VAR33 & ~VAR34) | VAR9;
    VAR6->VAR66 |= VAR8;
    if (FUN17(VAR6, VAR67))
    {
        VAR6->VAR28 = (FUN14(VAR6, VAR59) & VAR68) != 0;
    }
    VAR6->VAR31[14] = VAR6->VAR31[15] + VAR10;
    VAR6->VAR31[15] = VAR7;
    VAR2->VAR69 |= VAR70;
}