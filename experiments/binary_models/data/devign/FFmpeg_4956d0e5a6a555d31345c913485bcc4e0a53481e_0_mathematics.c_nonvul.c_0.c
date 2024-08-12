VAR1 FUN1(AVRational VAR2, int64_t VAR3, AVRational VAR4, int64_t VAR5)
{
    if (VAR5 != 1)
        VAR4 = FUN2(VAR4, (VAR6){VAR5, 1});
    if (FUN3(VAR4, VAR2) < 0)
    {
        return VAR3;
    }
    else
    {
        int64_t VAR7 = FUN4(VAR3, VAR2, VAR4);
        int64_t VAR8 = FUN4(VAR7, VAR4, VAR2);
        return FUN4(VAR7 + 1, VAR4, VAR2) + (VAR3 - VAR8);
    }
}