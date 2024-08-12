static int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;

VAR3 = FUN2(VAR2, VAR5);

if (VAR3 < 0)
return VAR3;

if (VAR2->VAR6 == VAR7)
VAR3 |= 1;
else
VAR3 &= ~1;

VAR4 = FUN3(VAR2, VAR5, VAR3);
return VAR4;
}