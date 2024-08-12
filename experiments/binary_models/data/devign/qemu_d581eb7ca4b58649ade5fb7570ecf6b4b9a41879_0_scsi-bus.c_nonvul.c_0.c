static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5, *VAR6;
    FUN2(VAR3->VAR7);
    VAR3->VAR7 = NULL;
    FUN3(VAR5, &VAR3->VAR8, VAR6, VAR6)
    {
        FUN4(VAR5);
        if (VAR5->VAR9)
        {
            VAR5->VAR9 = false;
            switch (VAR5->VAR10.VAR11)
            {
            case VAR12:
            case VAR13:
                FUN5(VAR5);
                break;
            case VAR14:
                FUN6(VAR5);
                FUN7(VAR5);
                break;
            }
        }
        FUN8(VAR5);
    }
}