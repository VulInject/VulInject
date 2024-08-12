static inline void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < 16; VAR5++)
    {
        (*VAR2[VAR5]) = FUN2(VAR4->VAR6[VAR5]);
    }
    (*VAR2)[VAR7] = FUN2(VAR4->VAR8);
    (*VAR2)[VAR9] = FUN2(VAR4->VAR10);
    (*VAR2)[VAR11] = FUN2(VAR4->VAR12);
    (*VAR2)[VAR13] = FUN2(VAR4->VAR14);
    (*VAR2)[VAR15] = FUN2(VAR4->VAR16);
    (*VAR2)[VAR17] = FUN2(VAR4->VAR18);
    (*VAR2)[VAR19] = 0;
}