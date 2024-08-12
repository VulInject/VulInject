static int FUN1(int VAR1, bool remove)
{
    VAR2 *VAR3;
    VAR4 *VAR5;
    FUN2(VAR3, &VAR6, VAR7)
    {
        FUN2(VAR5, &VAR3->VAR8, VAR7)
        {
            if (VAR5->VAR9 == VAR1)
            {
                if (remove)
                {
                    FUN3(VAR5, VAR7);
                    if (FUN4(&VAR3->VAR8))
                    {
                        FUN5(VAR3);
                    }
                }
                return VAR3->VAR10;
            }
        }
    }
    return -1;
}