int FUN1(void *VAR1, const char *VAR2, const char *VAR3, int VAR4)
{
    int VAR5 = 0;
    void *VAR6, *VAR7;
    const VAR8 *VAR9 = FUN2(VAR1, VAR2, NULL, 0, VAR4, &VAR7);
    if (!VAR9 || !VAR7)
        return VAR10;
    if (!VAR3 && (VAR9->VAR11 != VAR12 && VAR9->VAR11 != VAR13 && VAR9->VAR11 != VAR14 && VAR9->VAR11 != VAR15 && VAR9->VAR11 != VAR16 && VAR9->VAR11 != VAR17 && VAR9->VAR11 != VAR18 && VAR9->VAR11 != VAR19 && VAR9->VAR11 != VAR20))
        return FUN3(VAR21);
    if (VAR9->VAR22 & VAR23)
        return FUN3(VAR21);
    VAR6 = ((VAR24 *)VAR7) + VAR9->VAR25;
    switch (VAR9->VAR11)
    {
    case VAR20:
        return FUN4(VAR1, VAR9, VAR3, VAR6);
    case VAR12:
        return FUN5(VAR1, VAR9, VAR3, VAR6);
    case VAR26:
        return FUN6(VAR1, VAR9, VAR3, VAR6);
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
        return FUN7(VAR1, VAR7, VAR9, VAR3, VAR6);
    case VAR15:
        return FUN8(VAR1, VAR9, VAR3, VAR6);
    case VAR16:
    {
        AVRational VAR33;
        VAR5 = FUN9(VAR1, VAR9, VAR3, &VAR33);
        if (VAR5 < 0)
            return VAR5;
        return FUN10(VAR1, VAR9, VAR6, 1, VAR33.VAR34, VAR33.VAR35);
    }
    case VAR13:
        return FUN11(VAR1, VAR9, VAR3, VAR6);
    case VAR14:
        return FUN12(VAR1, VAR9, VAR3, VAR6);
    case VAR17:
        if (!VAR3)
        {
            *(VAR36 *)VAR6 = 0;
            return 0;
        }
        else
        {
            if ((VAR5 = FUN13(VAR6, VAR3, 1)) < 0)
                FUN14(VAR1, VAR37, ""%VAR38\"", VAR3);
            return VAR5;
        }
        break;
    case VAR18:
        return FUN15(VAR1, VAR9, VAR3, VAR6);
    case VAR19:
        if (!VAR3 || !strcmp(VAR3, ""))
        {
            *(VAR36 *)VAR6 = 0;
        }
        else
        {
            int64_t VAR39 = FUN16(VAR3);
            if (!VAR39)
            {
                FUN14(VAR1, VAR37, ""%VAR38\"", VAR3);
                VAR5 = FUN3(VAR21);
            }
            *(VAR36 *)VAR6 = VAR39;
            return VAR5;
        }
        break;
    }
    FUN14(VAR1, VAR37, "");
    return FUN3(VAR21);
}