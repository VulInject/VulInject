static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = &VAR2->VAR10;
    uint16_t VAR11 = 0;
    VAR11 = FUN2(VAR9->VAR12 + VAR5);
    if (VAR11 & VAR13)
    {
        FUN3(&VAR2->VAR10, "");
        FUN4(&VAR2->VAR14, VAR5, VAR11 & ~VAR13);
    }
    VAR2->VAR15->VAR16 = VAR5;
    *VAR7 = VAR4->VAR17;
    return 0;
}