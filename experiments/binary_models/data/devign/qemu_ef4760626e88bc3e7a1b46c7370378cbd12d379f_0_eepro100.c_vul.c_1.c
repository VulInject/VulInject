static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    uint32_t VAR5;
    if (VAR4 <= sizeof(VAR3->VAR6) - sizeof(VAR5))
    {
        memcpy(&VAR5, &VAR3->VAR6[VAR4], sizeof(VAR5));
    }
    switch (VAR4)
    {
    case VAR7:
        FUN2(VAR8, FUN3("", FUN4(VAR4), VAR5));
        break;
    case VAR9:
        VAR5 = FUN5(VAR3);
        FUN2(VAR8, FUN3("", FUN4(VAR4), VAR5));
        break;
    case VAR10:
        VAR5 = FUN6(VAR3);
        FUN2(VAR8, FUN3("", FUN4(VAR4), VAR5));
        break;
    case VAR11:
        VAR5 = FUN7(VAR3);
        break;
    default:
        FUN3("", FUN4(VAR4), VAR5);
        FUN8("");
    }
    return VAR5;
}