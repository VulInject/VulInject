void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    CRW VAR4;
    uint64_t VAR5;
    int VAR6;
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR5 = FUN2(VAR8, VAR3);
    if (VAR5 & 3)
    {
        FUN3(VAR8, VAR9, 2);
        return;
    }
    VAR6 = FUN4(&VAR4);
    if (FUN5(VAR2, VAR5, &VAR4, sizeof(VAR4)) == 0)
    {
        FUN6(VAR2, VAR6);
    }
    else if (VAR6 == 0)
    {
        FUN7(&VAR4);
    }
}