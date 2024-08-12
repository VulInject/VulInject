static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR2->VAR5 > 0)
    {
        memcpy(VAR4, VAR2->VAR6[0], sizeof(VAR3));
        FUN2(VAR2->VAR6[0]);
        if (VAR2->VAR5 > 1)
        {
            memmove(&VAR2->VAR6[0], &VAR2->VAR6[1], (VAR2->VAR5 - 1) * sizeof(VAR3 *));
            VAR2->VAR6 = FUN3(VAR2->VAR6, (VAR2->VAR5 - 1) * sizeof(VAR3 *));
        }
        else
        {
            FUN4(&VAR2->VAR6);
        }
        VAR2->VAR5--;
        return 0;
    }
    return -1;
}