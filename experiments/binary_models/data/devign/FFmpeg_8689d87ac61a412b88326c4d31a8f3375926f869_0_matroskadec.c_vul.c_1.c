static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = 0;
    while (!VAR8 && FUN2(VAR6, VAR4))
    {
        if (VAR6->VAR9)
            return VAR10;
        VAR8 = FUN3(VAR6);
    }
    return VAR8;
}