static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    AMFDataType VAR4;
    VAR5 *VAR6, *VAR7, *VAR8;
    VAR9 *VAR10;
    int VAR11;
    char VAR12[11];
    VAR7 = NULL;
    VAR8 = NULL;
    VAR10 = VAR2->VAR13;
    VAR4 = FUN2(VAR10);
    if (VAR4 != VAR14 || FUN3(VAR10, VAR12, sizeof(VAR12)) < 0)
        return -1;
    if (!strcmp(VAR12, ""))
        return 1;
    if (strcmp(VAR12, "") && strcmp(VAR12, ""))
        return -1;
    for (VAR11 = 0; VAR11 < VAR2->VAR15; VAR11++)
    {
        VAR6 = VAR2->VAR16[VAR11];
        if (VAR6->VAR17->VAR18 == VAR19)
            VAR7 = VAR6;
        else if (VAR6->VAR17->VAR18 == VAR20)
            VAR8 = VAR6;
    }
    if (FUN4(VAR2, VAR7, VAR8, VAR12, VAR3, 0) < 0)
        return -1;
    return 0;
}