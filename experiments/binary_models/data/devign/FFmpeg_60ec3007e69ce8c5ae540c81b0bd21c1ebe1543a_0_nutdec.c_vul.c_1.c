static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11[VAR3];
    Syncpoint VAR12 = {.VAR13 = VAR4 * FUN2(VAR10->VAR14) * VAR15};
    Syncpoint VAR16 = {.VAR13 = VAR17, .VAR18 = VAR17};
    VAR19 *VAR20, *VAR21[2] = {&VAR16, &VAR16};
    int64_t VAR22, VAR23, VAR13;
    int VAR24;
    if (VAR7->VAR5 & VAR25)
    {
        return FUN3(VAR26);
    }
    if (VAR10->VAR27)
    {
        int VAR28 = FUN4(VAR10, VAR4, VAR5);
        if (VAR28 < 0)
            VAR28 = FUN4(VAR10, VAR4, VAR5 ^ VAR29);
        if (VAR28 < 0)
            return -1;
        VAR23 = VAR10->VAR27[VAR28].VAR22;
        VAR13 = VAR10->VAR27[VAR28].VAR30;
    }
    else
    {
        FUN5(VAR7->VAR31, &VAR12, (void *)VAR32, (void **)VAR21);
        FUN6(VAR2, VAR33, "" VAR34 "" VAR34 "" VAR35 "" VAR35 "", VAR21[0]->VAR22, VAR21[1]->VAR22, VAR21[0]->VAR13, VAR21[1]->VAR13);
        VAR22 = FUN7(VAR2, -1, VAR12.VAR13, VAR21[0]->VAR22, VAR21[1]->VAR22, VAR21[1]->VAR22, VAR21[0]->VAR13, VAR21[1]->VAR13, VAR29, &VAR13, VAR36);
        if (!(VAR5 & VAR29))
        {
            VAR12.VAR22 = VAR22 + 16;
            VAR21[1] = &VAR16;
            FUN5(VAR7->VAR31, &VAR12, (void *)VAR37, (void **)VAR21);
            VAR23 = FUN7(VAR2, -2, VAR12.VAR22, VAR21[0]->VAR22, VAR21[1]->VAR22, VAR21[1]->VAR22, VAR21[0]->VAR18, VAR21[1]->VAR18, VAR5, &VAR13, VAR36);
            if (VAR23 >= 0)
                VAR22 = VAR23;
        }
        VAR12.VAR22 = VAR22;
        VAR20 = FUN5(VAR7->VAR31, &VAR12, (void *)VAR37, NULL);
        FUN8(VAR20);
        VAR23 = VAR20->VAR18 - 15;
    }
    FUN6(NULL, VAR33, "" VAR35 "", VAR23);
    VAR22 = FUN9(VAR2->VAR38, VAR39, VAR23);
    FUN10(VAR2->VAR38, VAR22, VAR40);
    VAR7->VAR41 = VAR22;
    FUN6(NULL, VAR33, "" VAR35 "", VAR22);
    if (VAR23 > VAR22 || VAR23 + 15 < VAR22)
        FUN6(NULL, VAR42, "");
    for (VAR24 = 0; VAR24 < VAR2->VAR43; VAR24++)
        VAR7->VAR44[VAR24].VAR45 = 1;
    VAR7->VAR46 = 0;
    return 0;