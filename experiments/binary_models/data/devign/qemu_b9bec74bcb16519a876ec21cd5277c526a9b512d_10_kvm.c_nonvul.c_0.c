int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    uint8_t VAR5;
    if (FUN2(VAR2, VAR4->VAR6, &VAR5, 1, 0) || VAR5 != 0xcc || FUN2(VAR2, VAR4->VAR6, (VAR7 *)&VAR4->VAR8, 1, 1))
    {
        return -VAR9;
    }
    return 0;
}