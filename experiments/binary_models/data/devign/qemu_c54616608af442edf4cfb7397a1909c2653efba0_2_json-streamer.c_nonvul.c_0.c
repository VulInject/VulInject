static void FUN1(VAR1 *VAR2, VAR3 *VAR4, JSONTokenType VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2, VAR8, VAR2);
    VAR10 *VAR11;
    switch (VAR5)
    {
    case VAR12:
        VAR9->VAR13++;
        break;
    case VAR14:
        VAR9->VAR13--;
        break;
    case VAR15:
        VAR9->VAR16++;
        break;
    case VAR17:
        VAR9->VAR16--;
        break;
    default:
        break;
    }
    VAR11 = FUN3();
    FUN4(VAR11, "", FUN5(VAR5));
    FUN6(VAR4);
    FUN4(VAR11, "", VAR4);
    FUN4(VAR11, "", FUN5(VAR6));
    FUN4(VAR11, "", FUN5(VAR7));
    VAR9->VAR18 += VAR4->VAR19;
    FUN7(VAR9->VAR20, VAR11);
    if (VAR5 == VAR21)
    {
        goto VAR22;
    }
    else if (VAR9->VAR13 < 0 || VAR9->VAR16 < 0 || (VAR9->VAR13 == 0 && VAR9->VAR16 == 0))
    {
        goto VAR23;
    }
    else if (VAR9->VAR18 > VAR24 || VAR9->VAR16 + VAR9->VAR13 > VAR25)
    {
        goto VAR22;
    }
    return;
VAR22:
    FUN8(VAR9->VAR20);
    VAR9->VAR20 = NULL;
VAR23:
    VAR9->VAR13 = 0;
    VAR9->VAR16 = 0;
    VAR9->FUN9(VAR9, VAR9->VAR20);
    if (VAR9->VAR20)
    {
        FUN8(VAR9->VAR20);
    }
    VAR9->VAR20 = FUN10();
    VAR9->VAR18 = 0;
}