static VAR1 *FUN1(VAR2 *VAR3, MSIMessage VAR4)
{
    unsigned int VAR5 = FUN2(VAR4.VAR6);
    VAR1 *VAR7;
    FUN3(VAR7, &VAR3->VAR8[VAR5], VAR9)
    {
        if (VAR7->VAR10.VAR11.VAR12.VAR13 == (VAR14)VAR4.VAR15 && VAR7->VAR10.VAR11.VAR12.VAR16 == (VAR4.VAR15 >> 32) && VAR7->VAR10.VAR11.VAR12.VAR6 == FUN4(VAR4.VAR6))
        {
            return VAR7;
        }
    }
    return NULL;
}