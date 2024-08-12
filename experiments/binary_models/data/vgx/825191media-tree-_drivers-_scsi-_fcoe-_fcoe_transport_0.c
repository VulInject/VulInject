int FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3;
int VAR4;

VAR3 = FUN2(VAR2, VAR5);
if (!VAR3)
return -VAR6;
VAR4 = FUN3(VAR3);
if (VAR4 != 0)
return VAR4;
FUN4(VAR2);
return 0;
}