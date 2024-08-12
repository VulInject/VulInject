VAR1 *FUN1(VAR2 **VAR3)
{
    PSYSTEM_LOGICAL_PROCESSOR_INFORMATION VAR4, VAR5;
    DWORD VAR6;
    VAR1 *VAR7, **VAR8;
    VAR2 *VAR9 = NULL;
    int64_t VAR10;
    VAR5 = VAR4 = NULL;
    VAR6 = 0;
    VAR10 = 0;
    VAR7 = NULL;
    VAR8 = &VAR7;
    if ((FUN2(VAR4, &VAR6) == VAR11) && (FUN3() == VAR12) && (VAR6 > sizeof(VAR13)))
    {
        VAR5 = VAR4 = FUN4(VAR6);
        if (FUN2(VAR4, &VAR6) == VAR11)
        {
            FUN5(&VAR9, "", (int)FUN3());
        }
    }
    else
    {
        FUN5(&VAR9, "", (int)FUN3());
    }
    while ((VAR9 == NULL) && (VAR6 > 0))
    {
        if (VAR4->VAR14 == VAR15)
        {
            ULONG_PTR VAR16 = VAR4->VAR17;
            while (VAR16 > 0)
            {
                if (!!(VAR16 & 1))
                {
                    VAR18 *VAR19;
                    VAR1 *VAR20;
                    VAR19 = FUN4(sizeof *VAR19);
                    VAR19->VAR21 = VAR10++;
                    VAR19->VAR22 = true;
                    VAR19->VAR23 = true;
                    VAR20 = FUN4(sizeof *VAR20);
                    VAR20->VAR24 = VAR19;
                    *VAR8 = VAR20;
                    VAR8 = &VAR20->VAR25;
                }
                VAR16 >>= 1;
            }
        }
        VAR6 -= sizeof(VAR13);
        VAR4++;
    }
    FUN6(VAR5);
    if (VAR9 == NULL)
    {
        if (VAR7 != NULL)
        {
            return VAR7;
        }
        FUN5(&VAR9, "");
    }
    FUN7(VAR7);
    FUN8(VAR3, VAR9);
    return NULL;
}