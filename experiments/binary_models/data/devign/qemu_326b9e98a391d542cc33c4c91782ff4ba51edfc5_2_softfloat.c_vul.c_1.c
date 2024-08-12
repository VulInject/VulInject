VAR1 FUN1(floatx80 VAR2, int n VAR3)
{
    flag VAR4;
    int16 VAR5;
    uint64_t VAR6;
    VAR6 = FUN2(VAR2);
    VAR5 = FUN3(VAR2);
    VAR4 = FUN4(VAR2);
    if (VAR5 == 0x7FF)
    {
        return VAR2;
    }
    if (VAR5 == 0 && VAR6 == 0)
        return VAR2;
    VAR5 += VAR7;
    return FUN5(FUN6(VAR8), VAR4, VAR5, VAR6, 0 VAR9);
}