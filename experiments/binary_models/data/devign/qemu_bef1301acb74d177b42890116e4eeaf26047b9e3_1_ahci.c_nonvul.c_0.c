static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = &VAR4->VAR7.VAR8[0];
    uint32_t VAR9 = (VAR10)(VAR6->VAR11 - VAR6->VAR12);
    uint32_t VAR13 = FUN3(VAR4->VAR14->VAR13);
    int VAR15 = VAR13 & VAR16;
    int VAR17 = VAR13 & VAR18;
    int VAR19 = 0;
    if (VAR17 && !VAR4->VAR20)
    {
        VAR4->VAR20 = true;
        VAR9 = 0;
        goto VAR21;
    }
    if (FUN4(VAR2, VAR15))
    {
        VAR19 = 1;
    }
    FUN5(VAR4->VAR22, "", VAR15 ? "" : "", VAR9, VAR17 ? "" : "", VAR19 ? "" : "");
    if (VAR19 && VAR9)
    {
        if (VAR15)
        {
            FUN6(VAR6->VAR12, VAR9, &VAR6->VAR23);
        }
        else
        {
            FUN7(VAR6->VAR12, VAR9, &VAR6->VAR23);
        }
    }
VAR21:
    VAR6->VAR12 = VAR6->VAR11;
    FUN8(VAR2, VAR9);
    VAR6->FUN9(VAR6);
    if (!(VAR6->VAR24 & VAR25))
    {
        FUN10(VAR4, FUN3(VAR4->VAR14->VAR24));
    }
}