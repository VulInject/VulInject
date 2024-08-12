static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    VAR4 *VAR5;
    for (VAR3 = 0; VAR3 < VAR6; VAR3++)
    {
        VAR5 = &VAR2->VAR7[VAR3];
        VAR5->VAR2 = VAR2;
        if (VAR5->VAR8)
        {
            if (FUN2(VAR5->VAR8, 0) != VAR9)
            {
                FUN3("");
                return -1;
            }
            if (FUN2(VAR5->VAR8, 1) != VAR10)
            {
                FUN3("");
                return -1;
            }
        }
        FUN4(VAR5);
        FUN5(VAR5);
        if (VAR5->VAR8)
        {
            FUN6(VAR5->VAR8, &VAR11, VAR5);
        }
    }
    return 0;
}