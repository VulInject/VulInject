static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    uint32_t VAR9 = VAR8->VAR10;
    if (FUN4(VAR2, VAR11))
    {
        VAR9 |= (1 << 31);
    }
    *VAR6 = VAR9;
    return 0;
}