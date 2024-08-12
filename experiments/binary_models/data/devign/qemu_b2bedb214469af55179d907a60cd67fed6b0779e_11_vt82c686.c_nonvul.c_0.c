static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR8, VAR2);
    FUN3("", VAR3, VAR4, VAR5);
    FUN4(VAR2, VAR3, VAR4, VAR5);
    if (VAR3 == 0x85)
    {
        if (VAR4 & 0x2)
        {
            FUN5(0x3f0, 2);
            FUN6(0x3f0, 2, 1, VAR9, &VAR7->VAR10);
            FUN7(0x3f0, 2, 1, VAR11, &VAR7->VAR10);
        }
        else
        {
            FUN5(0x3f0, 2);
        }
    }
}