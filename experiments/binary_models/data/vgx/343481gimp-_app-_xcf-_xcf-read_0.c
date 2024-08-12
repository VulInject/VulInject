FUN1 (VAR1 *VAR2,
VAR3 *VAR4,
gint     VAR5)
{
guint VAR6 = 0;

if (VAR5 > 0)
{
VAR6 += FUN2 (VAR2, (VAR7 *) VAR4, VAR5 * 2);

while (VAR5--)
{
*VAR4 = FUN3 (*VAR4);
VAR4++;
}
}

return VAR6;
}