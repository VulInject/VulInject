static inline void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, void (*send)(struct VAR5 *, const VAR6 *, int), int (*VAR7)(const VAR6 *, int), const VAR6 *VAR8, int VAR9)
{
    if (VAR4->VAR9)
    {
        memcpy(VAR4->VAR8 + VAR4->VAR9, VAR8, VAR9);
        VAR4->VAR9 += VAR9;
        if (FUN2(VAR4->VAR8, VAR4->VAR9))
        {
            send(VAR2->VAR10, VAR4->VAR8, VAR4->VAR9);
            VAR4->VAR9 = 0;
        }
    }
    else if (FUN2(VAR8, VAR9))
        send(VAR2->VAR10, VAR8, VAR9);
    else
    {
        memcpy(VAR4->VAR8, VAR8, VAR9);
        VAR4->VAR9 = VAR9;
    }
}