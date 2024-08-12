void FUN1(void *VAR1);
void FUN2(void *VAR1);
void FUN3(int);
int FUN4(void *);

int
FUN5(struct VAR2 *VAR3, void *VAR4, void *VAR5)
{
struct VAR4 *VAR6 = VAR4;
struct VAR7 *VAR8 = VAR5;

if (VAR6->VAR9 > 0 && !strcmp(VAR8->VAR10, ""))
return (0);

return (1);
}