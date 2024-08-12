static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    if (VAR2)
    {
        if (FUN2(VAR4, -VAR2, 0))
        {
            return;
        }
    }
    FUN3(VAR4, VAR5);
    FUN4(FUN5(VAR4->VAR6->VAR7), &VAR4->VAR8);
    FUN6(VAR4);
}