static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    if (VAR3)
    {
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            if (VAR2->VAR6[VAR4].VAR7.VAR8[0] == NULL)
                return VAR4;
        }
    }
    else
    {
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            if (FUN2(VAR2, &VAR2->VAR6[VAR4]))
                return VAR4;
        }
    }
    FUN3(VAR2->VAR9, VAR10, "");
    FUN4();
    return -1;
}