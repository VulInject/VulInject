static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4, *VAR5;
    JSONParserContext VAR6 = FUN2(VAR3);
    VAR4 = FUN3(VAR3);
    if (VAR4 == NULL)
    {
        goto VAR7;
    }
    if (FUN4(VAR4) != VAR8)
    {
        goto VAR7;
    }
    if (FUN5(VAR4, ""))
    {
        VAR5 = FUN6(FUN7(true));
    }
    else if (FUN5(VAR4, ""))
    {
        VAR5 = FUN6(FUN7(false));
    }
    else
    {
        FUN8(VAR3, VAR4, "", FUN9(VAR4));
        goto VAR7;
    }
    return VAR5;
VAR7:
    FUN10(VAR3, VAR6);
    return NULL;