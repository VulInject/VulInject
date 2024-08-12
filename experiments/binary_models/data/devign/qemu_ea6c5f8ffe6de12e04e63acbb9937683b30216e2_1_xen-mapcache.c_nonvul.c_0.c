void FUN1(void)
{
    unsigned long VAR1;
    struct rlimit VAR2;
    VAR3 = FUN2(sizeof(VAR4));
    FUN3(&VAR3->VAR5);
    VAR3->VAR6 = -1;
    FUN4(VAR7, &VAR2);
    if (VAR2.VAR8 < VAR9)
    {
        VAR2.VAR10 = VAR2.VAR8;
    }
    else
    {
        VAR2.VAR10 = VAR9;
    }
    FUN5(VAR7, &VAR2);
    VAR3->VAR11 = VAR2.VAR10;
    VAR3->VAR12 = (((VAR3->VAR11 >> VAR13) + (1UL << (VAR14 - VAR13)) - 1) >> (VAR14 - VAR13));
    VAR1 = VAR3->VAR12 * sizeof(VAR15);
    VAR1 = (VAR1 + VAR16 - 1) & ~(VAR16 - 1);
    FUN6("", VAR3->VAR12, VAR1);
    VAR3->VAR17 = FUN2(VAR1);
}