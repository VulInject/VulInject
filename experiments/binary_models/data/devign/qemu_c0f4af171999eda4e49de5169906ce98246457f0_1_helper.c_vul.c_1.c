static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint64_t VAR5)
{
    VAR5 &= 0x3fff;
    if (VAR2->VAR6.VAR7 != VAR5)
    {
        FUN2(VAR2);
        VAR2->VAR6.VAR7 = VAR5;
    }
}