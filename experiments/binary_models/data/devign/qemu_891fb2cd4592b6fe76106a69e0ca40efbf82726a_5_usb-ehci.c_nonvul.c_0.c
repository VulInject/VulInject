static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[VAR3].VAR6;
    VAR8 *VAR9 = &VAR2->VAR9[VAR3];
    uint32_t VAR10;
    if (VAR2->VAR11[VAR3] == NULL)
        return;
    VAR4 = VAR4 & VAR12;
    VAR10 = *VAR9 & VAR12;
    if (!(VAR4 ^ VAR10))
    {
        return;
    }
    if (VAR6 && VAR6->VAR13)
    {
        FUN2(&VAR2->VAR7[VAR3]);
    }
    *VAR9 &= ~VAR12;
    *VAR9 |= VAR4;
    if (VAR6 && VAR6->VAR13)
    {
        FUN3(&VAR2->VAR7[VAR3]);
    }
}