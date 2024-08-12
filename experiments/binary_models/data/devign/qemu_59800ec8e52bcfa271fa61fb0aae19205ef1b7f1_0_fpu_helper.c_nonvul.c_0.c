VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4)
{
    CPU_DoubleU VAR5;
    float32 VAR6;
    VAR5.VAR7 = VAR4;
    if (FUN2(FUN3(VAR5.VAR8)))
    {
        FUN4(VAR3, VAR9, 1);
    }
    VAR6 = FUN5(VAR5.VAR8, &VAR3->VAR10);
    VAR5.VAR8 = FUN6(VAR6, &VAR3->VAR10);
    return VAR5.VAR7;
}