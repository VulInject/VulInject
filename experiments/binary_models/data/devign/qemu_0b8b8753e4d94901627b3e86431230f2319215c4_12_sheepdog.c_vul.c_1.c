static int FUN1(int VAR1, VAR2 *VAR3, VAR4 *VAR5, void *VAR6, unsigned int *VAR7, unsigned int *VAR8)
{
    VAR9 *VAR10;
    SheepdogReqCo VAR11 = {
        .VAR1 = VAR1,
        .VAR3 = VAR3,
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR7 = VAR7,
        .VAR8 = VAR8,
        .VAR12 = 0,
        .VAR13 = false,
    };
    if (FUN2())
    {
        FUN3(&VAR11);
    }
    else
    {
        VAR10 = FUN4(VAR14);
        FUN5(VAR10, &VAR11);
        while (!VAR11.VAR13)
        {
            FUN6(VAR3, true);
        }
    }
    return VAR11.VAR12;
}