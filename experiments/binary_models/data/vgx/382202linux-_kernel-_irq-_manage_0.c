static int FUN1(unsigned int VAR1)
{
unsigned long VAR2;
struct VAR3 *VAR4 = FUN2(VAR1, &VAR2, VAR5);

if (!VAR4)
return -VAR6;
FUN3(VAR4);
FUN4(VAR4, VAR2);
return 0;
}