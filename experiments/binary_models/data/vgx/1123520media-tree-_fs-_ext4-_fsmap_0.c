static int FUN1(void *VAR1,
struct VAR2 *VAR3,
struct VAR2 *VAR4)
{
struct VAR5 *VAR6;
struct VAR5 *VAR7;

VAR6 = FUN2(VAR3, struct VAR5, VAR8);
VAR7 = FUN2(VAR4, struct VAR5, VAR8);
if (VAR6->VAR9 < VAR7->VAR9)
return -1;
else if (VAR6->VAR9 > VAR7->VAR9)
return 1;
return 0;
}