static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3(VAR2));
    VAR7 *VAR8 = FUN4(FUN3(VAR2));
    const char *typename = FUN5(VAR6->VAR9);
    size_t VAR10 = FUN6(typename);
    VAR3 *VAR11 = NULL;
    VAR12 *VAR13;
    int VAR14;
    VAR6->VAR15 = FUN7(VAR10 * VAR8->VAR16);
    for (VAR14 = 0; VAR14 < VAR8->VAR16; VAR14++)
    {
        char VAR17[32];
        void *VAR13 = VAR6->VAR15 + VAR14 * VAR10;
        FUN8(VAR13, VAR10, typename);
        snprintf(VAR17, sizeof(VAR17), "", VAR14);
        FUN9(FUN3(VAR6), VAR17, VAR13, &VAR11);
        if (VAR11)
        {
            goto VAR18;
        }
    }
    FUN10(FUN3(VAR2), VAR19, &VAR11);
    if (VAR11)
    {
        goto VAR18;
    }
    else
    {
        return;
    }
VAR18:
    while (--VAR14 >= 0)
    {
        VAR13 = VAR6->VAR15 + VAR14 * VAR10;
        FUN11(VAR13);
    }
    FUN12(VAR6->VAR15);
    FUN13(VAR4, VAR11);