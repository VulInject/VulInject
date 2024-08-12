static int FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4;
    if ((VAR4 = FUN2(&VAR2->VAR5, VAR2->VAR6 + 1, sizeof(*VAR2->VAR5))) < 0)
    {
        VAR2->VAR6 = 0;
        return VAR4;
    }
    VAR2->VAR5[VAR2->VAR6] = VAR3;
    VAR2->VAR6++;
    return 0;
}