FUN1 (struct VAR1 ***VAR2, int *VAR3, 
struct VAR1 *VAR4)
{
long VAR5 = 0;
struct VAR1 **VAR6 = NULL;
int VAR7 = *VAR3 + 1;

VAR6 = realloc (*VAR2, ((VAR7 + 1) * sizeof (**VAR2))); 
if (VAR6 == NULL) { 
VAR5 = VAR8; 
} else {
VAR6[VAR7 - 1] = VAR4;
VAR6[VAR7] = NULL;
*VAR3 = VAR7;
*VAR2 = VAR6;
}

return VAR5;    
}