static void FUN1(VAR1 *VAR2, int VAR3, qxl_async_io VAR4)
{
    QXLDevSurfaceCreate VAR5;
    VAR6 *VAR7 = &VAR2->VAR8.VAR5;
    int VAR9;
    int VAR10 = FUN2(VAR7->VAR11);
    int VAR12 = FUN2(VAR7->VAR13);
    VAR9 = FUN3(VAR12) * VAR10;
    if (VAR9 > VAR2->VAR14)
    {
        FUN4(VAR2, ""
                               "",
                          VAR15);
        return;
    }
    if (VAR2->VAR16 == VAR17)
    {
        FUN4(VAR2, "", VAR15);
    }
    FUN5(VAR2);
    VAR5.VAR18 = FUN2(VAR7->VAR18);
    VAR5.VAR11 = FUN2(VAR7->VAR11);
    VAR5.VAR19 = FUN6(VAR7->VAR19);
    VAR5.VAR20 = FUN2(VAR7->VAR20);
    VAR5.VAR13 = FUN2(VAR7->VAR13);
    VAR5.VAR21 = FUN2(VAR7->VAR21);
    VAR5.VAR22 = FUN2(VAR7->VAR22);
    VAR5.VAR23 = FUN2(VAR7->VAR23);
    FUN7(VAR2->VAR24, VAR7->VAR21, VAR7->VAR11, VAR7->VAR19, VAR7->VAR18, VAR7->VAR20);
    FUN8(VAR2->VAR24, VAR7->VAR13, VAR7->VAR22, VAR7->VAR23);
    if ((VAR5.VAR13 & 0x3) != 0)
    {
        FUN4(VAR2, "", VAR5.VAR13);
        return;
    }
    VAR5.VAR25 = true;
    VAR5.VAR26 = VAR27;
    if (VAR3)
    {
        VAR5.VAR23 |= VAR28;
    }
    VAR2->VAR16 = VAR17;
    VAR2->VAR29 = 0;
    FUN9(&VAR2->VAR30, 0, &VAR5, VAR4);
    if (VAR4 == VAR31)
    {
        FUN10(VAR2);
    }
}