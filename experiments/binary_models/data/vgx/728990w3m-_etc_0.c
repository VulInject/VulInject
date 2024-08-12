int
FUN1(VAR1 *VAR2, int VAR3)
{
int VAR4;

for (VAR4 = 1; VAR4 < VAR2->VAR5; VAR4++) {
if (FUN2(VAR2, VAR4) > VAR3)
break;
}
for (VAR4--; VAR4 > 0 && VAR2->VAR6[VAR4] & VAR7; VAR4--) ;
return VAR4;
return VAR4 - 1;
}