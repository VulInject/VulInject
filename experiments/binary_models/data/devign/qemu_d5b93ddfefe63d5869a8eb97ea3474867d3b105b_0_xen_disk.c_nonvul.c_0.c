static void FUN1(struct VAR1 *VAR1)
{
    XenGnttab VAR2 = VAR1->VAR3->VAR4.VAR5;
    int VAR6;
    if (VAR1->VAR7.VAR8 == 0)
    {
        return;
    }
    if (VAR9)
    {
        if (!VAR1->VAR10)
        {
            return;
        }
        if (FUN2(VAR2, VAR1->VAR10, VAR1->VAR7.VAR8) != 0)
        {
            FUN3(&VAR1->VAR3->VAR4, 0, "", strerror(VAR11));
        }
        VAR1->VAR3->VAR12 -= VAR1->VAR7.VAR8;
        VAR1->VAR10 = NULL;
    }
    else
    {
        for (VAR6 = 0; VAR6 < VAR1->VAR7.VAR8; VAR6++)
        {
            if (!VAR1->VAR13[VAR6])
            {
                continue;
            }
            if (FUN2(VAR2, VAR1->VAR13[VAR6], 1) != 0)
            {
                FUN3(&VAR1->VAR3->VAR4, 0, "", strerror(VAR11));
            }
            VAR1->VAR3->VAR12--;
            VAR1->VAR13[VAR6] = NULL;
        }
    }
}