int
FUN1(void)
{
struct VAR1 *VAR2;
CPU_INFO_ITERATOR VAR3;
int VAR4 = 0, VAR5 = 0;


FUN2(VAR3, VAR2) {
if (VAR2->VAR6 & VAR7)
VAR4 = 1;
if (VAR2->VAR6 & VAR8)
VAR5 = 1;
}


if (VAR4 && VAR5)
return (0);

if (VAR4 || VAR5)
return 1;

return 0;
}