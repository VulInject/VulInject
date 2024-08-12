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
    VAR8 = VAR7->VAR10;
    if (VAR5 == 2)
        VAR8 >>= 16;
    else if (VAR5 == 1)
        VAR8 >>= 24;
    FUN5(VAR4, (VAR11 *)&VAR8, VAR5);
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