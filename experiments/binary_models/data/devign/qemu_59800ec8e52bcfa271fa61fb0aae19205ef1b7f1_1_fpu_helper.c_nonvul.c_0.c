VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, uint64_t VAR5)
{
    CPU_DoubleU VAR6, VAR7;
    VAR6.VAR8 = VAR4;
    VAR7.VAR8 = VAR5;
    if (FUN2(FUN3(VAR6.VAR9) && FUN3(VAR7.VAR9)))
    {
        VAR6.VAR8 = FUN4(VAR3, VAR10, 1);
    }
    else if (FUN2(FUN5(VAR6.VAR9) && FUN5(VAR7.VAR9)))
    {
        VAR6.VAR8 = FUN4(VAR3, VAR11, 1);
    }
    else
    {
        if (FUN2(FUN6(VAR6.VAR9) || FUN6(VAR7.VAR9)))
        {
            FUN4(VAR3, VAR12, 1);
        }
        VAR6.VAR9 = FUN7(VAR6.VAR9, VAR7.VAR9, &VAR3->VAR13);
    }
    return VAR6.VAR8;
}