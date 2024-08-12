int
FUN1(unsigned long VAR1, unsigned int VAR2,
unsigned long *VAR3)
{
u64 VAR4;
s64 VAR5;


VAR5 = (int)FUN2(VAR6, VAR1,
VAR2, (VAR7)VAR3,
(VAR7)&VAR4, 0);
if (VAR5 < VAR8)
return VAR5;

return VAR4;
}