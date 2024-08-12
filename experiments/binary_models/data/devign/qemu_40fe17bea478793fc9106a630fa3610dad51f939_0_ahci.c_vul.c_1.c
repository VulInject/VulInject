static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR6[0];
    VAR7 *VAR8 = &VAR2->VAR9;
    if (VAR2->VAR10)
    {
        return;
    }
    if (FUN2(VAR2))
    {
        VAR2->VAR10 = true;
        VAR8->VAR11 = (VAR4->VAR12 << 24) | (VAR4->VAR13 << 16) | (VAR4->VAR14 << 8) | (VAR4->VAR15 & 0xFF);
    }
}