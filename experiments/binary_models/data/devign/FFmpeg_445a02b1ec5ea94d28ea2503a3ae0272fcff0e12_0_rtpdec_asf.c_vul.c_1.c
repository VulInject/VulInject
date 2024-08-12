static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR1 *VAR4 = VAR2, *VAR5 = VAR2 + VAR3;
    if (VAR3 < sizeof(VAR6) * 2 + 22 || memcmp(VAR4, VAR7, sizeof(VAR6)))
    {
        return -1;
    }
    VAR4 += sizeof(VAR6) + 14;
    do
    {
        uint64_t VAR8 = FUN2(VAR4 + sizeof(VAR6));
        if (memcmp(VAR4, VAR9, sizeof(VAR6)))
        {
            if (VAR8 > VAR5 - VAR4)
                return -1;
            VAR4 += VAR8;
            continue;
        }
        VAR4 += 6 * 8 + 3 * 4 + sizeof(VAR6) * 2;
        if (VAR4 + 8 <= VAR5 && FUN3(VAR4) == FUN3(VAR4 + 4))
        {
            FUN4(VAR4, 0);
            return 0;
        }
        break;
    } while (VAR5 - VAR4 >= sizeof(VAR6) + 8);
    return -1;
}