static int FUN1(target_ulong VAR1, int VAR2, int VAR3)
{
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR5; VAR4++)
    {
        if (VAR6[VAR4].VAR1 == VAR1 && VAR6[VAR4].VAR3 == VAR3 && (VAR6[VAR4].VAR2 == VAR2 || VAR2 == -1))
        {
            return VAR4;
        }
    }
    return -1;
}