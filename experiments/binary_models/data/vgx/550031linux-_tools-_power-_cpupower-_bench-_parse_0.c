struct VAR1 *FUN1()
{
struct VAR1 *VAR1 = malloc(sizeof(struct VAR1));

FUN2("");

VAR1->sleep = 500000;
VAR1->VAR2 = 500000;
VAR1->VAR3 = 500000;
VAR1->VAR4 = 500000;
VAR1->VAR5 = 5;
VAR1->VAR6 = 50;
VAR1->VAR7 = 0;
VAR1->VAR8 = VAR9;
VAR1->VAR10 = 0;
strncpy(VAR1->VAR11, "", sizeof(VAR1->VAR11));

VAR1->VAR12 = VAR13;

if (FUN3(VAR14, VAR1))
return NULL;
return VAR1;
}