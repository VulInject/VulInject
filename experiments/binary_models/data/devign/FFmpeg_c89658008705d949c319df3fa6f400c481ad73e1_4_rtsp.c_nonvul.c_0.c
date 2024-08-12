static int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    VAR3 *VAR15;
    FUN2(VAR2, "");
VAR16:
    for (;;)
    {
        RTSPMessageHeader VAR17;
        VAR14 = FUN3(VAR2, &VAR17, NULL, 1);
        if (VAR14 == -1)
            return -1;
        if (VAR14 == 1)
            break;
        if (VAR9->VAR18 != VAR19)
            return 0;
    }
    VAR14 = FUN4(VAR9->VAR20, VAR6, 3);
    if (VAR14 != 3)
        return -1;
    VAR11 = VAR6[0];
    VAR12 = FUN5(VAR6 + 1);
    FUN2(VAR2, "", VAR11, VAR12);
    if (VAR12 > VAR7 || VAR12 < 12)
        goto VAR16;
    VAR14 = FUN4(VAR9->VAR20, VAR6, VAR12);
    if (VAR14 != VAR12)
        return -1;
    if (VAR9->VAR21 == VAR22 && FUN6(VAR6, VAR12, &VAR11, NULL, NULL, NULL, NULL) < 0)
        return -1;
    for (VAR13 = 0; VAR13 < VAR9->VAR23; VAR13++)
    {
        VAR15 = VAR9->VAR24[VAR13];
        if (VAR11 >= VAR15->VAR25 && VAR11 <= VAR15->VAR26)
            goto VAR27;
    }
    goto VAR16;
VAR27:
    *VAR4 = VAR15;
    return VAR12;
}