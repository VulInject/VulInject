static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    int VAR8 = VAR4->VAR9 & 1;
    uint32_t VAR10 = VAR2->VAR11.VAR12[VAR8].VAR13;
    VAR2->VAR11.VAR12[VAR8].VAR13 = VAR5 & 3;
    if ((VAR10 ^ VAR5) & 1)
    {
        FUN3(VAR7, VAR8);
    }
    else if ((VAR10 & VAR5) & 2)
    {
        FUN4(VAR7->VAR14[VAR8], (VAR10 & 4) && (VAR5 & 2));
    }
}