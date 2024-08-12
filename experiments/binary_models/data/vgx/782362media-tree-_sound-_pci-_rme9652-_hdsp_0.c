static int FUN1 (struct VAR1 *VAR1, int VAR2)
{
int VAR3;

if (VAR2)
VAR3 = FUN2(VAR1, VAR4) & 0xff;
else
VAR3 = FUN2(VAR1, VAR5) & 0xff;

if (VAR3 < 128)
return  128 - VAR3;
else
return 0;
}