static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    if (VAR6->VAR9 >= VAR10)
    {
        fprintf(VAR11, "");
        return;
    }
    if (VAR2->VAR12 == -1)
    {
        VAR2->VAR12 = VAR6->VAR9++;
    }
    VAR8 = VAR2->VAR12;
    VAR6->VAR13[VAR8] = VAR2->VAR14;
    VAR6->VAR15[VAR8] = VAR2->VAR15;
    VAR6->VAR16[VAR8] = VAR2->VAR16;
    VAR6->VAR17[VAR8] = VAR2->VAR17;
    if (VAR6->VAR9 == 1)
    {
        FUN2(VAR6->VAR18, VAR19, VAR20, VAR21, VAR2, VAR4);
    }
    if (VAR6->VAR22 != -1)
    {
        FUN3(VAR6, VAR6->VAR22, VAR23);
    }
    VAR6->VAR22 = VAR8;
    FUN3(VAR6, VAR6->VAR22, VAR24);
}