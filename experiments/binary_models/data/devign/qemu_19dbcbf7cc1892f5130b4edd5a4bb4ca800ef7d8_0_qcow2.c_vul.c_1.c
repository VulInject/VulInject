static int FUN1(VAR1 *VAR2)
{
    uint64_t VAR3;
    uint64_t VAR4;
    int VAR5;
    int VAR6;
    QCowL2Meta VAR7;
    VAR3 = FUN2(VAR2) >> 9;
    VAR4 = 0;
    FUN3(&VAR7.VAR8);
    VAR7.VAR9 = 0;
    while (VAR3)
    {
        VAR5 = FUN4(VAR3, VAR10 >> 9);
        VAR6 = FUN5(VAR2, VAR4, 0, VAR5, &VAR5, &VAR7);
        if (VAR6 < 0)
        {
            return -1;
        }
        if (FUN6(VAR2, &VAR7) < 0)
        {
            FUN7(VAR2, VAR7.VAR9, VAR7.VAR11);
            return -1;
        }
        FUN8(&VAR7);
        VAR3 -= VAR5;
        VAR4 += VAR5 << 9;
    }
    if (VAR7.VAR9 != 0)
    {
        uint8_t VAR12[512];
        memset(VAR12, 0, 512);
        FUN9(VAR2->VAR13, (VAR7.VAR9 >> 9) + VAR5 - 1, VAR12, 1);
    }
    return 0;
}