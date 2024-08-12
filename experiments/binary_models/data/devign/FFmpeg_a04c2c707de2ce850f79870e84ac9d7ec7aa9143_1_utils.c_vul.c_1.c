int FUN1(int (*VAR1)(void **mutex, enum AVLockOp VAR2))
{
    if (VAR3)
    {
        FUN2(&VAR4, VAR5);
        FUN2(&VAR6, VAR5);
        VAR3 = NULL;
        VAR4 = NULL;
        VAR6 = NULL;
    }
    if (VAR1)
    {
        void *VAR7 = NULL;
        void *VAR8 = NULL;
        int VAR9;
        if (VAR9 = FUN3(&VAR7, VAR10))
        {
            return VAR9 > 0 ? VAR11 : VAR9;
        }
        if (VAR9 = FUN3(&VAR8, VAR10))
        {
            FUN3(&VAR7, VAR5);
            return VAR9 > 0 ? VAR11 : VAR9;
        }
        VAR3 = VAR1;
        VAR4 = VAR7;
        VAR6 = VAR8;
    }
    return 0;
}