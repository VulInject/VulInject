void FUN1(void)
{
    VAR1 *VAR2;
    for (VAR2 = VAR3; VAR2 != NULL; VAR2 = VAR2->VAR4)
    {
        FUN2("", VAR2->VAR5);
        FUN2("");
        switch (VAR2->VAR6)
        {
        case VAR7:
            FUN2("");
            break;
        case VAR8:
            FUN2("");
            break;
        case VAR9:
            FUN2("");
            break;
        }
        FUN2("", VAR2->VAR10);
        if (VAR2->VAR10)
        {
            FUN2("", VAR2->VAR11);
        }
        if (VAR2->VAR12)
        {
            FUN2("");
            FUN3(VAR2->VAR13);
            if (VAR2->VAR14[0] != '')
            {
                FUN2("");
                FUN3(VAR2->VAR14);
            }
            FUN2("", VAR2->VAR15);
            FUN2("", VAR2->VAR12->VAR16);
            FUN2("", FUN4(VAR2));
        }
        else
        {
            FUN2("");
        }
        FUN2("");
    }
}