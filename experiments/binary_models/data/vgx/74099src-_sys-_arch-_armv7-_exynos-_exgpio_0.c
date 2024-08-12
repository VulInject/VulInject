int
FUN1(void *VAR1, VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR1;
uint32_t VAR6 = VAR3[0];
uint32_t VAR7 = VAR3[1];
uint32_t VAR8;
int VAR9;

if (VAR6 >= VAR10)
return 0;

VAR8 = FUN2(VAR5->VAR11, FUN3(VAR5->VAR12->VAR13));
VAR8 &= (1 << VAR6);
VAR9 = (VAR8 >> VAR6) & 1;
if (VAR7 & VAR14)
VAR9 = !VAR9;
return VAR9;
}