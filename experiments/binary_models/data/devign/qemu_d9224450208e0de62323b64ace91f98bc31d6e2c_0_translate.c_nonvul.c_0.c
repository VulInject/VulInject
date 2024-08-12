static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int16_t VAR6)
{
    if (VAR2->VAR7 & (1 << VAR8))
    {
        FUN2(VAR2);
        switch (VAR3)
        {
        case VAR9:
        case VAR10:
            FUN3(VAR2, VAR11);
        default:
            FUN4(VAR2, VAR3, VAR4, VAR5, VAR6);
        }
    }
    else
    {
        FUN5(VAR2, VAR12, 1);
    }
}