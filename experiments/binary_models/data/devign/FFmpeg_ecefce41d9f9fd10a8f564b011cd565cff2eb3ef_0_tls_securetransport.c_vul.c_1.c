static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    int VAR13;
    if ((VAR13 = FUN2(VAR11, VAR2, VAR3, VAR6)) < 0)
        goto VAR14;
    VAR8->VAR15 = FUN3(NULL, VAR11->VAR16 ? VAR17 : VAR18, VAR19);
    if (!VAR8->VAR15)
    {
        FUN4(VAR2, VAR20, "");
        VAR13 = FUN5(VAR21);
        goto VAR14;
    }
    if (VAR11->VAR22)
    {
        if ((VAR13 = FUN6(VAR2)) < 0)
            goto VAR14;
        FUN7(VAR23, VAR8->VAR15, VAR24, true);
    }
    if (VAR11->VAR25)
        if ((VAR13 = FUN8(VAR2)) < 0)
            goto VAR14;
    if (VAR11->VAR26)
        FUN7(VAR27, VAR8->VAR15, VAR11->VAR28, strlen(VAR11->VAR28));
    FUN7(VAR29, VAR8->VAR15, VAR30, VAR31);
    FUN7(VAR32, VAR8->VAR15, VAR2);
    while (1)
    {
        OSStatus VAR33 = FUN9(VAR8->VAR15);
        if (VAR33 == VAR34)
        {
            SecTrustRef VAR35;
            SecTrustResultType VAR36;
            if (!VAR11->VAR26)
                continue;
            if (FUN10(VAR8->VAR15, &VAR35) != VAR37)
            {
                VAR13 = FUN5(VAR21);
                goto VAR14;
            }
            if (FUN11(VAR35, VAR8->VAR38) != VAR37)
            {
                VAR13 = VAR39;
                goto VAR14;
            }
            if (FUN12(VAR35, &VAR36) != VAR37)
            {
                VAR13 = VAR39;
                goto VAR14;
            }
            if (VAR36 == VAR40 || VAR36 == VAR41)
            {
                VAR33 = VAR42;
            }
            else if (VAR36 == VAR43)
            {
                VAR33 = VAR44;
            }
            else
            {
                VAR33 = VAR45;
            }
            if (VAR35)
                FUN13(VAR35);
        }
        if (VAR33 == VAR37)
            break;
        FUN4(VAR2, VAR20, "", (int)VAR33);
        VAR13 = FUN5(VAR46);
        goto VAR14;
    }
    return 0;
VAR14:
    FUN14(VAR2);
    return VAR13;
}