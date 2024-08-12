FUN1 ()
{
basic_block VAR1;

if (VAR2)
{
VAR1 = VAR2;
VAR2 = (VAR3) VAR1->VAR4;
VAR1->VAR4 = NULL;
}
else
{
VAR1 = (VAR3) FUN2 (&VAR5, sizeof *VAR1);
memset (VAR1, 0, sizeof *VAR1);
}
return VAR1;
}