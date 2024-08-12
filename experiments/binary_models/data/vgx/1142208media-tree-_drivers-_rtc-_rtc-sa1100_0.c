static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned long VAR7;
int VAR8;

VAR8 = FUN3(VAR4, &VAR7);
if (VAR8 == 0)
FUN4(VAR7, VAR6->VAR9);
return VAR8;
}