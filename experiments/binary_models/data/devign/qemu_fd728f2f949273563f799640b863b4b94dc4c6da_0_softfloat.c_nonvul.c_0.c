VAR1 FUN1(float64 a VAR2)
{
    uint64_t VAR3;
    uint32 VAR4;
    int VAR5 = FUN2(VAR6);
    VAR3 = FUN3(a VAR7);
    if (VAR3 > 0xffffffff)
    {
        VAR4 = 0xffffffff;
    }
    else
    {
        return VAR3;
    }
    FUN4(VAR5, VAR6);
    FUN5(float_flag_invalid VAR7);
    return VAR4;
}