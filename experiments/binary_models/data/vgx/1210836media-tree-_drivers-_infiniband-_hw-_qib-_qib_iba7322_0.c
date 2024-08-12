static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;

if (VAR2->VAR4->VAR5->VAR6)
VAR3 = FUN2(VAR2);
else
VAR3 = FUN3(VAR2);
return VAR3;
}