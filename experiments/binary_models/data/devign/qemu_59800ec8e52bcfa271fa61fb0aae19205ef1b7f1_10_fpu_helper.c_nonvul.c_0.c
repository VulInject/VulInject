VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4)
{
    CPU_DoubleU VAR5;
    VAR5.VAR6 = VAR4;
    if (FUN2(FUN3(VAR5.VAR7)))
    {
        VAR5.VAR6 = FUN4(VAR3, VAR8 | VAR9, 1);
    }
    else if (FUN2(FUN5(VAR5.VAR7) || FUN6(VAR5.VAR7)))
    {
        VAR5.VAR6 = FUN4(VAR3, VAR9, 1);
    }
    else
    {
        VAR5.VAR6 = FUN7(VAR5.VAR7, &VAR3->VAR10);
    }
    return VAR5.VAR6;
}