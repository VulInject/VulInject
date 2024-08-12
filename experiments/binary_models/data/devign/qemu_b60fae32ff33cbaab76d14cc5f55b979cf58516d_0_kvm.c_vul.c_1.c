int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    uint8_t VAR5[sizeof(VAR6)];
    if (FUN2(VAR2, VAR4->VAR7, VAR5, sizeof(VAR6), 0))
    {
        return -VAR8;
    }
    else if (memcmp(VAR5, VAR6, sizeof(VAR6)))
    {
        return -VAR8;
    }
    else if (FUN2(VAR2, VAR4->VAR7, (VAR9 *)&VAR4->VAR10, sizeof(VAR6), 1))
    {
        return -VAR8;
    }
    return 0;
}