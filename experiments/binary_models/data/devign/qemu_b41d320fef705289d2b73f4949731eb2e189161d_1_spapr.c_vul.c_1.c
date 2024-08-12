static void FUN1(VAR1 *VAR2)
{
    long VAR3;
    int VAR4;
    VAR3 = FUN2(VAR2->VAR5);
    if (VAR3 > 0)
    {
        if (VAR3 != VAR2->VAR5)
        {
            FUN3(&VAR6, "");
        }
        if (VAR2->VAR7 >= 0)
        {
            VAR2->VAR8 = true;
        }
    }
    else
    {
        memset(VAR2->VAR9, 0, FUN4(VAR2));
        for (VAR4 = 0; VAR4 < FUN4(VAR2) / VAR10; VAR4++)
        {
            FUN5(FUN6(VAR2->VAR9, VAR4));
        }
    }
    if (VAR2->VAR11)
    {
        VAR2->VAR12 = FUN7(FUN8(), VAR2->VAR5);
    }
}