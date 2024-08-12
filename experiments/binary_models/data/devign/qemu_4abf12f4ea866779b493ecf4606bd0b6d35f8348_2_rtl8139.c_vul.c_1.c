static VAR1 FUN1(void *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    int VAR6;
    VAR3 &= 0xff;
    switch (VAR3)
    {
    case VAR7 ... VAR7 + 5:
        VAR6 = VAR5->VAR8[VAR3 - VAR7];
        break;
    case VAR7 + 6 ... VAR7 + 7:
        VAR6 = 0;
        break;
    case VAR9 ... VAR9 + 7:
        VAR6 = VAR5->VAR10[VAR3 - VAR9];
        break;
    case VAR11:
        VAR6 = FUN2(VAR5);
        break;
    case VAR12:
        VAR6 = FUN3(VAR5);
        break;
    case VAR13:
        VAR6 = FUN4(VAR5);
        break;
    case VAR14:
        VAR6 = FUN5(VAR5);
        break;
    case VAR15:
        VAR6 = FUN6(VAR5);
        break;
    case VAR16:
        VAR6 = FUN7(VAR5);
        break;
    case VAR17:
        VAR6 = FUN8(VAR5);
        break;
    case VAR18:
        VAR6 = 0xd0;
        FUN9("", VAR6);
        break;
    case VAR19:
        VAR6 = VAR5->VAR20;
        FUN9("", VAR6);
        break;
    case VAR21:
        VAR6 = VAR22;
        FUN9("", VAR6);
        break;
    case VAR23:
        VAR6 = VAR5->VAR23;
        FUN9("", VAR6);
        break;
    case 0x43:
        VAR6 = VAR5->VAR24 >> 24;
        FUN9("", VAR6);
        break;
    default:
        FUN9("", VAR3);
        VAR6 = 0;
        break;
    }
    return VAR6;
}