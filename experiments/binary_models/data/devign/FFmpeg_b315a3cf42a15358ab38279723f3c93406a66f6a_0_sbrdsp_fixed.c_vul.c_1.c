static VAR1 FUN1(int (*VAR2)[2], int VAR3)
{
    SoftFloat VAR4;
    uint64_t VAR5 = 0, VAR6;
    int VAR7, VAR8;
    unsigned VAR9;
    for (VAR7 = 0; VAR7 < VAR3; VAR7 += 2)
    {
        FUN2(FUN3(VAR2[VAR7 + 0][0]) >> 29 == 0);
        VAR5 += (VAR10)VAR2[VAR7 + 0][0] * VAR2[VAR7 + 0][0];
        FUN2(FUN3(VAR2[VAR7 + 0][1]) >> 29 == 0);
        VAR5 += (VAR10)VAR2[VAR7 + 0][1] * VAR2[VAR7 + 0][1];
        FUN2(FUN3(VAR2[VAR7 + 1][0]) >> 29 == 0);
        VAR5 += (VAR10)VAR2[VAR7 + 1][0] * VAR2[VAR7 + 1][0];
        FUN2(FUN3(VAR2[VAR7 + 1][1]) >> 29 == 0);
        VAR5 += (VAR10)VAR2[VAR7 + 1][1] * VAR2[VAR7 + 1][1];
    }
    VAR9 = VAR5 >> 32;
    if (VAR9 == 0)
    {
        VAR8 = 1;
    }
    else
    {
        VAR8 = -1;
        while (VAR9 < 0x80000000U)
        {
            VAR9 <<= 1;
            VAR8++;
        }
        VAR8 = 32 - VAR8;
    }
    VAR6 = 1ULL << (VAR8 - 1);
    VAR9 = ((VAR5 + VAR6) >> VAR8);
    VAR9 >>= 1;
    VAR4 = FUN4(VAR9, 15 - VAR8);
    return VAR4;
}