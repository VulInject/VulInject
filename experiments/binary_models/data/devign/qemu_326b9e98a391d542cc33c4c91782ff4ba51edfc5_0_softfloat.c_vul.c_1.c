VAR1 FUN1(float64 VAR2, int n VAR3)
{
    flag VAR4;
    int16 VAR5;
    uint64_t VAR6;
    VAR2 = FUN2(a VAR7);
    VAR6 = FUN3(VAR2);
    VAR5 = FUN4(VAR2);
    VAR4 = FUN5(VAR2);
    if (VAR5 == 0x7FF)
    {
        return VAR2;
    }
    if (VAR5 != 0)
        VAR6 |= FUN6(0x0010000000000000);
    else if (VAR6 == 0)
        return VAR2;
    VAR5 += VAR8 - 1;
    VAR6 <<= 10;
    return FUN7(VAR4, VAR5, aSig VAR7);
}