static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    unsigned int VAR7 = VAR6->VAR8.VAR9;
    target_ulong VAR10 = VAR6->VAR11.VAR12[VAR7];
    unsigned int VAR13 = FUN3(VAR7, true);
    if (FUN4(VAR6) < VAR7)
    {
        bool VAR14;
        switch (VAR7)
        {
        case 3:
            VAR14 = (VAR6->VAR11.VAR15 & VAR16) != 0;
            break;
        case 2:
            VAR14 = (VAR6->VAR11.VAR17 & VAR18) != 0;
            break;
        case 1:
            VAR14 = FUN5(VAR6);
            break;
        default:
            FUN6();
        }
        if (VAR14)
        {
            VAR10 += 0x400;
        }
        else
        {
            VAR10 += 0x600;
        }
    }
    else if (FUN7(VAR6) & VAR19)
    {
        VAR10 += 0x200;
    }
    switch (VAR2->VAR20)
    {
    case VAR21:
    case VAR22:
        VAR6->VAR11.VAR23[VAR7] = VAR6->VAR8.VAR24;
        FUN8(VAR25, "" VAR26 "", VAR6->VAR11.VAR23[VAR7]);
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
        VAR6->VAR11.VAR33[VAR7] = VAR6->VAR8.VAR34;
        break;
    case VAR35:
    case VAR36:
        VAR10 += 0x80;
        break;
    case VAR37:
    case VAR38:
        VAR10 += 0x100;
        break;
    case VAR39:
        FUN8(VAR25, "" VAR26 "", VAR6->VAR40[0]);
        VAR6->VAR40[0] = FUN9(VAR6);
        return;
    default:
        FUN10(VAR2, "", VAR2->VAR20);
    }
    if (FUN5(VAR6))
    {
        VAR6->VAR41[FUN11(VAR7)] = FUN7(VAR6);
        FUN12(VAR6, FUN4(VAR6));
        VAR6->VAR42[VAR7] = VAR6->VAR43;
    }
    else
    {
        VAR6->VAR41[FUN11(VAR7)] = FUN13(VAR6);
        if (!VAR6->VAR44)
        {
            VAR6->VAR11.VAR33[VAR7] |= 1 << 25;
        }
        VAR6->VAR42[VAR7] = VAR6->VAR45[15];
        FUN14(VAR6);
        VAR6->VAR46 = 0;
    }
    FUN8(VAR25, "" VAR26 "", VAR6->VAR42[VAR7]);
    FUN15(VAR6, VAR47 | VAR13);
    VAR6->VAR48 = 1;
    FUN16(VAR6, VAR7);
    VAR6->VAR43 = VAR10;
    FUN8(VAR25, "" VAR26 "", VAR7, VAR6->VAR43, FUN7(VAR6));
}