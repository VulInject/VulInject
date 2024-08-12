VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4, uint32_t VAR5)
{
    int VAR6 = FUN2(VAR4);
    *VAR3 = *VAR4;
    FUN3(VAR3, FUN4(VAR6, VAR5), 0);
    if (FUN5(VAR4) == false)
    {
        return VAR7;
    }
    return FUN6(VAR3);
}