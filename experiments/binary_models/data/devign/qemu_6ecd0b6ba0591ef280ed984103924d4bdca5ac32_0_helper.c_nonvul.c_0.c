static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    if (FUN2(VAR2, VAR6))
    {
        VAR2->VAR7.VAR8 = VAR5 & 0xf;
    }
    else
    {
        VAR2->VAR7.VAR8 = VAR5 & 1;
    }
}