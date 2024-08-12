static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 1;
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = &VAR2->VAR8;
    int VAR9 = -1;
    VAR5->VAR10 = 1;
    while (VAR3)
    {
        int VAR11;
        uint8_t VAR12;
        VAR12 = FUN2(VAR8);
        switch (VAR12)
        {
        case 0xFD:
            FUN3(VAR2, VAR13, "");
            VAR11 = 1;
            while (VAR11)
            {
                uint8_t VAR14;
                VAR14 = FUN2(VAR8);
                switch (VAR14)
                {
                case 0x82:
                    VAR5->VAR10 = FUN4(VAR8);
                    FUN3(VAR2, VAR13, "", VAR5->VAR10);
                    break;
                case 0x83:
                    VAR9 = FUN4(VAR8);
                    FUN3(VAR2, VAR13, "", VAR9);
                    break;
                case 0x85:
                    VAR5->VAR15 = FUN4(VAR8);
                    FUN3(VAR2, VAR13, "", VAR5->VAR15);
                    break;
                case 0x8A:
                    FUN3(VAR2, VAR13, "", VAR14, FUN4(VAR8));
                    FUN3(VAR2, VAR13, "");
                    VAR11 = 0;
                    break;
                case 0xFF:
                    FUN3(VAR2, VAR13, "");
                    VAR11 = 0;
                    VAR3 = 0;
                    break;
                default:
                    FUN3(VAR2, VAR13, "", VAR14, FUN4(VAR8));
                    break;
                }
            }
            break;
        case 0xFF:
            FUN3(VAR2, VAR13, "");
            VAR3 = 0;
            break;
        default:
            FUN3(VAR2, VAR13, "", VAR12, FUN4(VAR8));
            break;
        }
    }
    switch (VAR9)
    {
    case 7:
        VAR5->VAR16 = VAR17;
        break;
    default:
        FUN3(VAR2, VAR18, "", VAR9);
        return 0;
    }
    return 1;
}