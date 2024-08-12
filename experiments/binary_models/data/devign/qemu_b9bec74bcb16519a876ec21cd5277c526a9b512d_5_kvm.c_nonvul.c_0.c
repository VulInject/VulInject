int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    static const uint8_t VAR5 = 0xcc;
    if (FUN2(VAR2, VAR4->VAR6, (VAR7 *)&VAR4->VAR8, 1, 0) || FUN2(VAR2, VAR4->VAR6, (VAR7 *)&VAR5, 1, 1))
    {
        return -VAR9;
    }
    return 0;
}