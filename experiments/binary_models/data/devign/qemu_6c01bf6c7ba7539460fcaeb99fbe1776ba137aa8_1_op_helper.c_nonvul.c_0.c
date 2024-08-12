VAR1 FUN1(uint64_t VAR2)
{
    CPU_DoubleU VAR3, VAR4;
    VAR3.VAR5 = 0x3FF0000000000000ULL;
    VAR4.VAR5 = VAR2;
    if (FUN2(FUN3(VAR4.VAR6)))
    {
        VAR4.VAR5 = FUN4(VAR7);
    }
    else if (FUN2(FUN5(VAR4.VAR6)))
    {
        VAR4.VAR5 = FUN6(VAR3.VAR6, VAR4.VAR6);
    }
    else
    {
        VAR4.VAR6 = FUN7(VAR3.VAR6, VAR4.VAR6, &VAR8->VAR9);
    }
    return VAR4.VAR6;
}