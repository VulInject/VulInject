static int FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4;
    EHCIitd VAR5;
    assert(!VAR3);
    VAR4 = FUN2(VAR2, VAR3);
    FUN3(VAR2, FUN4(VAR4), (VAR6 *)&VAR5, sizeof(VAR7) >> 2);
    FUN5(VAR2, VAR4, &VAR5);
    if (FUN6(VAR2, &VAR5) != 0)
    {
        return -1;
    }
    FUN7(VAR2, FUN4(VAR4), (VAR6 *)&VAR5, sizeof(VAR7) >> 2);
    FUN8(VAR2, VAR3, VAR5.VAR8);
    FUN9(VAR2, VAR3, VAR9);
    return 1;
}