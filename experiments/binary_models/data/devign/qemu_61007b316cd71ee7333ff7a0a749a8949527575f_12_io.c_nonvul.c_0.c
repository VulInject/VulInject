static void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    int64_t VAR4 = VAR2->VAR5 & ~(VAR3 - 1);
    unsigned int VAR6 = FUN2(VAR2->VAR5 + VAR2->VAR7, VAR3) - VAR4;
    if (!VAR2->VAR8)
    {
        VAR2->VAR9->VAR10++;
        VAR2->VAR8 = true;
    }
    VAR2->VAR4 = FUN3(VAR2->VAR4, VAR4);
    VAR2->VAR6 = FUN4(VAR2->VAR6, VAR6);
}