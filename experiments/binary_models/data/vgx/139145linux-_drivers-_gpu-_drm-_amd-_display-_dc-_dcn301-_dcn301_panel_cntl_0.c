static unsigned int FUN1(struct VAR1 *VAR1)
{
uint64_t VAR2;
uint32_t VAR3;
uint32_t VAR4, VAR5;
uint32_t VAR6, VAR7;
uint32_t VAR8, VAR9;
struct VAR10 *VAR10 = FUN2(VAR1);

FUN3(VAR11, VAR12, &VAR4);
FUN3(VAR11, VAR13, &VAR5);

FUN3(VAR14, VAR15, &VAR6);
FUN3(VAR14, VAR16, &VAR7);

if (VAR5 == 0)
VAR5 = 16;

VAR8 = (1 << VAR5) - 1;
VAR4 &= VAR8;

VAR9 = VAR8 << (16 - VAR5);

if (VAR7 == 0)
VAR6 &= VAR9;
else
VAR6 &= 0xFFFF;

VAR2 = (VAR17)VAR6 << (1 + VAR5);

if (VAR4 == 0)
VAR4 = 0xFFFF;

VAR2 = FUN4(VAR2, VAR4);
VAR2 = (VAR2 + 1) >> 1;

VAR2 = (VAR17)(VAR2) * VAR4;

VAR3 = (VAR18)(VAR2 & 0xFFFFFFFF);

VAR3 = (VAR3 >> (VAR5-1)) & 1;

VAR2 >>= VAR5;
VAR2 += VAR3;

return (VAR18)(VAR2);
}