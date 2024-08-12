static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 < 8)
    {
        VAR2->VAR3 = 8;
    }
    if (VAR2->VAR3 > 256)
    {
        VAR2->VAR3 = 256;
    }
    VAR2->VAR4 = VAR2->VAR3 * 1024 * 1024;
    if (VAR2->VAR5 != -1)
    {
        VAR2->VAR6.VAR7 = VAR2->VAR5 * 1024 * 1024;
    }
    if (VAR2->VAR6.VAR7 < VAR2->VAR4 * 2)
    {
        VAR2->VAR6.VAR7 = VAR2->VAR4 * 2;
    }
    if (VAR2->VAR8 != -1)
    {
        VAR2->VAR9 = VAR2->VAR8 * 1024 * 1024;
    }
    if (VAR2->VAR9 < 4096)
    {
        VAR2->VAR9 = 4096;
    }
    if (VAR2->VAR10 != -1)
    {
        VAR2->VAR7 = (VAR11)VAR2->VAR10 * 1024 * 1024;
    }
    if (VAR2->VAR7 < VAR2->VAR9)
    {
        VAR2->VAR7 = VAR2->VAR9;
    }
    if (VAR2->VAR12 == 1)
    {
        VAR2->VAR9 = 4096;
        VAR2->VAR7 = 4096;
    }
    VAR2->VAR4 = FUN2(VAR2->VAR4);
    VAR2->VAR6.VAR7 = FUN2(VAR2->VAR6.VAR7);
    VAR2->VAR9 = FUN2(VAR2->VAR9);
    VAR2->VAR7 = FUN2(VAR2->VAR7);
}