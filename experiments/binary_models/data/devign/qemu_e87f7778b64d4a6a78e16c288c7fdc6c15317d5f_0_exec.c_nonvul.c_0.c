static void FUN1(VAR1 *VAR2, hwaddr VAR3, hwaddr VAR4)
{
    uint8_t VAR5 = FUN2(VAR2);
    if (VAR5)
    {
        VAR5 = FUN3(VAR3, VAR4, VAR5);
    }
    if (VAR5 & (1 << VAR6))
    {
        FUN4(VAR3, VAR3 + VAR4);
        VAR5 &= ~(1 << VAR6);
    }
    FUN5(VAR3, VAR4, VAR5);
}