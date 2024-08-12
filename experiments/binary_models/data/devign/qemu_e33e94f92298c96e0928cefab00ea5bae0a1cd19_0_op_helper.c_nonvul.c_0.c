VAR1 FUN1(uint64_t VAR2)
{
    CPU_DoubleU VAR3, VAR4;
    float32 VAR5;
    VAR3.VAR6 = 0x3FF0000000000000ULL;
    VAR4.VAR6 = VAR2;
    if (FUN2(FUN3(VAR4.VAR7)))
    {
        VAR4.VAR6 = FUN4(VAR8);
    }
    else
    {
        VAR4.VAR7 = FUN5(VAR3.VAR7, VAR4.VAR7, &VAR9->VAR10);
        VAR5 = FUN6(VAR4.VAR7, &VAR9->VAR10);
        VAR4.VAR7 = FUN7(VAR5, &VAR9->VAR10);
    }
    return VAR4.VAR6;
}