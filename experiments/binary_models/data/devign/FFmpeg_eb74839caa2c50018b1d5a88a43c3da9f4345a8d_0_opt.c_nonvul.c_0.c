int FUN1(void *VAR1, const VAR2 *VAR3)
{
    int64_t VAR4;
    double VAR5, VAR6;
    float VAR7;
    AVRational VAR8;
    int VAR9, VAR10, VAR11;
    char *VAR12;
    void *VAR13;
    if (!VAR3 || !VAR1)
        return FUN2(VAR14);
    VAR13 = ((VAR15 *)VAR1) + VAR3->VAR16;
    switch (VAR3->VAR17)
    {
    case VAR18:
        return 1;
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
        FUN3(VAR3, VAR13, NULL, NULL, &VAR4);
        return VAR3->VAR26.VAR4 == VAR4;
    case VAR27:
        VAR12 = *(char **)VAR13;
        if (VAR12 == VAR3->VAR26.VAR12)
            return 1;
        if (!VAR12 || !VAR3->VAR26.VAR12)
            return 0;
        return !strcmp(VAR12, VAR3->VAR26.VAR12);
    case VAR28:
        FUN3(VAR3, VAR13, &VAR5, NULL, NULL);
        return VAR3->VAR26.VAR29 == VAR5;
    case VAR30:
        FUN3(VAR3, VAR13, &VAR5, NULL, NULL);
        VAR7 = VAR3->VAR26.VAR29;
        VAR6 = VAR7;
        return VAR6 == VAR5;
    case VAR31:
        VAR8 = FUN4(VAR3->VAR26.VAR29, VAR32);
        return !FUN5(*(VAR33 *)VAR13, VAR8);
    case VAR34:
    {
        struct
        {
            VAR15 *VAR35;
            int VAR36;
        } VAR37 = {0};
        int VAR38 = *(int *)((void **)VAR13 + 1);
        void *VAR39 = *(void **)VAR13;
        if (!VAR39 && (!VAR3->VAR26.VAR12 || !strlen(VAR3->VAR26.VAR12)))
            return 1;
        if (VAR39 && VAR3->VAR26.VAR12 && !strlen(VAR3->VAR26.VAR12))
            return 0;
        if (VAR38 != strlen(VAR3->VAR26.VAR12) / 2)
            return 0;
        VAR9 = FUN6(NULL, NULL, VAR3->VAR26.VAR12, &VAR37.VAR35);
        if (!VAR9)
            VAR9 = !memcmp(VAR39, VAR37.VAR35, VAR37.VAR36);
        FUN7(VAR37.VAR35);
        return VAR9;
    }
    case VAR40:
        return !!(*(void **)VAR13);
    case VAR41:
        if (!VAR3->VAR26.VAR12 || !strcmp(VAR3->VAR26.VAR12, ""))
            VAR10 = VAR11 = 0;
        else if ((VAR9 = FUN8(&VAR10, &VAR11, VAR3->VAR26.VAR12)) < 0)
            return VAR9;
        return (VAR10 == *(int *)VAR13) && (VAR11 == *((int *)VAR13 + 1));
    case VAR42:
        VAR8 = (VAR33){0, 0};
        if (VAR3->VAR26.VAR12)
            FUN9(&VAR8, VAR3->VAR26.VAR12);
        return !FUN5(*(VAR33 *)VAR13, VAR8);
    case VAR43:
    {
        uint8_t VAR44[4] = {0, 0, 0, 0};
        if (VAR3->VAR26.VAR12)
        {
            if ((VAR9 = FUN10(VAR44, VAR3->VAR26.VAR12, -1, NULL)) < 0)
                return VAR9;
        }
        return !memcmp(VAR44, VAR13, sizeof(VAR44));
    }
    default:
        FUN11(VAR1, VAR45, "", VAR3->VAR17, VAR3->VAR46);
        break;
    }
    return VAR47;
}