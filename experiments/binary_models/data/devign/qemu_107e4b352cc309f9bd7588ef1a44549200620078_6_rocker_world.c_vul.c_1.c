VAR1 *FUN1(VAR2 *VAR3, size_t VAR4, enum rocker_world_type VAR5, VAR6 *VAR7)
{
    VAR1 *VAR8 = FUN2(sizeof(VAR1) + VAR4);
    if (VAR8)
    {
        VAR8->VAR3 = VAR3;
        VAR8->VAR5 = VAR5;
        VAR8->VAR7 = VAR7;
        if (VAR8->VAR7->VAR9)
        {
            VAR8->VAR7->FUN3(VAR8);
        }
    }
    return VAR8;
}