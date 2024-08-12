static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    uint64_t VAR5 = VAR3 + VAR4;
    if ((VAR3 & 511) || VAR4 < 512)
        if (!VAR2->VAR6 || FUN2(VAR2->VAR6, VAR3 >> 9, VAR2->VAR7, 1) < 0)
        {
            fprintf(VAR8, "");
            return;
        }
    if (VAR5 > (VAR3 & ~511) + 512)
    {
        memcpy(VAR2->VAR7 + (VAR3 & 511), VAR2->VAR9, 512 - (VAR3 & 511));
        if (FUN3(VAR2->VAR6, VAR3 >> 9, VAR2->VAR7, 1) < 0)
        {
            fprintf(VAR8, "");
            return;
        }
        if (FUN2(VAR2->VAR6, VAR5 >> 9, VAR2->VAR7, 1) < 0)
        {
            fprintf(VAR8, "");
            return;
        }
        memcpy(VAR2->VAR7, VAR2->VAR9 + 512 - (VAR3 & 511), VAR5 & 511);
        if (FUN3(VAR2->VAR6, VAR5 >> 9, VAR2->VAR7, 1) < 0)
        {
            fprintf(VAR8, "");
        }
    }
    else
    {
        memcpy(VAR2->VAR7 + (VAR3 & 511), VAR2->VAR9, VAR4);
        if (!VAR2->VAR6 || FUN3(VAR2->VAR6, VAR3 >> 9, VAR2->VAR7, 1) < 0)
        {
            fprintf(VAR8, "");
        }
    }
}