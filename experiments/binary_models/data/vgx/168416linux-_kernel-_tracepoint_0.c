static struct VAR1 *
FUN1(struct VAR1 **VAR2, struct VAR1 *VAR3,
int VAR4)
{
struct VAR1 *VAR5, *new;
int VAR6;	
int VAR7 = 0;	
int VAR8 = -1;		

if (FUN2(!VAR3->VAR9))
return FUN3(-VAR10);

FUN4(*VAR2);
VAR5 = *VAR2;
if (VAR5) {

for (VAR6 = 0; VAR5[VAR6].VAR9; VAR6++) {
if (VAR5[VAR6].VAR9 == VAR11)
continue;	
if (VAR5[VAR6].VAR9 == VAR3->VAR9 &&
VAR5[VAR6].VAR12 == VAR3->VAR12)
return FUN3(-VAR13);
VAR7++;
}
}

new = FUN5(VAR7 + 2);
if (new == NULL)
return FUN3(-VAR14);
if (VAR5) {
VAR7 = 0;
for (VAR6 = 0; VAR5[VAR6].VAR9; VAR6++) {
if (VAR5[VAR6].VAR9 == VAR11)
continue;

if (VAR8 < 0 && VAR5[VAR6].VAR4 < VAR4)
VAR8 = VAR7++;
new[VAR7++] = VAR5[VAR6];
}
if (VAR8 < 0)
VAR8 = VAR7++;

} else {
VAR8 = 0;
VAR7 = 1; 
}
new[VAR8] = *VAR3;
new[VAR7].VAR9 = NULL;
*VAR2 = new;
FUN4(*VAR2);
return VAR5;
}