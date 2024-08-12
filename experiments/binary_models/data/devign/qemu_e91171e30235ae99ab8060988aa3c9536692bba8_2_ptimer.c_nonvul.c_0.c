static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = VAR2->VAR3;
    uint64_t VAR4 = VAR2->VAR4;
    if (VAR2->VAR5 == 0)
    {
        FUN2(VAR2);
        VAR2->VAR5 = VAR2->VAR6;
    }
    if (VAR2->VAR5 == 0 || VAR2->VAR4 == 0)
    {
        fprintf(VAR7, "");
        VAR2->VAR8 = 0;
        return;
    }
    if (VAR2->VAR8 == 1 && (VAR2->VAR5 * VAR4 < 10000) && !VAR9)
    {
        VAR4 = 10000 / VAR2->VAR5;
        VAR3 = 0;
    }
    VAR2->VAR10 = VAR2->VAR11;
    VAR2->VAR11 = VAR2->VAR10 + VAR2->VAR5 * VAR4;
    if (VAR3)
    {
        VAR2->VAR11 += ((VAR12)VAR3 * VAR2->VAR5) >> 32;
    }
    FUN3(VAR2->VAR13, VAR2->VAR11);
}