int FUN1(const char *VAR1, const void *VAR2, size_t VAR3, hwaddr VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(sizeof(*VAR6));
    VAR6->VAR1 = FUN3(VAR1);
    VAR6->VAR4 = VAR4;
    VAR6->VAR7 = VAR3;
    VAR6->VAR8 = FUN2(VAR6->VAR7);
    memcpy(VAR6->VAR8, VAR2, VAR3);
    FUN4(VAR6);
    return 0;
}