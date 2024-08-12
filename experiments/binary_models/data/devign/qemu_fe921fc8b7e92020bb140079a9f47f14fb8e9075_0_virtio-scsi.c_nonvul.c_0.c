int FUN1(VAR1 *VAR2, ulong VAR3, void *VAR4, int VAR5)
{
    int VAR6;
    int VAR7 = VAR2->VAR8;
    unsigned int VAR9;
    unsigned int VAR10 = FUN2(VAR2->VAR11.VAR12.VAR13, VAR2->VAR10);
    do
    {
        VAR6 = FUN2(VAR5, VAR10);
        VAR9 = VAR6 * FUN3() * VAR7;
        if (!FUN4(VAR2, VAR3 * VAR7, VAR6 * VAR7, VAR4, VAR9))
        {
            FUN5(&VAR14, "");
        }
        VAR4 += VAR9;
        VAR3 += VAR6;
        VAR5 -= VAR6;
    } while (VAR5 > 0);
    return 0;
}