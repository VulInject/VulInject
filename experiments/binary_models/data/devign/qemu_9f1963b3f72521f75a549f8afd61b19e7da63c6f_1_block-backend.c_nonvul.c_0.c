int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    int VAR5 = FUN2(VAR2, VAR3, VAR4);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    return FUN3(FUN4(VAR2), VAR3 << VAR6, VAR4 << VAR6);
}