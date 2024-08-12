VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4)
{
    CPU_DoubleU VAR5;
    VAR5.VAR6 = VAR4;
    if (FUN2(FUN3(VAR5.VAR7)))
    {
        if (FUN2(FUN4(VAR5.VAR7)))
        {
            FUN5(VAR3, VAR8, 1);
            VAR5.VAR6 = FUN6(VAR5.VAR6);
        }
    }
    else if (FUN2(FUN7(VAR5.VAR7) && !FUN8(VAR5.VAR7)))
    {
        VAR5.VAR6 = FUN5(VAR3, VAR9, 1);
    }
    else
    {
        VAR5.VAR7 = FUN9(VAR5.VAR7, &VAR3->VAR10);
        VAR5.VAR7 = FUN10(VAR11, VAR5.VAR7, &VAR3->VAR10);
    }
    return VAR5.VAR6;
}