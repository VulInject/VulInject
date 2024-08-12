static VAR1
FUN1(struct VAR2 *VAR3, char *VAR4)
{
char *VAR5 = VAR4;
struct VAR6 *VAR7;
short VAR8;

if (!VAR3 || !VAR4)
return -VAR9;

FUN2(&VAR3->VAR10);
VAR7 = &VAR3->VAR7;
VAR8 = VAR3->VAR11;
FUN3(&VAR3->VAR10);

if (!VAR8)	
return -VAR12;

for (VAR8 = 0; VAR8 < 6; VAR8++) {
if (VAR7->VAR13.VAR14[VAR8] < 0)
continue;
VAR5 += sprintf(VAR5, "", VAR7->VAR13.VAR14[VAR8]);
}
VAR5 += sprintf(VAR5, "", (unsigned char)VAR7->VAR13.VAR15);

return VAR5 - VAR4;
}