int FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3)
    {
        FUN2();
    }
    if (VAR2->VAR4 >= VAR2->VAR5)
    {
        FUN3(VAR2);
        if (VAR2->VAR4 >= VAR2->VAR5)
        {
            return 0;
        }
    }
    return VAR2->VAR6[VAR2->VAR4++];
}