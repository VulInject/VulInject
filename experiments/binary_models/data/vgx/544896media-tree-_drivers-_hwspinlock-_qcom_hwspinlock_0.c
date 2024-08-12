static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
u32 VAR6;
int VAR7;

VAR7 = FUN2(VAR4, VAR8);
if (VAR7)
return VAR7;

VAR7 = FUN3(VAR4, &VAR6);
if (VAR7)
return VAR7;

return VAR6 == VAR8;
}