static void FUN1(VAR1 *VAR2)
{
    int64_t VAR3 = FUN2(VAR4);
    if (VAR2->VAR5 & (1 << 15))
        VAR2->VAR6 += VAR3 - VAR2->VAR7;
    VAR2->VAR7 = VAR3;
}