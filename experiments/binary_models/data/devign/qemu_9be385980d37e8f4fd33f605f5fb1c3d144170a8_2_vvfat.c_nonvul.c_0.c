static inline void *FUN1(VAR1 *VAR2)
{
    unsigned int VAR3 = VAR2->VAR3;
    if (FUN2(VAR2, VAR3) < 0)
        return NULL;
    VAR2->VAR3 = VAR3 + 1;
    return FUN3(VAR2, VAR3);
}