static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    NVENCSTATUS VAR12;
    int VAR13;
    if (VAR4->VAR14 == FUN2(VAR4->VAR15))
    {
        for (VAR13 = 0; VAR13 < VAR4->VAR14; VAR13++)
        {
            if (!VAR4->VAR15[VAR13].VAR16)
            {
                if (VAR4->VAR15[VAR13].VAR17)
                {
                    VAR12 = VAR10->FUN3(VAR4->VAR18, VAR4->VAR15[VAR13].VAR17);
                    if (VAR12 != VAR19)
                        return FUN4(VAR2, VAR12, "");
                    VAR4->VAR15[VAR13].VAR17 = NULL;
                }
                return VAR13;
            }
        }
    }
    else
    {
        return VAR4->VAR14++;
    }
    FUN5(VAR2, VAR20, "");
    return FUN6(VAR21);
}