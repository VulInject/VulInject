static void FUN1(struct VAR1 **VAR2)
{
struct VAR1 **VAR3, *VAR4;
int VAR5;
size_t VAR6 = FUN2(*VAR2);

if (VAR6 < 2)
return;


FUN3(VAR3, VAR6);
for (VAR6 = 0, VAR4 = *VAR2; VAR4; VAR4 = VAR4->VAR7)
VAR3[VAR6++] = VAR4;

FUN4(VAR3, VAR6, VAR8);


for (VAR5 = 0; VAR5 < VAR6 - 1; VAR5++)
VAR3[VAR5]->VAR7 = VAR3[VAR5 + 1];
VAR3[VAR6 - 1]->VAR7 = NULL;
*VAR2 = VAR3[0];

free(VAR3);
}