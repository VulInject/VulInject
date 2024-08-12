static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

if (FUN3(VAR4->VAR5, VAR6))
return -VAR7;

VAR4->open = 1;
return 0;
}