static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        VAR2->VAR7[VAR5].VAR8 = VAR4->VAR9;
    memcpy(&VAR2->VAR10, &VAR2->VAR7[0], sizeof(VAR2->VAR10));
    if (VAR2->VAR11 & (1 << VAR12))
        VAR2->VAR13 |= VAR14;
    if (VAR2->VAR10.VAR8 & (1 << VAR15))
        VAR2->VAR13 |= VAR16;
}