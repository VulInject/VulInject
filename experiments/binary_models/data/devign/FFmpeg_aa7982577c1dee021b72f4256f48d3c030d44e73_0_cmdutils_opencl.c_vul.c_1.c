int FUN1(void *VAR1, const char *VAR2, const char *VAR3)
{
    int VAR4, VAR5, VAR6 = 0, VAR7 = 0;
    int64_t VAR8 = 0;
    VAR9 *VAR10;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    cl_platform_id VAR15;
    FUN2(&VAR10);
    for (VAR4 = 0; VAR4 < VAR10->VAR16; VAR4++)
        VAR6 += VAR10->VAR17[VAR4]->VAR18;
    if (!VAR6)
    {
        FUN3(NULL, VAR19, "");
        return FUN4(VAR20);
    }
    if (!(VAR14 = FUN5(VAR6, sizeof(VAR13))))
    {
        FUN3(NULL, VAR19, "");
        return FUN4(VAR21);
    }
    for (VAR4 = 0; VAR4 < VAR10->VAR16; VAR4++)
    {
        for (VAR5 = 0; VAR5 < VAR10->VAR17[VAR4]->VAR18; VAR5++)
        {
            VAR12 = VAR10->VAR17[VAR4]->VAR12[VAR5];
            VAR15 = VAR10->VAR17[VAR4]->VAR22;
            VAR8 = FUN6(VAR12, VAR15, VAR23);
            if (VAR8 > 0)
            {
                VAR14[VAR7].VAR24 = VAR4;
                VAR14[VAR7].VAR25 = VAR5;
                VAR14[VAR7].VAR26 = VAR8;
                FUN7(VAR14[VAR7].VAR27, VAR12->VAR27, sizeof(VAR14[VAR7].VAR27));
                VAR7++;
            }
        }
    }
    FUN8(VAR14, VAR7, sizeof(VAR13), VAR28);
    fprintf(VAR29, "");
    for (VAR4 = 0; VAR4 < VAR7; VAR4++)
        fprintf(VAR30, "" VAR31 "", VAR14[VAR4].VAR24, VAR14[VAR4].VAR25, VAR14[VAR4].VAR27, VAR14[VAR4].VAR26);
    FUN9(&VAR10);
    FUN10(VAR14);
    return 0;
}