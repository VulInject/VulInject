static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    if (FUN2(VAR2, VAR6))
    {
        FUN3(VAR2, VAR4, VAR5);
    }
    else if (FUN2(VAR2, VAR7))
    {
        FUN3(VAR2, VAR4, VAR5 & 0xfffff6ff);
    }
    else
    {
        FUN3(VAR2, VAR4, VAR5 & 0xfffff1ff);
    }
}