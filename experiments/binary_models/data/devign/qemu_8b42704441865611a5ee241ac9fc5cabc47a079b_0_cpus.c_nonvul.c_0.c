static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int64_t VAR4;
    VAR4 = FUN2();
    if (VAR5)
    {
        int64_t VAR6;
        int VAR7;
        VAR8.VAR9 -= (VAR2->VAR10.VAR11.VAR12 + VAR2->VAR13);
        VAR2->VAR10.VAR11.VAR12 = 0;
        VAR2->VAR13 = 0;
        VAR6 = FUN3();
        VAR8.VAR9 += VAR6;
        VAR7 = (VAR6 > 0xffff) ? 0xffff : VAR6;
        VAR6 -= VAR7;
        VAR2->VAR10.VAR11.VAR12 = VAR7;
        VAR2->VAR13 = VAR6;
    }
    VAR3 = FUN4(VAR2);
    VAR14 += FUN2() - VAR4;
    if (VAR5)
    {
        VAR8.VAR9 -= (VAR2->VAR10.VAR11.VAR12 + VAR2->VAR13);
        VAR2->VAR10.VAR15 = 0;
        VAR2->VAR13 = 0;
        FUN5();
    }
    return VAR3;
}