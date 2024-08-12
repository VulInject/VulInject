VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR5;
    uint32_t VAR6;
    int64_t VAR7;
    VAR7 = VAR5->VAR8 - FUN2(VAR9);
    if (VAR7 >= 0)
        VAR6 = FUN3(VAR7, VAR5->VAR10, VAR11);
    else
        VAR6 = -FUN3(-VAR7, VAR5->VAR10, VAR11);
    FUN4("", VAR12, VAR6);
    return VAR6;
}