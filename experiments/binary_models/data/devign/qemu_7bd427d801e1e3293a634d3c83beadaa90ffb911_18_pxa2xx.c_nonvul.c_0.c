static void FUN1(VAR1 *VAR2)
{
    int64_t VAR3 = FUN2(VAR4);
    VAR2->VAR5 += ((VAR3 - VAR2->VAR6) << 15) / (1000 * ((VAR2->VAR7 & 0xffff) + 1));
    VAR2->VAR8 += ((VAR3 - VAR2->VAR6) << 15) / (1000 * ((VAR2->VAR7 & 0xffff) + 1));
    VAR2->VAR6 = VAR3;
}