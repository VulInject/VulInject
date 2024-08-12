FUN1(VAR1 *VAR2, int VAR3, uint16_t VAR4)
{
    VAR2->VAR5[VAR6] = VAR4 & ~(0x3f | VAR7 | VAR8);
    if (FUN2(VAR2) && (VAR4 & VAR8))
    {
        FUN3(VAR2);
        FUN4(VAR9, "");
        FUN5(VAR2->VAR10, FUN6(VAR11) + 500);
    }
}