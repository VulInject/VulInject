FUN1 (bool VAR1)
{
unsigned VAR2;

for (VAR2 = VAR3; VAR2 <= VAR4; VAR2++)
{
if (VAR5[VAR2] && (VAR1 || ! VAR6[VAR2]))
return VAR4 - VAR2 + 1;

if (VAR7)
{
unsigned VAR8;
for (VAR8 = 0; ; VAR8++)
{
unsigned VAR9 = FUN2 (VAR8);
if (VAR9 == VAR10)
break;
if (VAR9 == VAR2)
return VAR4 - VAR2 + 1;
}
}

}
return 0;
}