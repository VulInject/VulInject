void FUN1(VAR1 *VAR2, target_ulong VAR3, target_ulong VAR4, int VAR5, int VAR6)
{
    FUN2("", VAR3, VAR5, VAR6, VAR4);
    if (VAR5 < 0x80)
    {
        FUN3(VAR2, VAR7);
    }
    FUN4(VAR2, VAR3, VAR6 - 1);
    VAR3 = FUN5(VAR2, VAR5, VAR3);
    switch (VAR5)
    {
    case 0x88:
    case 0x89:
        switch (VAR6)
        {
        case 2:
            VAR4 = FUN6(VAR4);
            break;
        case 4:
            VAR4 = FUN7(VAR4);
            break;
        case 8:
            VAR4 = FUN8(VAR4);
            break;
        default:
            break;
        }
    default:
        break;
    }
    switch (VAR5)
    {
    case 0x80:
    case 0x88:
    {
        switch (VAR6)
        {
        case 1:
            FUN9(VAR3, VAR4);
            break;
        case 2:
            FUN10(VAR3, VAR4);
            break;
        case 4:
            FUN11(VAR3, VAR4);
            break;
        case 8:
        default:
            FUN12(VAR3, VAR4);
            break;
        }
    }
    break;
    case 0x81:
    case 0x89:
        return;
    case 0x82:
    case 0x83:
    case 0x8a:
    case 0x8b:
    default:
        FUN3(VAR2, VAR8);
        return;
    }
}