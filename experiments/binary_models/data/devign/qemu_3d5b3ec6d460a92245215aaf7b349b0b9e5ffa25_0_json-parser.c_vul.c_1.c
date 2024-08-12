static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4, *VAR5;
    JSONParserContext VAR6 = FUN2(VAR3);
    VAR4 = FUN3(VAR3);
    if (VAR4 == NULL)
    {
        goto VAR7;
    }
    switch (FUN4(VAR4))
    {
    case VAR8:
        VAR5 = FUN5(FUN6(VAR3, VAR4));
        break;
    case VAR9:
        VAR5 = FUN5(FUN7(FUN8(FUN9(VAR4), NULL, 10)));
        break;
    case VAR10:
        VAR5 = FUN5(FUN10(FUN11(FUN9(VAR4), NULL)));
        break;
    default:
        goto VAR7;
    }
    return VAR5;
VAR7:
    FUN12(VAR3, VAR6);
    return NULL;
}