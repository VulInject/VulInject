static int FUN1(unsigned long *VAR1, unsigned int VAR2,
unsigned int VAR3, unsigned int VAR4)
{
unsigned int VAR5;
int VAR6;

for (VAR5 = VAR2; VAR5 < VAR3 + 1; VAR5 = FUN2(VAR5, VAR4)) {
VAR5 = FUN3(VAR1, VAR3 + 1, VAR5);
if (VAR5 + VAR4 > VAR3 + 1)
break;

if (VAR5 & (VAR4 - 1))
continue;

for (VAR6 = 1; VAR6 < VAR4 && !FUN4(VAR5 + VAR6, VAR1); VAR6++)
;
if (VAR6 == VAR4)
return VAR5;
}

return -1;
}