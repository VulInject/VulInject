static bool FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    switch (VAR2->VAR4)
    {
    case VAR5:
        if (VAR2->VAR6)
        {
            FUN2(VAR2, VAR7);
            return false;
        }
        break;
    }
    FUN3(VAR2);
    return true;
}