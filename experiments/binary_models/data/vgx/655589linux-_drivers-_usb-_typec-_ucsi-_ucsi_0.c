static int FUN1(struct VAR1 **VAR2)
{
int VAR3;

for (VAR3 = 0; VAR3 < VAR4; VAR3++)
if (!VAR2[VAR3])
break;

return VAR3;
}