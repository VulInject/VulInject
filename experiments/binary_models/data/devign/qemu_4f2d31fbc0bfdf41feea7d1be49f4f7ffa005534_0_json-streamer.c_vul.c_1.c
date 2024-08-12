static void FUN1(VAR1 *VAR2, VAR3 *VAR4, JSONTokenType VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2, VAR8, VAR2);
    VAR10 *VAR11;
    if (VAR5 == VAR12)
    {
        switch (FUN3(VAR4)[0])
        {
        case '':
            VAR9->VAR13++;
            break;
        case '':
            VAR9->VAR13--;
            break;
        case '':
            VAR9->VAR14++;
            break;
        case '':
            VAR9->VAR14--;
            break;
        default:
            break;
        }
    }
    VAR11 = FUN4();
    FUN5(VAR11, "", FUN6(VAR5));
    FUN7(VAR4);
    FUN5(VAR11, "", VAR4);
    FUN5(VAR11, "", FUN6(VAR6));
    FUN5(VAR11, "", FUN6(VAR7));
    VAR9->VAR15 += VAR4->VAR16;
    FUN8(VAR9->VAR17, VAR11);
    if (VAR5 == VAR18)
    {
        goto VAR19;
    }
    else if (VAR9->VAR13 < 0 || VAR9->VAR14 < 0 || (VAR9->VAR13 == 0 && VAR9->VAR14 == 0))
    {
        goto VAR20;
    }
    else if (VAR9->VAR15 > VAR21 || VAR9->VAR14 > VAR22 || VAR9->VAR13 > VAR22)
    {
        goto VAR20;
    }
    return;
VAR19:
    FUN9(VAR9->VAR17);
    VAR9->VAR17 = NULL;
VAR20:
    VAR9->VAR13 = 0;
    VAR9->VAR14 = 0;
    VAR9->FUN10(VAR9, VAR9->VAR17);
    if (VAR9->VAR17)
    {
        FUN9(VAR9->VAR17);
    }
    VAR9->VAR17 = FUN11();
    VAR9->VAR15 = 0;
}