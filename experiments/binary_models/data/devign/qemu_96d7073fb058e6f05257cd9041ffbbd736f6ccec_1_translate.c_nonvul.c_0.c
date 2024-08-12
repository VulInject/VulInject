static inline void FUN1(int VAR1, int VAR2, TCGv VAR3)
{
    switch (VAR1)
    {
    case VAR4:
        if (!FUN2(VAR2))
        {
            FUN3(VAR5[VAR2], VAR5[VAR2], VAR3, 0, 8);
        }
        else
        {
            FUN3(VAR5[VAR2 - 4], VAR5[VAR2 - 4], VAR3, 8, 8);
        }
        break;
    case VAR6:
        FUN3(VAR5[VAR2], VAR5[VAR2], VAR3, 0, 16);
        break;
    default:
    case VAR7:
        FUN4(VAR5[VAR2], VAR3);
        break;
    case VAR8:
        FUN5(VAR5[VAR2], VAR3);
        break;
    }
}