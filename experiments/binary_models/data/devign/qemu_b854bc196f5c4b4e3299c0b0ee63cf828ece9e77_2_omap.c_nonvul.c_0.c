static inline void FUN1(struct VAR1 *VAR2)
{
    int64_t VAR3;
    if (VAR2->VAR4 && VAR2->VAR5 && VAR2->VAR6)
    {
        VAR2->VAR7 = VAR2->VAR8;
        VAR3 = FUN2(VAR2->VAR7 << (VAR2->VAR9 + 1), VAR10, VAR2->VAR6);
        if (VAR3 > (VAR10 >> 10) || VAR2->VAR11)
            FUN3(VAR2->VAR2, VAR2->VAR12 + VAR3);
        else
        {
            VAR2->VAR7 = 0;
            VAR2->VAR5 = 0;
            if (VAR2->VAR13)
                FUN4(VAR2->VAR14);
        }
    }
    else
        FUN5(VAR2->VAR2);
}