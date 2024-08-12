static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    if (VAR4 >= 0x80 && VAR4 < 0xC0)
    {
        switch (VAR4)
        {
        case 0x86:
            break;
        case 0x9E:
            FUN2(VAR5[VAR6], VAR7);
            break;
        case 0x9F:
            FUN2(VAR7, VAR5[VAR8]);
            break;
        default:
            VAR4 &= 0xbf;
            goto VAR9;
        }
        return VAR10;
    }
    if (VAR4 < 0x40 && (VAR3->VAR11->VAR12 & VAR13) == 0)
    {
        switch (VAR4)
        {
        case 0x01:
            break;
        case 0x02:
            break;
        case 0x2D:
            FUN3(VAR5[VAR8], VAR14, FUN4(VAR15, VAR16));
            break;
        case 0x31:
            FUN2(VAR17, VAR5[VAR8]);
            break;
        case 0x32:
            FUN2(VAR5[VAR6], VAR17);
            break;
        case 0x35:
        {
            TCGv VAR18;
            FUN5(VAR5[VAR6], VAR14, FUN4(VAR15, VAR19));
            VAR18 = FUN6();
            FUN7(VAR18, VAR5[VAR8], VAR20);
            FUN8(VAR18, VAR14, FUN4(VAR15, VAR19));
            FUN9(VAR18);
            break;
        }
        case 0x36:
            FUN5(VAR5[VAR6], VAR14, FUN4(VAR15, VAR19));
            break;
        case 0x38:
            FUN2(VAR21, VAR5[VAR8]);
            break;
        case 0x3A:
            FUN2(VAR5[VAR6], VAR21);
            break;
        case 0x3C:
            FUN10(VAR5[VAR6], VAR14, -FUN4(VAR22, VAR23) + FUN4(VAR24, VAR25));
            break;
        default:
            VAR4 &= 0x3f;
            goto VAR9;
        }
        return VAR10;
    }
    return FUN11(VAR3);
VAR9:
    return FUN12(VAR3, VAR26, VAR4);
    {
        TCGv VAR27 = FUN13(VAR3->VAR27);
        TCGv VAR28 = FUN13(VAR4 & 0x80 ? 0x2000 + (VAR4 - 0x80) * 64 : 0x1000 + VAR4 * 64);
        FUN14(VAR14, VAR27, VAR28);
        FUN9(VAR28);
        FUN9(VAR27);
        if (!VAR3->VAR29 && !(VAR3->VAR11->VAR30 & VAR31))
        {
            FUN15(0);
            FUN16((VAR32)VAR3->VAR11);
            return VAR33;
        }
        return VAR34;
    }
}