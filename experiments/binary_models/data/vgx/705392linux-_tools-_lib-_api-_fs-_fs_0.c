static bool FUN1(struct VAR1 *VAR1)
{
bool VAR2 = false;
char VAR3[100];
VAR4 *VAR5;

VAR5 = fopen("", "");
if (VAR5 == NULL)
return NULL;

while (!VAR2 &&
fscanf(VAR5, "" FUN2(VAR6) "",
VAR1->VAR7, VAR3) == 2) {

if (strcmp(VAR3, VAR1->VAR8) == 0)
VAR2 = true;
}

fclose(VAR5);
VAR1->VAR9 = true;
return VAR1->VAR2 = VAR2;
}