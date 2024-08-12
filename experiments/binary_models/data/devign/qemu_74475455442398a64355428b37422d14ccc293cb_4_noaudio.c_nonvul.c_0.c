static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    int VAR5 = FUN2(VAR2);
    int VAR6 = VAR2->VAR7 - VAR5;
    int VAR7 = 0;
    if (VAR6)
    {
        int64_t VAR8 = FUN3(VAR9);
        int64_t VAR10 = VAR8 - VAR4->VAR11;
        int64_t VAR12 = FUN4(VAR10, VAR2->VAR13.VAR14, FUN5());
        VAR4->VAR11 = VAR8;
        VAR12 = FUN6(VAR12, VAR15);
        VAR7 = VAR12 >> VAR2->VAR13.VAR16;
        VAR7 = FUN6(VAR7, VAR6);
    }
    return VAR7;
}