static void FUN1(void *VAR1, uint8_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR2 &= 0xfc;
    switch (VAR2)
    {
    case VAR6:
        FUN2("");
        VAR5->VAR6 = 0;
        break;
    case VAR7:
        FUN3(VAR5, VAR3);
        break;
    case VAR8:
        FUN4(VAR5, VAR3);
        break;
    case VAR9 ... VAR9 + 4 * 4 - 1:
        FUN5(VAR5, VAR2 - VAR9, VAR3);
        break;
    case VAR10 ... VAR10 + 4 * 4 - 1:
        FUN6(VAR5, VAR2 - VAR10, VAR3);
        break;
    case VAR11:
        FUN7(VAR5, VAR3);
        break;
    case VAR12:
        FUN2("", VAR3);
        VAR5->VAR12 = VAR3;
        break;
    case VAR13:
        FUN2("", VAR3);
        VAR5->VAR13 = VAR3;
        break;
    case VAR14:
        FUN2("");
        VAR5->VAR15 = FUN8(VAR16);
        FUN9(VAR5, VAR5->VAR15);
        break;
    case VAR17:
        FUN2("", VAR3);
        if (VAR5->VAR18 != VAR3)
        {
            VAR5->VAR18 = VAR3;
            FUN9(VAR5, FUN8(VAR16));
        }
        break;
    default:
        FUN2("", VAR2, VAR3);
        FUN10(VAR1, VAR2, VAR3 & 0xff);
        FUN10(VAR1, VAR2 + 1, (VAR3 >> 8) & 0xff);
        FUN10(VAR1, VAR2 + 2, (VAR3 >> 16) & 0xff);
        FUN10(VAR1, VAR2 + 3, (VAR3 >> 24) & 0xff);
        break;
    }
}