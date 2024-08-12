VAR1 *FUN1(QCryptoCipherAlgorithm VAR2, QCryptoCipherMode VAR3, const VAR4 *VAR5, size_t VAR6, VAR7 **VAR8)
{
    VAR1 *VAR9;
    VAR10 *VAR11;
    VAR4 *VAR12;
    switch (VAR3)
    {
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
        break;
    default:
        FUN2(VAR8, "", VAR17[VAR3]);
        return NULL;
    }
    if (!FUN3(VAR2, VAR3, VAR6, VAR8))
    {
        return NULL;
    }
    VAR9 = FUN4(VAR1, 1);
    VAR9->VAR2 = VAR2;
    VAR9->VAR3 = VAR3;
    VAR11 = FUN4(VAR10, 1);
    switch (VAR2)
    {
    case VAR18:
        VAR11->VAR11 = FUN4(struct VAR19, 1);
        VAR12 = FUN5(VAR5, VAR6);
        FUN6(VAR11->VAR11, VAR12);
        FUN7(VAR12);
        VAR11->VAR20 = VAR21;
        VAR11->VAR22 = VAR23;
        VAR11->VAR24 = VAR25;
        VAR11->VAR26 = VAR27;
        VAR11->VAR28 = VAR29;
        break;
    case VAR30:
    case VAR31:
    case VAR32:
        VAR11->VAR11 = FUN4(VAR33, 1);
        if (VAR3 == VAR15)
        {
            VAR11->VAR34 = FUN4(VAR33, 1);
            VAR6 /= 2;
            FUN8(&((VAR33 *)VAR11->VAR11)->VAR35, VAR6, VAR5);
            FUN9(&((VAR33 *)VAR11->VAR11)->VAR36, VAR6, VAR5);
            FUN8(&((VAR33 *)VAR11->VAR34)->VAR35, VAR6, VAR5 + VAR6);
            FUN9(&((VAR33 *)VAR11->VAR34)->VAR36, VAR6, VAR5 + VAR6);
        }
        else
        {
            FUN8(&((VAR33 *)VAR11->VAR11)->VAR35, VAR6, VAR5);
            FUN9(&((VAR33 *)VAR11->VAR11)->VAR36, VAR6, VAR5);
        }
        VAR11->VAR20 = VAR37;
        VAR11->VAR22 = VAR38;
        VAR11->VAR24 = VAR39;
        VAR11->VAR26 = VAR40;
        VAR11->VAR28 = VAR41;
        break;
    case VAR42:
        VAR11->VAR11 = FUN4(struct VAR43, 1);
        if (VAR3 == VAR15)
        {
            VAR11->VAR34 = FUN4(struct VAR43, 1);
            VAR6 /= 2;
            FUN10(VAR11->VAR11, VAR6, VAR5);
            FUN10(VAR11->VAR34, VAR6, VAR5 + VAR6);
        }
        else
        {
            FUN10(VAR11->VAR11, VAR6, VAR5);
        }
        VAR11->VAR20 = VAR44;
        VAR11->VAR22 = VAR45;
        VAR11->VAR24 = VAR46;
        VAR11->VAR26 = VAR47;
        VAR11->VAR28 = VAR48;
        break;
    case VAR49:
    case VAR50:
    case VAR51:
        VAR11->VAR11 = FUN4(struct VAR52, 1);
        if (VAR3 == VAR15)
        {
            VAR11->VAR34 = FUN4(struct VAR52, 1);
            VAR6 /= 2;
            FUN11(VAR11->VAR11, VAR6, VAR5);
            FUN11(VAR11->VAR34, VAR6, VAR5 + VAR6);
        }
        else
        {
            FUN11(VAR11->VAR11, VAR6, VAR5);
        }
        VAR11->VAR20 = VAR53;
        VAR11->VAR22 = VAR54;
        VAR11->VAR24 = VAR55;
        VAR11->VAR26 = VAR56;
        VAR11->VAR28 = VAR57;
        break;
    case VAR58:
    case VAR59:
    case VAR60:
        VAR11->VAR11 = FUN4(struct VAR61, 1);
        if (VAR3 == VAR15)
        {
            VAR11->VAR34 = FUN4(struct VAR61, 1);
            VAR6 /= 2;
            FUN12(VAR11->VAR11, VAR6, VAR5);
            FUN12(VAR11->VAR34, VAR6, VAR5 + VAR6);
        }
        else
        {
            FUN12(VAR11->VAR11, VAR6, VAR5);
        }
        VAR11->VAR20 = VAR62;
        VAR11->VAR22 = VAR63;
        VAR11->VAR24 = VAR64;
        VAR11->VAR26 = VAR65;
        VAR11->VAR28 = VAR66;
        break;
    default:
        FUN2(VAR8, "", VAR67[VAR2]);
        goto VAR68;
    }
    if (VAR3 == VAR15 && VAR11->VAR28 != VAR69)
    {
        FUN2(VAR8, "", VAR11->VAR28, VAR69);
        goto VAR68;
    }
    VAR11->VAR70 = FUN4(VAR4, VAR11->VAR28);
    VAR9->VAR71 = VAR11;
    return VAR9;
VAR68:
    FUN7(VAR9);
    FUN7(VAR11);
    return NULL;
}