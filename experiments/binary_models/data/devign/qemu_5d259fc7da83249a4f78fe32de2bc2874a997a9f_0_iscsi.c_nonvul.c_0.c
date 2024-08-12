static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6.VAR7 || VAR4->VAR6.VAR8)
    {
        if (VAR4->VAR9.VAR10 < 0xffffffff)
        {
            VAR2->VAR9.VAR11 = FUN2(VAR4->VAR9.VAR10, VAR4);
        }
        VAR2->VAR9.VAR12 = FUN2(VAR4->VAR9.VAR13, VAR4);
        if (VAR4->VAR9.VAR14 < 0xffffffff)
        {
            VAR2->VAR9.VAR15 = FUN2(VAR4->VAR9.VAR14, VAR4);
        }
        VAR2->VAR9.VAR16 = FUN2(VAR4->VAR9.VAR13, VAR4);
    }
    VAR2->VAR9.VAR17 = FUN2(VAR4->VAR9.VAR18, VAR4);
    return 0;
}