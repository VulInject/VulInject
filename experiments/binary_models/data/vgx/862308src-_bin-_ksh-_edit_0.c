int
FUN1(const char *VAR1, size_t VAR2, int (*VAR3) (const char *, VAR4))
{
size_t VAR5, VAR6;
const char *VAR7 = FUN2(FUN3("", 0));
int VAR8 = 0;

for (VAR5 = 0, VAR6 = VAR2; VAR6 - VAR5 > 0; VAR5++) {
if (strchr(""#$&'()*:;<=>?[\\]`{|}", VAR1[VAR5]) ||
strchr(VAR7, VAR1[VAR5])) {
if (FUN4(VAR1, VAR5) != 0) {
VAR8 = -1;
break;
}

FUN4("", 1);
FUN4(&VAR1[VAR5], 1);

VAR5++;
VAR6 -= VAR5;
VAR1 += VAR5;
VAR5 = -1; 
}
}
if (VAR6 > 0 && VAR8 == 0)
VAR8 = FUN4(VAR1, VAR6);

return (VAR8);
}