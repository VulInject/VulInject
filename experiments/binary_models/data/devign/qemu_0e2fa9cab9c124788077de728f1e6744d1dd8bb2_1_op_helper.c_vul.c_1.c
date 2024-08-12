void FUN1(target_ulong VAR1, int VAR2, int VAR3, int VAR4)
{
    unsigned int VAR5;
    target_ulong VAR6 = 0;
    FUN2(VAR1, 3);
    VAR1 = FUN3(VAR7, VAR2, VAR1);
    switch (VAR2)
    {
    case 0xe0:
    case 0xe1:
    case 0xf0:
    case 0xf1:
    case 0xf8:
    case 0xf9:
        FUN4(VAR1, VAR6, VAR2 & 0x8f, 4);
    default:
        break;
        switch (VAR3)
        {
        default:
        case 4:
            VAR6 = *((VAR8 *)&VAR7->VAR9[VAR4]);
            break;
        case 8:
            VAR6 = *((VAR10 *)&VAR11);
            break;
        case 16:
            break;
            FUN4(VAR1, VAR6, VAR2, VAR3)