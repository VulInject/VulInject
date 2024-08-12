static char *FUN1(int VAR1, const VAR2 *VAR3)
{
int VAR4;
int VAR5 = 0;
char *VAR6 = "";  
char *VAR7 = xstrdup("");

if (VAR3 == NULL)
return VAR7;

for (VAR4 = 0; VAR4 < VAR1; VAR4++) {
if ((VAR4+1 < VAR1)
&& (VAR3[VAR4] == VAR3[VAR4+1])) {
VAR5++;
continue;
}

if (VAR4 == VAR1-1) 
VAR6 = "";
if (VAR5 > 0) {
FUN2(VAR7, "",
VAR3[VAR4], VAR5+1, VAR6);
} else {
FUN2(VAR7, "", VAR3[VAR4], VAR6);
}
VAR5 = 0;
}

return VAR7;
}