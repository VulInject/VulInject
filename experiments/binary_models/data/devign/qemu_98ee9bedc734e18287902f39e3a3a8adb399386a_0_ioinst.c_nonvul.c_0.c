void FUN1(VAR1 *VAR2, uint32_t VAR3, uintptr_t VAR4)
{
    CRW VAR5;
    uint64_t VAR6;
    int VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    uint8_t VAR10;
    VAR6 = FUN2(VAR9, VAR3, &VAR10);
    if (VAR6 & 3)
    {
        FUN3(VAR9, VAR11, 4, VAR4);
        return;
    }
    VAR7 = FUN4(&VAR5);
    if (FUN5(VAR2, VAR6, VAR10, &VAR5, sizeof(VAR5)) == 0)
    {
        FUN6(VAR2, VAR7);
    }
    else
    {
        if (VAR7 == 0)
        {
            FUN7(&VAR5);
        }
        FUN8(VAR2, VAR4);
    }
}