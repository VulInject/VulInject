void FUN1(VAR1 *VAR2, hwaddr VAR3, uint64_t VAR4, uint64_t VAR5)
{
    hwaddr VAR6 = FUN2(VAR2);
    hwaddr VAR7 = VAR3 * VAR8;
    if (VAR2->VAR9)
    {
        VAR10 *VAR11 = FUN3(VAR2->VAR9);
        VAR11->FUN4(VAR2->VAR9, VAR3, VAR4, VAR5);
        return;
    }
    FUN5(FUN6(VAR2)->VAR12, VAR6 + VAR7, VAR4);
    FUN5(FUN6(VAR2)->VAR12, VAR6 + VAR7 + VAR8 / 2, VAR5);
}