void FUN1(struct VAR1 *VAR2, double VAR3, long VAR4)
{
    struct VAR5 *VAR6 = NULL;
    if (VAR2->VAR7)
    {
        struct qdist_entry VAR8;
        VAR8.VAR3 = VAR3;
        VAR6 = FUN2(&VAR8, VAR2->VAR9, VAR2->VAR7, sizeof(VAR8), VAR10);
    }
    if (VAR6)
    {
        VAR6->VAR4 += VAR4;
        return;
    }
    if (FUN3(VAR2->VAR7 == VAR2->VAR11))
    {
        VAR2->VAR11 *= 2;
        VAR2->VAR9 = FUN4(VAR2->VAR9, sizeof(*VAR2->VAR9) * (VAR2->VAR11));
    }
    VAR2->VAR7++;
    VAR6 = &VAR2->VAR9[VAR2->VAR7 - 1];
    VAR6->VAR3 = VAR3;
    VAR6->VAR4 = VAR4;
    FUN5(VAR2->VAR9, VAR2->VAR7, sizeof(*VAR6), VAR10);
}