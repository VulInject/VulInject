static inline void *FUN1(void)
{
    void *VAR1 = VAR2;
    if (FUN2(VAR1, VAR3.VAR4))
    {
        VAR1 = FUN3(VAR1, VAR3.VAR4);
    }
    FUN4(VAR1, VAR3.VAR4);
    return VAR1;
}