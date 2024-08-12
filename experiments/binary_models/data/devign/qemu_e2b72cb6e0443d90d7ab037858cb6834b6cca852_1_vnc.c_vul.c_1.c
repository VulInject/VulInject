static bool FUN1(VAR1 *VAR2)
{
    switch (VAR2->update)
    {
    case VAR3:
        break;
    case VAR4:
        if (!VAR2->VAR5.VAR6 || VAR2->VAR7)
        {
            return true;
        }
        break;
    case VAR8:
        return true;
    }
    return false;
}