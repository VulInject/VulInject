static void FUN1(VAR1 *VAR2)
{
    long VAR3;
    int VAR4;
    VAR3 = FUN2(VAR2->VAR5);
    if (VAR3 < 0)
    {
        FUN3(&VAR6, "");
    }
    else if (VAR3 > 0)
    {
        if (VAR3 != VAR2->VAR5)
        {
            FUN3(&VAR6, "");
        }
        FUN4(VAR2);
    }
    else
    {
        memset(VAR2->VAR7, 0, FUN5(VAR2));
        for (VAR4 = 0; VAR4 < FUN5(VAR2) / VAR8; VAR4++)
        {
            FUN6(FUN7(VAR2->VAR7, VAR4));
        }
    }
    if (VAR2->VAR9)
    {
        VAR2->VAR10 = FUN8(FUN9(), VAR2->VAR5);
    }
}