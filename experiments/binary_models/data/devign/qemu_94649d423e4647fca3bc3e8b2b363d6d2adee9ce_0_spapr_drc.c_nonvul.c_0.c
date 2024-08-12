VAR1 *FUN1(VAR2 *VAR3, sPAPRDRConnectorType VAR4, uint32_t VAR5)
{
    VAR1 *VAR6 = FUN2(FUN3(VAR7));
    char *VAR8;
    FUN4(VAR4);
    VAR6->VAR4 = VAR4;
    VAR6->VAR5 = VAR5;
    VAR6->VAR3 = VAR3;
    VAR8 = FUN5("" VAR9 "", FUN6(VAR6));
    FUN7(VAR3, VAR8, FUN8(VAR6), NULL);
    FUN9(FUN8(VAR6), true, "", NULL);
    FUN10(VAR8);
    switch (VAR6->VAR4)
    {
    case VAR10:
        VAR6->VAR11 = FUN5("", VAR5);
        break;
    case VAR12:
        VAR6->VAR11 = FUN5("", VAR5);
        break;
    case VAR13:
    case VAR14:
        VAR6->VAR11 = FUN5("", VAR5);
        break;
    case VAR15:
        VAR6->VAR11 = FUN5("", VAR5);
        break;
    default:
        FUN4(false);
    }
    if (VAR6->VAR4 == VAR14)
    {
        VAR6->VAR16 = VAR17;
    }
    return VAR6;
}