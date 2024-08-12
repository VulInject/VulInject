void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7, *VAR8, *VAR9;
    unsigned int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18;
    VAR7 = (VAR6 *)(VAR2->VAR19[VAR20] << 4);
    VAR10 = VAR2->VAR21 & 0xffff;
    VAR8 = VAR7 + VAR10;
    VAR9 = (VAR6 *)(VAR2->VAR19[VAR22] << 4);
    VAR11 = VAR2->VAR23[VAR24] & 0xffff;
    fprintf(VAR25, "", VAR2->VAR19[VAR20], VAR2->VAR21, VAR8[0], VAR8[1]);
    VAR17 = 0;
    VAR18 = 0;
    do
    {
        VAR15 = VAR7[VAR10];
        FUN2(VAR10, 1);
        switch (VAR15)
        {
        case 0x66:
            VAR17 = 1;
            break;
        case 0x67:
            break;
        case 0x2e:
            break;
        case 0x3e:
            break;
        case 0x26:
            break;
        case 0x36:
            break;
        case 0x65:
            break;
        case 0x64:
            break;
        case 0xf2:
            break;
        case 0xf3:
            break;
        default:
            VAR18 = 1;
        }
    } while (!VAR18);
    switch (VAR15)
    {
    case 0x9c:
        if (VAR17)
        {
            FUN3(VAR9, VAR11 - 4, FUN4(VAR2));
            FUN2(VAR2->VAR23[VAR24], -4);
        }
        else
        {
            FUN5(VAR9, VAR11 - 2, FUN4(VAR2));
            FUN2(VAR2->VAR23[VAR24], -2);
        }
        VAR2->VAR21 = VAR10;
        VAR26;
    case 0x9d:
        if (VAR17)
        {
            VAR12 = FUN6(VAR9, VAR11);
            FUN2(VAR2->VAR23[VAR24], 4);
        }
        else
        {
            VAR12 = FUN7(VAR9, VAR11);
            FUN2(VAR2->VAR23[VAR24], 2);
        }
        VAR2->VAR21 = VAR10;
        FUN8();
        if (VAR17)
        {
            if (FUN9(VAR12, VAR2))
                return;
        }
        else
        {
            if (FUN10(VAR12, VAR2))
                return;
        }
        VAR26;
    case 0xcd:
        VAR16 = VAR7[VAR10];
        FUN2(VAR10, 1);
        VAR2->VAR21 = VAR10;
        if (VAR4->VAR27.VAR27.VAR28 & VAR29)
        {
            if ((VAR4->VAR27.VAR27.VAR30[VAR16 >> 3] >> (VAR16 & 7)) & 1)
            {
                FUN11(VAR2, VAR31 + (VAR16 << 8));
                return;
            }
        }
        FUN12(VAR2, VAR16);
        break;
    case 0xcf:
        if (VAR17)
        {
            VAR13 = FUN6(VAR9, VAR11) & 0xffff;
            VAR14 = FUN6(VAR9, VAR11 + 4) & 0xffff;
            VAR12 = FUN6(VAR9, VAR11 + 8);
            FUN2(VAR2->VAR23[VAR24], 12);
        }
        else
        {
            VAR13 = FUN7(VAR9, VAR11);
            VAR14 = FUN7(VAR9, VAR11 + 2);
            VAR12 = FUN7(VAR9, VAR11 + 4);
            FUN2(VAR2->VAR23[VAR24], 6);
        }
        VAR2->VAR21 = VAR13;
        FUN13(VAR2, VAR20, VAR14);
        FUN8();
        if (VAR17)
        {
            if (FUN9(VAR12, VAR2))
                return;
        }
        else
        {
            if (FUN10(VAR12, VAR2))
                return;
        }
        VAR26;
    case 0xfa:
        VAR2->VAR21 = VAR10;
        FUN14(VAR2);
        VAR26;
    case 0xfb:
        VAR2->VAR21 = VAR10;
        if (FUN15(VAR2))
            return;
        VAR26;
    default:
        FUN11(VAR2, VAR32);
        break;
    }
}