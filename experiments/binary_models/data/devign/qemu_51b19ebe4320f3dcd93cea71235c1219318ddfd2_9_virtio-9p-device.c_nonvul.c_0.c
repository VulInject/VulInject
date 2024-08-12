void FUN1(VAR1 *VAR2, struct VAR3 **VAR4, unsigned int *VAR5, bool VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    VAR9 *VAR10 = FUN2(VAR8, VAR9, VAR11);
    VAR12 *VAR13 = VAR10->VAR14[VAR2->VAR15];
    if (VAR6)
    {
        *VAR4 = VAR13->VAR16;
        *VAR5 = VAR13->VAR17;
    }
    else
    {
        *VAR4 = VAR13->VAR18;
        *VAR5 = VAR13->VAR19;
    }
}