int FUN1(VAR1 *VAR2, int VAR3, void (*VAR4)(void *, void *, int), void *VAR5)
{
    int VAR6 = FUN2(VAR2);
    if (VAR6 < VAR3)
        return -1;
    do
    {
        int VAR7 = FUN3(VAR2->VAR8 - VAR2->VAR9, VAR3);
        if (VAR4)
            FUN4(VAR5, VAR2->VAR9, VAR7);
        else
        {
            memcpy(VAR5, VAR2->VAR9, VAR7);
            VAR5 = (VAR10 *)VAR5 + VAR7;
        }
        FUN5(VAR2, VAR7);
        VAR3 -= VAR7;
    } while (VAR3 > 0);
    return 0;
}