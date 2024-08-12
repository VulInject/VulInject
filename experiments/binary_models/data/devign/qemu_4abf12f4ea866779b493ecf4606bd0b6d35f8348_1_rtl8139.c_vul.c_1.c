static void FUN1(void *VAR1, uint8_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR2 &= 0xfe;
    switch (VAR2)
    {
    case VAR6:
        FUN2(VAR5, VAR3);
        break;
    case VAR7:
        FUN3(VAR5, VAR3);
        break;
    case VAR8:
        FUN4(VAR5, VAR3);
        break;
    case VAR9:
        FUN5(VAR5, VAR3);
        break;
    case VAR10:
        FUN6(VAR5, VAR3);
        break;
    case VAR11:
        FUN7(VAR5, VAR3);
        break;
    case VAR12:
        FUN8("", VAR3);
        VAR5->VAR12 = VAR3;
        break;
    case VAR13:
        FUN8("", VAR3);
        break;
    case VAR14:
        FUN8("", VAR3);
        VAR5->VAR14 = VAR3;
        break;
    case VAR15:
        FUN9(VAR5, VAR3);
        break;
    case VAR16:
        FUN10(VAR5, VAR3);
        break;
    default:
        FUN8("", VAR2, VAR3);
        FUN11(VAR1, VAR2, VAR3 & 0xff);
        FUN11(VAR1, VAR2 + 1, (VAR3 >> 8) & 0xff);
        break;
    }
}