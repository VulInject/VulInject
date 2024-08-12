void FUN1(VAR1 *VAR2)
{
    uint8_t VAR3;
    uint16_t VAR4;
    uint32_t VAR5;
    uint8_t VAR6;
    uint8_t VAR7;
    void *VAR8;
    VAR3 = FUN2(VAR2, VAR9);
    FUN3(VAR3, !=, 0);
    VAR4 = FUN4(VAR2, VAR3 + VAR10);
    FUN5(VAR2, VAR3 + VAR10, VAR4 | VAR11);
    VAR5 = FUN6(VAR2, VAR3 + VAR12);
    VAR6 = VAR5 & VAR13;
    VAR8 = FUN7(VAR2, VAR6, NULL);
    VAR2->VAR14 = VAR8 + (VAR5 & ~VAR13);
    VAR5 = FUN6(VAR2, VAR3 + VAR15);
    VAR7 = VAR5 & VAR13;
    if (VAR7 != VAR6)
    {
        VAR8 = FUN7(VAR2, VAR7, NULL);
    }
    VAR2->VAR16 = VAR8 + (VAR5 & ~VAR13);
    FUN8(VAR2->VAR14 != NULL);
    FUN8(VAR2->VAR16 != NULL);
    VAR2->VAR17 = true;
}