static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    char *VAR11;
    char VAR12[1024];
    if (!FUN2())
        return FUN3(VAR13);
    if (VAR2->VAR14 < 0)
        VAR2->VAR14 = VAR15;
    if (VAR4->VAR16 & VAR17)
        VAR4->VAR18 = VAR19;
    VAR11 = FUN4(VAR20);
    VAR8 = FUN5(VAR2->VAR21, VAR11, VAR20 - 1);
    if (VAR8 <= 0)
    {
        FUN6(VAR11);
        return VAR22;
    }
    VAR11[VAR8] = '';
    VAR10 = FUN7(VAR2, VAR11);
    FUN8(&VAR11);
    if (VAR10)
        goto VAR23;
    for (VAR9 = 0; VAR9 < VAR4->VAR24; VAR9++)
    {
        char VAR25[50];
        VAR7 = VAR4->VAR26[VAR9];
        if (!(VAR4->VAR16 & VAR17))
        {
            VAR27 *VAR28 = FUN9(VAR4);
            getnameinfo((struct VAR29 *)&VAR7->VAR30, sizeof(VAR7->VAR30), VAR25, sizeof(VAR25), NULL, 0, VAR31);
            FUN10(VAR12, sizeof(VAR12), "", NULL, VAR25, VAR7->VAR32, "", VAR7->VAR32, VAR7->VAR33, VAR4->VAR16 & VAR34 ? 1 : 0, VAR4->VAR16 & VAR35 ? 1 : 0);
            FUN11(VAR12, sizeof(VAR12), "", VAR7->VAR36, VAR7->VAR37);
            FUN11(VAR12, sizeof(VAR12), "", VAR7->VAR38, VAR7->VAR39);
            VAR10 = FUN12(&VAR7->VAR40, VAR12, VAR41, &VAR2->VAR42, &VAR28);
            FUN13(&VAR28);
            if (VAR10 < 0)
            {
                VAR10 = VAR22;
                goto VAR23;
            }
        }
        if ((VAR10 = FUN14(VAR2, VAR7)))
            goto VAR23;
    }
    return 0;
VAR23:
    FUN15(VAR2);
    FUN16();
    return VAR10;