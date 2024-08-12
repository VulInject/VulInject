static int FUN1(VAR1 *VAR2, VAR3 *VAR4, struct VAR5 **VAR6)
{
    int VAR7 = 0;
    switch (VAR4->VAR8)
    {
    case VAR9:
        if (VAR4->VAR10[0] > 0 && VAR4->VAR10[1] > 0 && VAR4->VAR10[2] > 0)
        {
            VAR7 = FUN2(VAR2, NULL, VAR4->VAR11[0], VAR4->VAR10[0], VAR4->VAR11[1], VAR4->VAR10[1], VAR4->VAR11[2], VAR4->VAR10[2]);
        }
        else if (VAR4->VAR10[0] < 0 && VAR4->VAR10[1] < 0 && VAR4->VAR10[2] < 0)
        {
            VAR7 = FUN2(VAR2, NULL, VAR4->VAR11[0] + VAR4->VAR10[0] * (VAR4->VAR12 - 1), -VAR4->VAR10[0], VAR4->VAR11[1] + VAR4->VAR10[1] * (FUN3(VAR4->VAR12, 1) - 1), -VAR4->VAR10[1], VAR4->VAR11[2] + VAR4->VAR10[2] * (FUN3(VAR4->VAR12, 1) - 1), -VAR4->VAR10[2]);
        }
        else
        {
            FUN4(NULL, VAR13, "");
            return -1;
        }
        break;
    case VAR14:
        if (VAR4->VAR10[0] < 0)
        {
            VAR7 = FUN5(VAR2, NULL, VAR4->VAR11[0] + VAR4->VAR10[0] * (VAR4->VAR12 - 1), -VAR4->VAR10[0]);
        }
        else
        {
            VAR7 = FUN5(VAR2, NULL, VAR4->VAR11[0], VAR4->VAR10[0]);
        }
        break;
    default:
        *VAR6 = FUN6(*VAR6, VAR4->VAR15, VAR4->VAR12, VAR4->VAR8, VAR4->VAR15, VAR4->VAR12, VAR14, VAR16, NULL, NULL, NULL);
        if (*VAR6 != NULL)
        {
            VAR17 *VAR18[4];
            int VAR19[4];
            if (!FUN7(VAR2, NULL, (void **)VAR18, VAR19))
            {
                FUN8(*VAR6, (const VAR17 *const *)VAR4->VAR11, VAR4->VAR10, 0, VAR4->VAR12, VAR18, VAR19);
                FUN9(VAR2);
            }
        }
        else
        {
            FUN4(NULL, VAR20, "");
            VAR7 = -1;
        }
        break;
    }
    return VAR7;
}