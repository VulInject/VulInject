static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6)
{
    TCGv VAR7;
    int VAR8 = (VAR5 >> 16) & 0xf;
    int VAR9 = VAR5 & 0xf;
    int VAR10 = ((VAR5 >> 5) & 7) | ((VAR5 >> 18) & 0x38);
    if (!FUN2(VAR2, VAR11))
        return 0;
    if (!(VAR8 == 13 && VAR9 == 0))
        return 0;
    if (VAR5 & VAR12)
    {
        switch (VAR10)
        {
        case 2:
            VAR7 = FUN3(VAR13.VAR14);
            break;
        case 3:
            VAR7 = FUN3(VAR13.VAR15);
            break;
        case 4:
            VAR7 = FUN3(VAR13.VAR16);
            break;
        default:
            return 0;
        }
        FUN4(VAR4, VAR6, VAR7);
    }
    else
    {
        VAR7 = FUN5(VAR4, VAR6);
        switch (VAR10)
        {
        case 2:
            FUN6(VAR7, VAR13.VAR14);
            break;
        case 3:
            FUN6(VAR7, VAR13.VAR15);
            break;
        case 4:
            FUN6(VAR7, VAR13.VAR16);
            break;
        default:
            FUN7(VAR7);
            return 0;
        }
    }
    return 1;
}