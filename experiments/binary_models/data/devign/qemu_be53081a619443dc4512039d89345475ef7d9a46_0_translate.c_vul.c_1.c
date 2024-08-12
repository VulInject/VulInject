static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = VAR2->VAR4;
    FUN2(VAR2);
    if (VAR3 & VAR5)
    {
        VAR2->VAR4 &= ~VAR5;
        FUN3(VAR6, VAR2->VAR4);
        VAR2->VAR7 = VAR8;
        if (VAR3 & VAR9)
        {
            FUN4(VAR2);
        }
        else if (VAR3 & VAR10)
        {
            FUN5(VAR2);
        }
    }
}