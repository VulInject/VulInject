static void FUN1(VAR1 *VAR2, uint8_t VAR3, uint16_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    unsigned VAR7 = VAR4 & 0xFF;
    unsigned VAR8 = VAR3 >> 5;
    unsigned VAR9 = VAR3 >> 4;
    unsigned VAR10 = (VAR3 & 0x1F) ^ 1;
    VAR11 *VAR12 = &VAR6->VAR12[VAR9];
    VAR13 *VAR14 = &VAR6->VAR14[VAR8];
    uint8_t VAR15 = VAR14->VAR16;
    uint8_t VAR17 = VAR14->VAR18;
    switch (VAR10)
    {
    case VAR19:
    case VAR20:
        VAR12->VAR21[VAR12->VAR22] = VAR7;
        FUN3("", VAR12->VAR22 + 1, VAR9 + '', VAR7);
        VAR12->VAR22 = 1;
        break;
    case VAR23:
    case VAR24:
        FUN3("", VAR9 + '', VAR7);
        break;
    case VAR25:
    case VAR26:
        FUN4(VAR6, VAR9, VAR7);
        break;
    case VAR27:
    case VAR28:
        if (VAR12->VAR29 & VAR30)
        {
            FUN3("", VAR9 + '', VAR7);
            if (VAR12->VAR6)
            {
                uint8_t VAR31 = VAR7;
                FUN5(VAR12->VAR6, &VAR31, 1);
            }
        }
        else
        {
            FUN3("", VAR9 + '', VAR7);
        }
        break;
    case VAR32:
        FUN3("", VAR8 + '', VAR4);
        break;
    case VAR33:
        FUN3("", VAR8 + '', VAR4);
        VAR14->VAR18 = VAR7;
        break;
    case VAR34:
        FUN3("", VAR8 + '', VAR4);
        break;
    default:
        FUN3("", VAR10, VAR4);
    }
    if (VAR15 != VAR14->VAR16 || VAR17 != VAR14->VAR18)
    {
        FUN6(VAR6, VAR8);
    }
}