static int FUN1(struct user_i387_struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5, VAR6, VAR7 = FUN2(VAR4);
struct user_i387_struct VAR8;

VAR5 = FUN3(VAR9[VAR7],
(unsigned long *) &VAR8);
if (VAR5)
return VAR5;

VAR6 = FUN4(VAR2, &VAR8, sizeof(VAR8));
if(VAR6 > 0)
return -VAR10;

return VAR6;
}