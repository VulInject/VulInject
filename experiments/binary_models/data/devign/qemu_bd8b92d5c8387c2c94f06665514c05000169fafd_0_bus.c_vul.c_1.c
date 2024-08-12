void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    assert(VAR2->VAR8 == NULL);
    if (VAR2->VAR9)
    {
        FUN3(VAR8, &VAR6->free, VAR10)
        {
            if (strcmp(VAR8->VAR11, VAR2->VAR9) == 0)
            {
                break;
            }
        }
        if (VAR8 == NULL)
        {
            FUN4(VAR4, "", VAR2->VAR9, VAR6->VAR12.VAR13);
            return;
        }
    }
    else
    {
        if (VAR6->VAR14 == 1 && strcmp(FUN5(FUN6(VAR2)), "") != 0)
        {
            FUN7(VAR6, "");
        }
        if (VAR6->VAR14 == 0)
        {
            FUN4(VAR4, ""
                             "",
                       VAR2->VAR15);
            return;
        }
        VAR8 = FUN8(&VAR6->free);
    }
    FUN9(VAR6->VAR16, VAR8->VAR11);
    FUN10(&VAR6->free, VAR8, VAR10);
    VAR6->VAR14--;
    VAR2->VAR8 = VAR8;
    VAR8->VAR2 = VAR2;
    FUN11(&VAR6->VAR17, VAR8, VAR10);
    VAR6->VAR18++;
}