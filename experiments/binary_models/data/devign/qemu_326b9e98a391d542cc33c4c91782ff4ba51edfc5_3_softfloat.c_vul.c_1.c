VAR1 FUN1(float128 VAR2, int n VAR3)
{
    flag VAR4;
    int32 VAR5;
    uint64_t VAR6, VAR7;
    VAR7 = FUN2(VAR2);
    VAR6 = FUN3(VAR2);
    VAR5 = FUN4(VAR2);
    VAR4 = FUN5(VAR2);
    if (VAR5 == 0x7FFF)
    {
        return VAR2;
    }
    if (VAR5 != 0)
        VAR6 |= FUN6(0x0001000000000000);
    else if (VAR6 == 0 && VAR7 == 0)
        return VAR2;
    VAR5 += VAR8 - 1;
    return FUN7(VAR4, VAR5, VAR6, aSig1 VAR9);
}