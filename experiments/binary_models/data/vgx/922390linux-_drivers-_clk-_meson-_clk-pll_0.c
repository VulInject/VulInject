static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR4);
int VAR7 = 5000;

do {

if (FUN4(VAR4->VAR8, &VAR6->VAR9))
return 0;

FUN5(20);
} while (--VAR7);

return -VAR10;
}