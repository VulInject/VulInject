void FUN1(void *VAR1, uint8_t VAR2, uint64_t VAR3)
{
    if (VAR2 != 0 || !FUN2(VAR1, VAR3))
    {
        memset(VAR1, VAR2, VAR3);
    }
}