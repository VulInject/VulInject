static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, const VAR5 *VAR6)
{
    unsigned VAR7 = FUN2(VAR4, 21, 5);
    unsigned VAR8 = FUN2(VAR4, 16, 5);
    unsigned VAR9 = FUN2(VAR4, 12, 4);
    unsigned VAR10 = FUN2(VAR4, 0, 5);
    TCGv VAR11, VAR12;
    ExitStatus VAR13;
    if (VAR9)
    {
        FUN3(VAR3);
    }
    VAR11 = FUN4(VAR3, VAR8);
    VAR12 = FUN4(VAR3, VAR7);
    VAR13 = FUN5(VAR3, VAR10, VAR11, VAR12, VAR9, VAR6->VAR14);
    return FUN6(VAR3, VAR13);
}