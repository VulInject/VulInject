static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
    struct VAR4 *VAR5 = VAR3->VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR3->VAR7; VAR6++)
    {
        VAR3->VAR8[VAR6].VAR9 = 0;
        VAR3->VAR8[VAR6].VAR10 = 0xff;
        VAR3->VAR8[VAR6].VAR11 = 0xff;
        FUN2(VAR3->VAR8[VAR6].VAR12, 0);
    }
    for (VAR6 = 0; VAR6 < VAR5->VAR13; VAR6++)
    {
        VAR5->VAR14[VAR6].VAR15 = 0;
        VAR5->VAR14[VAR6].VAR16 = 0;
        VAR5->VAR14[VAR6].VAR17 = 0xff;
        VAR5->VAR14[VAR6].VAR18 = 0xff;
    }
}