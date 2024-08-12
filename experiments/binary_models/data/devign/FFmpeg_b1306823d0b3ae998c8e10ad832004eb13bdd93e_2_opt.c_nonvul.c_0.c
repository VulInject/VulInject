int FUN1(void *VAR1, const char *VAR2, int VAR3, VAR4 **VAR5)
{
    void *VAR6, *VAR7;
    const VAR8 *VAR9 = FUN2(VAR1, VAR2, NULL, 0, VAR3, &VAR7);
    VAR4 *VAR10, VAR11[128];
    int VAR12, VAR13, VAR14;
    if (!VAR9 || !VAR7)
        return VAR15;
    VAR6 = (VAR4 *)VAR7 + VAR9->VAR16;
    VAR11[0] = 0;
    switch (VAR9->VAR17)
    {
    case VAR18:
        VAR14 = snprintf(VAR11, sizeof(VAR11), "", *(int *)VAR6);
        break;
    case VAR19:
        VAR14 = snprintf(VAR11, sizeof(VAR11), "", *(int *)VAR6);
        break;
    case VAR20:
        VAR14 = snprintf(VAR11, sizeof(VAR11), "" VAR21, *(VAR22 *)VAR6);
        break;
    case VAR23:
        VAR14 = snprintf(VAR11, sizeof(VAR11), "", *(float *)VAR6);
        break;
    case VAR24:
        VAR14 = snprintf(VAR11, sizeof(VAR11), "", *(double *)VAR6);
        break;
    case VAR25:
        VAR14 = snprintf(VAR11, sizeof(VAR11), "", ((VAR26 *)VAR6)->VAR27, ((VAR26 *)VAR6)->VAR28);
        break;
    case VAR29:
        if (*(VAR4 **)VAR6)
            *VAR5 = FUN3(*(VAR4 **)VAR6);
        else
            *VAR5 = FUN3("");
        return *VAR5 ? 0 : FUN4(VAR30);
    case VAR31:
        VAR12 = *(int *)(((VAR4 *)VAR6) + sizeof(VAR4 *));
        if ((VAR32)VAR12 * 2 + 1 > VAR33)
            return FUN4(VAR34);
        if (!(*VAR5 = FUN5(VAR12 * 2 + 1)))
            return FUN4(VAR30);
        VAR10 = *(VAR4 **)VAR6;
        for (VAR13 = 0; VAR13 < VAR12; VAR13++)
            snprintf(*VAR5 + VAR13 * 2, 3, "", VAR10[VAR13]);
        return 0;
    default:
        return FUN4(VAR34);
    }
    if (VAR14 >= sizeof(VAR11))
        return FUN4(VAR34);
    *VAR5 = FUN3(VAR11);
    return *VAR5 ? 0 : FUN4(VAR30);
}