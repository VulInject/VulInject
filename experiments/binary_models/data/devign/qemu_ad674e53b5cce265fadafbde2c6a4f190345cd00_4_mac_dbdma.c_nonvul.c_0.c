static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4, uint16_t VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR7;
    uint32_t VAR8;
    FUN2("");
    if (VAR3 != VAR9)
    {
        FUN3("", VAR3);
        FUN4(VAR2);
        return;
    }
    FUN5(VAR4, (VAR10 *)&VAR8, VAR5);
    if (VAR5 == 2)
        VAR8 = (VAR8 << 16) | (VAR7->VAR11 & 0x0000ffff);
    else if (VAR5 == 1)
        VAR8 = (VAR8 << 24) | (VAR7->VAR11 & 0x00ffffff);
    VAR7->VAR11 = VAR8;
    if (FUN6(VAR2))
        goto VAR12;
    VAR7->VAR13 = FUN7(VAR2->VAR14[VAR15]);
    FUN8(VAR2);
    VAR2->VAR14[VAR15] &= ~VAR16;
    FUN9(VAR2);
    FUN10(VAR2);
VAR12:
    FUN11(VAR17);
}