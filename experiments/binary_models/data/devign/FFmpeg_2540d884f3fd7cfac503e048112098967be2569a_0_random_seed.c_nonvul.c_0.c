static VAR1 FUN1(void)
{
    uint8_t VAR2[120];
    struct VAR3 *VAR4 = (void *)VAR2;
    clock_t VAR5 = 0;
    static uint64_t VAR6 = 0;
    static uint32_t VAR7[512] = {0};
    unsigned char VAR8[20];
    uint64_t VAR9 = VAR6;
    FUN2(sizeof(VAR2) >= VAR10);
    if (VAR11)
    {
        memset(VAR7, 0, sizeof(VAR7));
        VAR9 = VAR6 = 0;
    }
    else
    {
        VAR7[13] ^= FUN3();
        VAR7[41] ^= FUN3() >> 32;
    }
    for (;;)
    {
        clock_t VAR12 = FUN4();
        if (VAR5 == VAR12)
        {
            VAR7[VAR6 & 511]++;
        }
        else
        {
            VAR7[++VAR6 & 511] += (VAR12 - VAR5) % 3294638521U;
            if (VAR9 && VAR6 - VAR9 > 4 || VAR6 - VAR9 > 64 || VAR11 && VAR6 - VAR9 > 8)
                break;
        }
        VAR5 = VAR12;
    }
    if (VAR11)
    {
        VAR7[0] = VAR7[1] = 0;
    }
    else
    {
        VAR7[111] += FUN3();
    }
    FUN5(VAR4, 160);
    FUN6(VAR4, (const VAR13 *)VAR7, sizeof(VAR7));
    FUN7(VAR4, VAR8);
    return FUN8(VAR8) + FUN8(VAR8 + 16);
}