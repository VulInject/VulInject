int FUN1(HANDLE VAR1, VAR2 *VAR3, void *VAR4)
{
    VAR5 *VAR6 = &VAR7;
    if (VAR6->VAR8 >= VAR9)
    {
        return -1;
    }
    VAR6->VAR10[VAR6->VAR8] = VAR1;
    VAR6->VAR3[VAR6->VAR8] = VAR3;
    VAR6->VAR4[VAR6->VAR8] = VAR4;
    VAR6->VAR8++;
    return 0;
}