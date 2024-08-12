int
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3)
{
int VAR4;

if (VAR2->VAR5 > VAR3->VAR5)
return (1);
if (VAR2->VAR5 < VAR3->VAR5)
return (-1);
VAR4 = memcmp(VAR2->VAR6, VAR3->VAR6, VAR2->VAR5);
if (VAR4 > 0)
return (1);
if (VAR4 < 0)
return (-1);
return (0);
}