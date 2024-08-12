static VAR1 FUN1(VAR2 *VAR3, TCGCond VAR4, int VAR5, int32_t VAR6, int VAR7)
{
    TCGv VAR8;
    if (VAR7)
    {
        VAR8 = FUN2();
        FUN3(VAR8, FUN4(VAR3, VAR5), 1);
    }
    else
    {
        VAR8 = FUN4(VAR3, VAR5);
    }
    return FUN5(VAR3, VAR4, VAR8, VAR6);
}