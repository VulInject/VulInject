static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    switch (VAR2)
    {
    case VAR5:
        FUN2(&VAR4->VAR6);
        VAR4->VAR7 = 0;
        FUN3(&VAR4->VAR6);
        if (VAR4->VAR8)
        {
            FUN4(VAR4);
            FUN5(VAR4);
        }
        else
        {
            VAR4->VAR9 = 0;
        }
        break;
    case VAR10:
        if (VAR4->VAR8)
        {
            if (VAR4->VAR9 == 0)
            {
                FUN6(VAR4, "");
            }
            FUN5(VAR4);
            FUN7(VAR4);
        }
        else
        {
            VAR4->VAR9++;
        }
        FUN2(&VAR4->VAR6);
        VAR4->VAR7 = 1;
        FUN3(&VAR4->VAR6);
        break;
    case VAR11:
        FUN6(VAR4, ""
                            "",
                       VAR12);
        if (!VAR4->VAR7)
        {
            FUN8(VAR4->VAR13);
        }
        VAR4->VAR8 = 1;
        VAR14++;
        break;
    case VAR15:
        VAR14--;
        FUN9();
        break;
    }