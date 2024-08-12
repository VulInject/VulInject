static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    VAR6 *VAR7 = FUN2(VAR5);
    uint32_t VAR8 = 1 << VAR2;
    if (VAR2 > 31 || VAR2 < 0)
    {
        return;
    }
    if (VAR3)
    {
        VAR5->VAR9.VAR10 |= VAR8;
    }
    else
    {
        VAR5->VAR9.VAR10 &= ~VAR8;
    }
    if (VAR5->VAR9.VAR10 & VAR5->VAR9.VAR11)
    {
        FUN3(VAR7, VAR12);
    }
    else
    {
        FUN4(VAR7, VAR12);
        VAR5->VAR9.VAR10 = 0;
    }
}