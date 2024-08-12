static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    uint8_t VAR5;
    if (VAR4 <= sizeof(VAR3->VAR6) - sizeof(VAR5))
    {
        memcpy(&VAR5, &VAR3->VAR6[VAR4], sizeof(VAR5));
    }
    switch (VAR4)
    {
    case VAR7:
    case VAR8:
        FUN2(VAR9, FUN3("", FUN4(VAR4), VAR5));
        break;
    case VAR10:
        FUN2(VAR9, FUN3("", FUN4(VAR4), VAR5));
        VAR5 = FUN5(VAR3);
        break;
    case VAR11:
        FUN2(VAR9, FUN3("", FUN4(VAR4), VAR5));
        break;
    case VAR12 + 3:
        FUN2(VAR9, FUN3("", FUN4(VAR4), VAR5));
        break;
    case VAR13:
        VAR5 = FUN6(VAR3);
        break;
    case VAR14:
        VAR5 = 0;
        FUN2(VAR9, FUN3("", FUN4(VAR4), VAR5));
        break;
    case VAR15:
        VAR5 = 0x07;
        FUN2(VAR9, FUN3("", VAR5));
        break;
    default:
        FUN3("", FUN4(VAR4), VAR5);
        FUN7("");
    }
    return VAR5;
}