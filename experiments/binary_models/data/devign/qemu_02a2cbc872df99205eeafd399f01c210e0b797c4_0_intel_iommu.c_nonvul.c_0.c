static void FUN1(VAR1 *VAR2)
{
    uint64_t VAR3 = 0;
    VAR3 = FUN2(VAR2, VAR4);
    VAR2->VAR5 = 1UL << ((VAR3 & VAR6) + 1);
    VAR2->VAR7 = VAR3 & VAR8;
    FUN3(VAR2, true, 0, 0);
    FUN4(VAR9, "" VAR10 "" VAR11, VAR2->VAR7, VAR2->VAR5);
}