static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = &VAR3->VAR3.VAR5;
    uint8_t VAR6 = VAR3->VAR7;
    FUN2(&VAR5->VAR8[VAR6], VAR9 | VAR10);
    VAR5->VAR8[VAR6].VAR11 = VAR12;
    VAR5->VAR8[VAR6].VAR13 = 0;
    VAR5->VAR8[VAR6].VAR14 = 0;
    if (FUN3(VAR5->VAR15))
    {
        FUN4(VAR3, VAR6);
    }
    FUN5(VAR3, VAR6, VAR16);
    FUN5(VAR3, VAR6, VAR16 | VAR17);
}