static void FUN1(VAR1 *VAR2, int VAR3, tcg_target_long VAR4, tcg_target_long VAR5)
{
    VAR4 += VAR5;
    switch (VAR3)
    {
    case VAR6:
        if (VAR4 != (VAR7)VAR4)
            FUN2();
        *(VAR7 *)VAR2 = VAR4;
        break;
    case VAR8:
        VAR4 -= (long)VAR2;
        VAR4 >>= 2;
        if (!FUN3(VAR4, 22))
            FUN2();
        *(VAR7 *)VAR2 = ((*(VAR7 *)VAR2) & ~0x3fffff) | VAR4;
        break;
    default:
        FUN2();
    }
}