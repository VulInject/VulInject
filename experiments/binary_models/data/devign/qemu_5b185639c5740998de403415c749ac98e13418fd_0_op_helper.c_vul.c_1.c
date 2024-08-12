void FUN1(VAR1)(uint32_t VAR2, uint32_t VAR3)
{
    uint64_t VAR4 = FUN2(VAR3);
    uint64_t VAR5 = VAR6->VAR7[(VAR3 + 1) & 15];
    uint64_t VAR1 = 0;
    while (VAR5 >= 4)
    {
        VAR1 += FUN3(VAR4);
        VAR1 = FUN4(VAR1);
        VAR5 -= 4;
        VAR4 += 4;
    }
    switch (VAR5)
    {
    case 0:
        break;
    case 1:
        VAR1 += FUN5(VAR4);
        VAR1 = FUN4(VAR1);
        break;
    case 2:
        VAR1 += FUN6(VAR4);
        VAR1 = FUN4(VAR1);
        break;
    case 3:
        VAR1 += FUN6(VAR4) << 8;
        VAR1 += FUN5(VAR4 + 2);
        VAR1 = FUN4(VAR1);
        break;
    }
    VAR6->VAR7[(VAR3 + 1) & 15] = 0;
    VAR6->VAR7[VAR2] = (VAR6->VAR7[VAR2] & 0xffffffff00000000ULL) | (VAR8)VAR1;
}