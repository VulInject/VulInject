static void FUN1(VAR1 *VAR2, VAR3 *VAR4, hwaddr VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    uint32_t VAR14 = 0, VAR15;
    int VAR16;
    VAR9 = (VAR8 *)VAR4->VAR17;
    FUN2(&VAR9->VAR18);
    VAR13 = VAR7->VAR13;
    FUN3("", VAR9->VAR18, VAR13->VAR19, VAR7->VAR20 ? "" : "");
    if (VAR9->VAR18 > VAR13->VAR19)
    {
        VAR15 = 3;
        goto VAR21;
    }
    if (!VAR9->VAR18)
    {
        VAR7->VAR20 = false;
    }
    else if (VAR7->VAR20)
    {
        VAR15 = 0x100;
        goto VAR21;
    }
    VAR15 = 0;
    VAR14 = FUN4(VAR13->VAR19 - VAR9->VAR18, 4096 - sizeof(VAR10));
VAR21:
    VAR16 = sizeof(VAR10) + VAR14;
    VAR11 = FUN5(VAR16);
    VAR11->VAR19 = FUN6(VAR16);
    VAR11->VAR15 = FUN6(VAR15);
    memcpy(VAR11->VAR13, VAR13->VAR22 + VAR9->VAR18, VAR14);
    FUN7(VAR5, VAR11, VAR16);
    FUN8(VAR11);
}