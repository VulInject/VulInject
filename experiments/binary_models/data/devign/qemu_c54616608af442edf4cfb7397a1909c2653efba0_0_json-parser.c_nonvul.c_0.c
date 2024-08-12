static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = NULL, *VAR9 = NULL, *VAR10, *VAR11;
    JSONParserContext VAR12 = FUN2(VAR2);
    VAR11 = FUN3(VAR2);
    if (VAR11 == NULL)
    {
        FUN4(VAR2, NULL, "");
        goto VAR13;
    }
    VAR8 = FUN5(VAR2, VAR6);
    if (!VAR8 || FUN6(VAR8) != VAR14)
    {
        FUN4(VAR2, VAR11, "");
        goto VAR13;
    }
    VAR9 = FUN7(VAR2);
    if (VAR9 == NULL)
    {
        FUN4(VAR2, NULL, "");
        goto VAR13;
    }
    if (FUN8(VAR9) != VAR15)
    {
        FUN4(VAR2, VAR9, "");
        goto VAR13;
    }
    VAR10 = FUN5(VAR2, VAR6);
    if (VAR10 == NULL)
    {
        FUN4(VAR2, VAR9, "");
        goto VAR13;
    }
    FUN9(VAR4, FUN10(FUN11(VAR8)), VAR10);
    FUN12(VAR8);
    return 0;
VAR13:
    FUN13(VAR2, VAR12);
    FUN12(VAR8);
    return -1;
}