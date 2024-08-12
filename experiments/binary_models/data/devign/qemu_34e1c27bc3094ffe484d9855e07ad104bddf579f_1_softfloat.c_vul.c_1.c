VAR1 FUN1(float32 a VAR2)
{
    int64_t VAR3;
    uint32 VAR4;
    VAR3 = FUN2(a VAR5);
    if (VAR3 < 0)
    {
        VAR4 = 0;
        FUN3(float_flag_invalid VAR5);
    }
    else if (VAR3 > 0xffffffff)
    {
        VAR4 = 0xffffffff;
        FUN3(float_flag_invalid VAR5);
    }
    else
    {
        VAR4 = VAR3;
    }
    return VAR4;
}