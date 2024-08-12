static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4 = 0;
    if (FUN2(VAR3->VAR5))
    {
        int VAR6 = FUN3(VAR3->VAR7);
        struct stat VAR8;
        VAR4 = FUN4(VAR6, &VAR8);
        if (VAR4 == 0 && FUN5(VAR8.VAR9))
        {
            VAR4 = FUN6(VAR6);
            if (VAR4 != 0)
            {
                VAR4 = -VAR10;
                return VAR4;
            }
        }
    }
    if (fclose(VAR3->VAR7) == VAR11)
    {
        VAR4 = -VAR10;
    }
    FUN7(VAR3);
    return VAR4;
}