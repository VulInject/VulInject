static void FUN1(void *VAR1)
{
    VAR2 *VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    uint64_t VAR10, VAR11;
    VAR5 = VAR1;
    VAR3 = FUN2(VAR5);
    VAR7 = VAR5->VAR7;
    VAR9 = VAR7->VAR1;
    VAR10 = FUN3(VAR12);
    switch ((VAR5->VAR13[VAR14] >> 30) & 0x3)
    {
    case 0:
        VAR11 = 1 << 17;
        break;
    case 1:
        VAR11 = 1 << 21;
        break;
    case 2:
        VAR11 = 1 << 25;
        break;
    case 3:
        VAR11 = 1 << 29;
        break;
    default:
        return;
    }
    VAR11 = VAR10 + FUN4(VAR11, FUN5(), VAR7->VAR15);
    if (VAR11 == VAR10)
        VAR11++;
    FUN6("" VAR16 "" VAR16 "", VAR17, VAR5->VAR13[VAR14], VAR5->VAR13[VAR18]);
    switch ((VAR5->VAR13[VAR18] >> 30) & 0x3)
    {
    case 0x0:
    case 0x1:
        FUN7(VAR9->VAR19, VAR11);
        VAR9->VAR20 = VAR11;
        VAR5->VAR13[VAR18] |= 1 << 31;
        break;
    case 0x2:
        FUN7(VAR9->VAR19, VAR11);
        VAR9->VAR20 = VAR11;
        VAR5->VAR13[VAR18] |= 1 << 30;
        if ((VAR5->VAR13[VAR14] >> 27) & 0x1)
        {
            FUN8(VAR3, VAR21, 1);
        }
        break;
    case 0x3:
        VAR5->VAR13[VAR18] &= ~0x30000000;
        VAR5->VAR13[VAR18] |= VAR5->VAR13[VAR14] & 0x30000000;
        switch ((VAR5->VAR13[VAR14] >> 28) & 0x3)
        {
        case 0x0:
            break;
        case 0x1:
            FUN9(VAR3);
            break;
        case 0x2:
            FUN10(VAR3);
            break;
        case 0x3:
            FUN11(VAR3);
            break;
        }
    }
}