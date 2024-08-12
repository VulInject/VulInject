static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    static int VAR5;
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(VAR2);
    VAR10 *VAR11 = &VAR9->VAR12;
    int VAR13;
    uint8_t VAR14;
    if (!VAR11->VAR15)
    {
        FUN4(VAR4, "");
        return;
    }
    if (VAR9->VAR5 == -1)
    {
        VAR9->VAR5 = VAR5;
    }
    if (VAR9->VAR5 >= VAR16)
    {
        FUN4(VAR4, "", VAR16);
        return;
    }
    if (VAR9->VAR17 == -1)
    {
        VAR9->VAR17 = VAR18[VAR9->VAR5];
    }
    VAR5++;
    VAR13 = VAR9->VAR17;
    FUN5(VAR7, &VAR11->VAR19, VAR9->VAR20);
    FUN6(VAR21, VAR11);
    if (FUN7(VAR11->VAR15, VAR22, &VAR14) == 0)
    {
        VAR11->VAR23 = 1;
        VAR11->VAR24 = VAR14;
    }
    FUN8(VAR7, VAR13, (VAR11->VAR23 ? &VAR25[0] : &VAR26[0]), VAR11, "");
}