int
FUN1(VAR1 *VAR2, uint64_t VAR3,
uint64_t VAR4, uint64_t VAR5)
{
VAR6 *VAR7;
int VAR8;

VAR8 = FUN2(VAR2, VAR3, VAR9, &VAR7);
if (VAR8 != 0)
return (VAR8);
VAR8 = FUN3(VAR2, VAR7, VAR4, VAR5);


if (VAR8 == 0 && VAR4 == 0 && VAR5 == VAR10)
VAR7->VAR11 = 0;

FUN4(VAR7, VAR9);
return (VAR8);
}