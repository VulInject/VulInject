void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    FUN2(FUN3(VAR2));
    if (VAR2->VAR7 != VAR8)
    {
        FUN4(FUN3(VAR2));
        VAR2->VAR9 = true;
        return;
    }
    if (FUN5(VAR2) != VAR10 && VAR2->VAR11 != VAR12)
    {
        FUN6(FUN3(VAR2));
        VAR2->VAR9 = true;
        return;
    }
    if (VAR2->VAR13)
    {
        VAR2->VAR9 = true;
        FUN7(FUN3(VAR2));
        return;
    }
    VAR2->VAR14 = VAR15;
    switch (FUN5(VAR2))
    {
    case VAR16:
        FUN8(VAR2->VAR17);
        break;
    case VAR10:
        FUN9(VAR2->VAR17);
        break;
    case VAR18:
        FUN10(VAR2->VAR17);
        break;
    case VAR19:
    case VAR20:
    default:
        FUN11(false);
    }
    VAR2->VAR9 = false;
    FUN12(VAR2->VAR21);
    VAR2->VAR21 = NULL;
    VAR2->VAR22 = 0;
    FUN13(FUN14(VAR2), "", NULL);
    VAR2->VAR17 = NULL;
}