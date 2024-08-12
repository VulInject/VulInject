FUN1 (const VAR1 *VAR2, size_t VAR3, const char *VAR4)
{
const VAR1 *VAR5 = VAR2 + VAR3;
int VAR6 = 0;

while (VAR2 < VAR5)
{
ucs4_t VAR7 = *VAR2++;
int VAR8;

if (VAR7 == 0)
break; 

VAR8 = FUN2 (VAR7, VAR4);
if (VAR8 >= 0) 
VAR6 += VAR8;
}

return VAR6;
}