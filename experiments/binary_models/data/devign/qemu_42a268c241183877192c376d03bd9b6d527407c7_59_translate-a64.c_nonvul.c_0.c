static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    unsigned int VAR4;
    uint64_t VAR5;
    if ((VAR3 & (1 << 4)) || (VAR3 & (1 << 24)))
    {
        FUN2(VAR2);
        return;
    }
    VAR5 = VAR2->VAR6 + FUN3(VAR3, 5, 19) * 4 - 4;
    VAR4 = FUN4(VAR3, 0, 4);
    if (VAR4 < 0x0e)
    {
        VAR7 *VAR8 = FUN5();
        FUN6(VAR4, VAR8);
        FUN7(VAR2, 0, VAR2->VAR6);
        FUN8(VAR8);
        FUN7(VAR2, 1, VAR5);
    }
    else
    {
        FUN7(VAR2, 0, VAR5);
    }
}