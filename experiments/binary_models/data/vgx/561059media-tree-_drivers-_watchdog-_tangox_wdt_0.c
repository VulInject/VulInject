static unsigned int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
u32 VAR5;

VAR5 = FUN3(VAR4->VAR6 + VAR7);

if (!VAR5)
return 0;

return (VAR5 - 1) / VAR4->VAR8;
}