static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5 = FUN2(VAR3->VAR6, VAR4);
    if (VAR5->VAR3 != VAR7)
    {
        FUN3(""
                "" VAR8 ""
                "" VAR8 "",
                VAR5->VAR3, VAR5->VAR9, VAR5->VAR10, VAR5->VAR11, VAR5->VAR12, VAR5->VAR13);
        return NULL;
    }
    FUN4();
    VAR5->VAR3 = VAR14;
    return VAR5;
}