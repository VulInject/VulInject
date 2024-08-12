void FUN1(VAR1 **VAR2)
{
    if (!*VAR2)
        return;
    if ((*VAR2)->VAR3)
    {
        int VAR4;
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            if ((*VAR2)->VAR3->VAR6[VAR4])
            {
                VAR7 *VAR8 = (*VAR2)->VAR3->VAR6[VAR4];
                FUN2(&VAR8->VAR9->VAR10[0]);
                FUN2(&VAR8->VAR9);
                FUN2(&VAR8->VAR11);
                FUN2(&VAR8->VAR12);
                FUN2(&VAR8);
            }
        }
        FUN2(&(*VAR2)->VAR3);
    }
    FUN2(VAR2);
}