static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    TCGv VAR11, VAR12;
    if ((VAR5 & 0x0ff00f10) == 0x0e200010)
    {
        VAR7 = (VAR5 >> 12) & 0xf;
        VAR8 = VAR5 & 0xf;
        VAR6 = (VAR5 >> 5) & 7;
        if (VAR6 != 0)
            return 1;
        VAR11 = FUN2(VAR4, VAR7);
        VAR12 = FUN2(VAR4, VAR8);
        switch ((VAR5 >> 16) & 0xf)
        {
        case 0x0:
            FUN3(VAR13, VAR13, VAR11, VAR12);
            break;
        case 0x8:
            FUN4(VAR13, VAR13, VAR11, VAR12);
            break;
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
            if (VAR5 & (1 << 16))
                FUN5(VAR11, VAR11, 16);
            if (VAR5 & (1 << 17))
                FUN5(VAR12, VAR12, 16);
            FUN6(VAR13, VAR13, VAR11, VAR12);
            break;
        default:
            return 1;
        }
        FUN7(VAR12);
        FUN7(VAR11);
        FUN8(VAR6);
        return 0;
    }
    if ((VAR5 & 0x0fe00ff8) == 0x0c400000)
    {
        VAR9 = (VAR5 >> 16) & 0xf;
        VAR10 = (VAR5 >> 12) & 0xf;
        VAR6 = VAR5 & 7;
        if (VAR6 != 0)
            return 1;
        if (VAR5 & VAR14)
        {
            FUN9(VAR15, VAR6);
            FUN10(VAR16[VAR10], VAR15);
            FUN11(VAR15, VAR15, 32);
            FUN10(VAR16[VAR9], VAR15);
            FUN12(VAR16[VAR9], VAR16[VAR9], (1 << (40 - 32)) - 1);
        }
        else
        {
            FUN13(VAR15, VAR16[VAR10], VAR16[VAR9]);
            FUN14(VAR15, VAR6);
        }
        return 0;
    }
    return 1;
}