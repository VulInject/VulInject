static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint8_t VAR7;
    int VAR8;
    FUN2("" VAR9 "" VAR10 "", VAR3, VAR2, VAR4);
    switch (VAR2)
    {
    case VAR11:
        VAR6->VAR12 = VAR3;
        VAR6->VAR13 = 0;
        break;
    case VAR14:
        if (VAR4 == 1)
        {
            VAR3 <<= 24;
        }
        for (VAR8 = 0; VAR8 < VAR4; VAR8++)
        {
            VAR7 = VAR3 >> 24;
            switch (VAR6->VAR13)
            {
            case 0:
                VAR6->VAR15[VAR6->VAR12] = VAR7;
                VAR6->VAR13++;
                break;
            case 1:
                VAR6->VAR16[VAR6->VAR12] = VAR7;
                VAR6->VAR13++;
                break;
            case 2:
                VAR6->VAR17[VAR6->VAR12] = VAR7;
                VAR6->VAR12 = (VAR6->VAR12 + 1) & 0xff;
            default:
                VAR6->VAR13 = 0;
                break;
            }
            VAR3 <<= 8;
        }
        VAR6->VAR18 = 1;
        break;
    case VAR19:
        VAR6->VAR20[0] = VAR3;
        break;
    case VAR21:
        if (VAR6->VAR20[1] & VAR22)
        {
            VAR6->VAR20[1] &= ~VAR22;
            FUN3(VAR6->VAR23);
        }
        break;
    case VAR24 ... VAR25:
        VAR6->VAR20[VAR2 - 0x10] = VAR3;
        break;
    default:
        FUN4(VAR26, ""
                                 "" VAR10 "" VAR9 "",
                      VAR2, VAR4, VAR3);
        break;
    }
}