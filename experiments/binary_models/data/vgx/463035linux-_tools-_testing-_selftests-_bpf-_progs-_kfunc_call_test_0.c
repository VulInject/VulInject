int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
unsigned long VAR5 = 0;
int *VAR6 = NULL;
int VAR7 = 0;

VAR4 = FUN2(&VAR5);
if (VAR4) {
VAR6 = FUN3(VAR4, 2 * sizeof(int));
if (VAR6) {
VAR6[0] = 42;
VAR7 = VAR6[1]; 
} else {
VAR7 = -1;
}

if (VAR7 >= 0) {
VAR6 = FUN4(VAR4, 2 * sizeof(int));
if (VAR6)
VAR7 = VAR6[0]; 
else
VAR7 = -1;
}

FUN5(VAR4);
}
return VAR7;
}