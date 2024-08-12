int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    if (VAR3)
    {
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            if (VAR2->VAR6[VAR4].VAR7[0] == NULL && VAR2->VAR6[VAR4].VAR8 == 0)
                return VAR4;
        }
    }
    else
    {
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            if (VAR2->VAR6[VAR4].VAR7[0] == NULL && VAR2->VAR6[VAR4].VAR8 != 0)
                return VAR4;
        }
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            if (VAR2->VAR6[VAR4].VAR7[0] == NULL)
                return VAR4;
        }
    }
    assert(0);
    return -1;
}