static void FUN1(struct VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    int VAR5, VAR6, VAR7 = VAR2->VAR8->VAR9;
    int VAR10 = 0, VAR11 = 0, VAR12 = 0, VAR13 = 0;
    for (VAR5 = 0, VAR6 = 0; VAR5 < VAR7; ++VAR5, ++VAR6)
    {
        struct VAR14 *VAR15 = VAR2->VAR8->VAR16 + VAR6;
        uint64_t VAR17;
        uint64_t VAR18;
        uint64_t VAR19;
        if (VAR6 != VAR5)
        {
            memcpy(VAR15, VAR2->VAR8->VAR16 + VAR5, sizeof *VAR15);
        }
        if (!FUN2(VAR15->VAR20, VAR15->VAR21, VAR3, VAR4))
        {
            continue;
        }
        assert(!VAR13);
        VAR17 = FUN3(VAR15->VAR20, VAR15->VAR21);
        VAR18 = FUN3(VAR3, VAR4);
        if (VAR3 <= VAR15->VAR20 && VAR18 >= VAR17)
        {
            --VAR2->VAR8->VAR9;
            --VAR6;
            assert(VAR6 >= 0);
            ++VAR12;
            continue;
        }
        if (VAR18 >= VAR17)
        {
            VAR15->VAR21 = VAR3 - VAR15->VAR20;
            assert(VAR15->VAR21);
            assert(!VAR11);
            ++VAR11;
            continue;
        }
        if (VAR3 <= VAR15->VAR20)
        {
            VAR19 = VAR18 + 1 - VAR15->VAR20;
            VAR15->VAR21 -= VAR19;
            VAR15->VAR20 += VAR19;
            VAR15->VAR22 += VAR19;
            assert(VAR15->VAR21);
            assert(!VAR10);
            ++VAR10;
            continue;
        }
        assert(!VAR10);
        assert(!VAR11);
        assert(!VAR12);
        memcpy(VAR2->VAR8->VAR16 + VAR7, VAR15, sizeof *VAR15);
        VAR15->VAR21 = VAR3 - VAR15->VAR20;
        assert(VAR15->VAR21);
        VAR19 = VAR18 + 1 - VAR15->VAR20;
        VAR15 = VAR2->VAR8->VAR16 + VAR7;
        VAR15->VAR21 -= VAR19;
        assert(VAR15->VAR21);
        VAR15->VAR20 += VAR19;
        VAR15->VAR22 += VAR19;
        assert(VAR2->VAR8->VAR9 == VAR7);
        ++VAR2->VAR8->VAR9;
        ++VAR13;
    }
}