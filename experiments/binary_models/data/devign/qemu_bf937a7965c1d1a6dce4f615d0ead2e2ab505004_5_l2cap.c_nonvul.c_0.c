static void FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8;
    if (!VAR4 || (VAR4 != VAR2->VAR9 && VAR4 != VAR2->VAR10))
    {
        FUN2("", VAR11);
        return;
    }
    VAR2->VAR10 = VAR4;
    if (VAR4 == VAR2->VAR10)
    {
        VAR2->VAR9 = VAR2->VAR10;
        VAR2->VAR10 = VAR2->VAR10 == 255 ? 1 : VAR2->VAR10 + 1;
    }
    else
    {
    }
    switch (VAR3)
    {
    case VAR12:
        if (FUN3(VAR7 != 2 && VAR7 != 4 && VAR7 != 6))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        FUN2(""
                     "",
                     VAR11, VAR4, FUN4(((VAR15 *)VAR6)->VAR16));
        break;
    case VAR17:
        if (FUN3(VAR7 != VAR18))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        FUN5(VAR2, FUN4(((VAR19 *)VAR6)->VAR20), FUN4(((VAR19 *)VAR6)->VAR21));
        break;
    case VAR22:
        if (FUN3(VAR7 != VAR23))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        FUN2(""
                     "",
                     VAR11, VAR4);
        break;
    case VAR24:
        if (FUN3(VAR7 < FUN6(0)))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        FUN7(VAR2, FUN4(((VAR25 *)VAR6)->VAR26) & 1, FUN4(((VAR25 *)VAR6)->VAR27), ((VAR25 *)VAR6)->VAR28, VAR7 - FUN6(0));
        break;
    case VAR29:
        if (FUN3(VAR7 < FUN8(0)))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        if (FUN9(VAR2, FUN4(((VAR30 *)VAR6)->VAR31), FUN4(((VAR30 *)VAR6)->VAR26) & 1, FUN4(((VAR30 *)VAR6)->VAR21), ((VAR30 *)VAR6)->VAR28, VAR7 - FUN8(0)))
            FUN2(""
                         "",
                         VAR11, VAR4);
        break;
    case VAR32:
        if (FUN3(VAR7 != VAR33))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        FUN10(VAR2, FUN4(((VAR34 *)VAR6)->VAR27), FUN4(((VAR34 *)VAR6)->VAR21));
        break;
    case VAR35:
        if (FUN3(VAR7 != VAR36))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        FUN2(""
                     "",
                     VAR11, VAR4);
        break;
    case VAR37:
        FUN11(VAR2, VAR6, VAR7);
        break;
    case VAR38:
        FUN2(""
                     "",
                     VAR11, VAR4);
        break;
    case VAR39:
        if (FUN3(VAR7 != VAR40))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        FUN12(VAR2, FUN4(((VAR41 *)VAR6)->VAR42));
        break;
    case VAR43:
        if (FUN3(VAR7 != VAR44))
        {
            VAR8 = VAR13;
            goto VAR14;
        }
        FUN2(""
                     "",
                     VAR11, VAR4);
        break;
    default:
        VAR8 = VAR13;
    VAR14:
        FUN13(VAR2, VAR4, VAR8, 0, 0);
        break;
    }
}