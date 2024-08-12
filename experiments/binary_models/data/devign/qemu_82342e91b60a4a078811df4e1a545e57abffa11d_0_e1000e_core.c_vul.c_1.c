FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    if ((VAR2->VAR5[VAR6] & VAR7) && (VAR2->VAR5[VAR8] & VAR9))
    {
        FUN2();
        FUN3(VAR2, VAR2->VAR5[VAR10]);
    }
    FUN4(VAR4, VAR2->VAR5[VAR6], VAR2->VAR5[VAR6] & ~VAR4);
    VAR2->VAR5[VAR6] &= ~VAR4;
    FUN5(VAR2);
}