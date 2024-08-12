VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, int VAR5, int VAR6, int VAR7)
{
    uint64_t VAR8 = 0;
    target_ulong VAR9 = VAR4;
    if (VAR5 < 0x80)
    {
        FUN2(VAR3, VAR10);
    }
    FUN3(VAR3, VAR4, VAR6 - 1);
    VAR4 = FUN4(VAR3, VAR5, VAR4);
    switch (VAR5)
    {
    case 0x82:
    case 0x8a:
        if (FUN5(VAR4, VAR6, VAR11) == -1)
        {
            FUN6("", VAR9, VAR5, VAR6, VAR8);
            return 0;
        }
    case 0x80:
    case 0x88:
    {
        switch (VAR6)
        {
        case 1:
            VAR8 = FUN7(VAR4);
            break;
        case 2:
            VAR8 = FUN8(VAR4);
            break;
        case 4:
            VAR8 = FUN9(VAR4);
            break;
        default:
        case 8:
            VAR8 = FUN10(VAR4);
            break;
        }
    }
    break;
    case 0x83:
    case 0x8b:
        if (FUN5(VAR4, VAR6, VAR11) == -1)
        {
            FUN6("", VAR9, VAR5, VAR6, VAR8);
            return 0;
        }
    case 0x81:
    case 0x89:
        break;
    default:
        break;
    }
    switch (VAR5)
    {
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
        switch (VAR6)
        {
        case 2:
            VAR8 = FUN11(VAR8);
            break;
        case 4:
            VAR8 = FUN12(VAR8);
            break;
        case 8:
            VAR8 = FUN13(VAR8);
            break;
        default:
            break;
        }
    default:
        break;
    }
    if (VAR7)
    {
        switch (VAR6)
        {
        case 1:
            VAR8 = (VAR12)VAR8;
            break;
        case 2:
            VAR8 = (VAR13)VAR8;
            break;
        case 4:
            VAR8 = (VAR14)VAR8;
            break;
        default:
            break;
        }
    }
    FUN6("", VAR9, VAR5, VAR6, VAR8);
    return VAR8;
}