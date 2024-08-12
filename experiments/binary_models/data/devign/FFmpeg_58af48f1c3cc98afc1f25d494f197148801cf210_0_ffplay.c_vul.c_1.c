static int FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 **VAR6)
{
    int VAR7 = 0;
    switch (VAR4->VAR8)
    {
    case VAR9:
        VAR7 = FUN2(VAR2, NULL, VAR4->VAR10[0], VAR4->VAR11[0], VAR4->VAR10[1], VAR4->VAR11[1], VAR4->VAR10[2], VAR4->VAR11[2]);
        break;
    case VAR12:
        VAR7 = FUN3(VAR2, NULL, VAR4->VAR10[0], VAR4->VAR11[0]);
        break;
    default:
        *VAR6 = FUN4(*VAR6, VAR4->VAR13, VAR4->VAR14, VAR4->VAR8, VAR4->VAR13, VAR4->VAR14, VAR12, VAR15, NULL, NULL, NULL);
        if (*VAR6 != NULL)
        {
            VAR16 *VAR17;
            int VAR18;
            if (!FUN5(VAR2, NULL, (void **)&VAR17, &VAR18))
            {
                FUN6(*VAR6, (const VAR16 *const *)VAR4->VAR10, VAR4->VAR11, 0, VAR4->VAR14, &VAR17, &VAR18);
                FUN7(VAR2);
            }
        }
        else
        {
            FUN8(NULL, VAR19, "");
            VAR7 = -1;
        }
        break;
    }
    return VAR7;
}