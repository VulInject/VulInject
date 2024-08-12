VAR1 *FUN1(VAR2 *VAR3, off_t VAR4, off_t VAR5, uint32_t VAR6, void (*close)(VAR1 *))
{
    VAR1 *VAR7 = FUN2(sizeof(VAR1));
    FUN3(&VAR7->VAR8);
    VAR7->VAR9 = 1;
    FUN4(&VAR7->VAR10);
    VAR7->VAR3 = VAR3;
    VAR7->VAR4 = VAR4;
    VAR7->VAR6 = VAR6;
    VAR7->VAR5 = VAR5 == -1 ? FUN5(VAR3) : VAR5;
    VAR7->close = close;
    return VAR7;
}