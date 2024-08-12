static int FUN1(VAR1 *VAR2, int *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = (VAR6->VAR9 < VAR4) ? VAR6->VAR9 : VAR4;
    if (VAR8)
    {
        memcpy(VAR3, VAR6->VAR10, VAR8 * sizeof(int));
        FUN2(VAR6->VAR10);
        VAR6->VAR10 = 0;
        VAR6->VAR9 = 0;
        return VAR8