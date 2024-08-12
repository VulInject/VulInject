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
    VAR11 = FUN3(sizeof(VAR10) + VAR4->VAR18 + 1);
    VAR11->VAR5 = VAR5;
    memcpy(VAR11->VAR19, VAR4->VAR19, VAR4->VAR18);
    VAR11->VAR19[VAR4->VAR18] = 0;
    VAR11->VAR6 = VAR6;
    VAR11->VAR7 = VAR7;
    VAR9->VAR20 += VAR4->VAR18;
    FUN4(VAR9->VAR21, VAR11);
    if (VAR5 == VAR22)
    {
        goto VAR23;
    }
    else if (VAR9->VAR13 < 0 || VAR9->VAR16 < 0 || (VAR9->VAR13 == 0 && VAR9->VAR16 == 0))
    {
        goto VAR24;
    }
    else if (VAR9->VAR20 > VAR25 || VAR9->VAR16 + VAR9->VAR13 > VAR26)
    {
        goto VAR23;
    }
    return;
VAR23:
    FUN5(VAR9);
VAR24:
    VAR9->VAR13 = 0;
    VAR9->VAR16 = 0;
    VAR9->FUN6(VAR9, VAR9->VAR21);
    VAR9->VAR21 = FUN7();
    VAR9->VAR20 = 0;
}