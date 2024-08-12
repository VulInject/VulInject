static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    FUN2(VAR2->VAR7, 0x40);
    for (VAR6 = VAR7; VAR6 < &VAR7[FUN3(VAR7)]; VAR6++)
    {
        if ((VAR6->VAR8.VAR9 & VAR4->VAR10) != 0)
        {
            if (FUN4(VAR2->VAR7, VAR6) < 0)
            {
                FUN5(""
                       "",
                       VAR6->VAR11, VAR6->VAR12, VAR6->VAR13);
                return -1;
            }
        }
    }
    FUN6(VAR2->VAR7);
    FUN7(VAR14);
    FUN7(VAR15);
    return 0;
}