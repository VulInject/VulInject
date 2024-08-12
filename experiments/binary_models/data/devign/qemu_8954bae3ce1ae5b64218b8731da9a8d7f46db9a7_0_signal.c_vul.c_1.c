FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (VAR6->VAR7 & VAR8)
        VAR9->VAR10 &= ~VAR11;
    if (VAR6 == VAR12)
    {
        VAR12 = 0;
        VAR9->VAR10 &= ~VAR11;
    }
    VAR6->VAR13 = 1;
    VAR6->VAR7 &= ~VAR8;
    if (FUN2(VAR14, VAR4, sizeof(*VAR4)))
        return -VAR15;
    VAR5 = FUN3(&VAR2->VAR16[0], &VAR4->VAR17[0], (sizeof(unsigned long) * 32));
    VAR5 |= FUN4(VAR2->VAR18, &VAR4->VAR19);
    VAR5 |= FUN4(VAR6->VAR20.VAR21, &VAR4->VAR22);
    if (VAR6->VAR20.VAR21 != 0)
        VAR5 |= FUN3(&VAR6->VAR20.VAR23[0], &VAR4->VAR24[0], ((sizeof(unsigned long) + (sizeof(unsigned long *))) * 16));
    return VAR5;
}