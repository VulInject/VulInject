unsigned long FUN1(struct VAR1 *VAR2)
{
const unsigned long VAR3 = 12 << (30 - VAR2->VAR4); 
unsigned long VAR5, VAR6, VAR7;
uint8_t VAR8;

VAR6 = (1ULL << (VAR2->VAR9 - VAR2->VAR4)) - 1;


if (!VAR10)
return VAR6;


if (VAR2->VAR9 < 40)
return VAR6;


VAR5 = (1 << 28) - VAR3;
if (FUN2() < 0x17)
goto VAR11;


if (!FUN3(VAR12))
goto VAR11;

VAR8 = FUN4(VAR12);
VAR7 = (1ULL << (VAR8 - VAR2->VAR4)) - 1;

if (FUN3(VAR13))
VAR7 >>= FUN4(VAR13);

VAR5 = VAR7 - VAR3;
VAR11:
return FUN5(VAR6, VAR5 - 1);
}