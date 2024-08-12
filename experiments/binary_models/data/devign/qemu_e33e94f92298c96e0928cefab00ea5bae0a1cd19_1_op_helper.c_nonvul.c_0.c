VAR1 FUN1(uint64_t VAR2, uint64_t VAR3)
{
    CPU_DoubleU VAR4, VAR5;
    VAR4.VAR6 = VAR2;
    VAR5.VAR6 = VAR3;
    if (FUN2(FUN3(VAR4.VAR7) || FUN3(VAR5.VAR7)))
    {
        VAR4.VAR6 = FUN4(VAR8);
    }
    else if (FUN2(FUN5(VAR4.VAR7) && FUN5(VAR5.VAR7)))
    {
        VAR4.VAR6 = FUN4(VAR9);
    }
    else if (FUN2(FUN6(VAR4.VAR7) && FUN6(VAR5.VAR7)))
    {
        VAR4.VAR6 = FUN4(VAR10);
    }
    else
    {
        VAR4.VAR7 = FUN7(VAR4.VAR7, VAR5.VAR7, &VAR11->VAR12);
    }
    VAR4.VAR7 = FUN7(VAR4.VAR7, VAR5.VAR7, &VAR11->VAR12);
    return VAR4.VAR6;
}