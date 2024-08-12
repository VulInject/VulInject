void FUN1(int *VAR1, VAR2 **VAR3, bool VAR4)
{
    const char *VAR5 = VAR4 ? "" : "";
    QGAVSSRequesterFunc VAR6;
    ErrorSet VAR7 = {
        .VAR8 = VAR8,
        .VAR3 = VAR3,
    };
    FUN2(VAR3);
    VAR6 = (VAR9)FUN3(VAR10, VAR5);
    if (!VAR6)
    {
        FUN4(VAR3, FUN5(), "", VAR5, VAR11);
        return;
    }
    FUN6(VAR1, &VAR7);
}