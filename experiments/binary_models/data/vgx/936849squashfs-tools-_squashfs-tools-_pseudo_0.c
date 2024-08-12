static struct VAR1 *FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2,
char *VAR3, char *VAR4)
{

if(strcmp(VAR3, "") == 0) {

if(VAR2->VAR5 != '') {
FUN2("");
return VAR1;
}


if(VAR1 && VAR1->VAR6 == 1 && strcmp(VAR1->VAR7[0].VAR7, "") == 0) {
VAR1->VAR7[0].VAR8 = VAR2;
return VAR1;
} else {
struct VAR1 *new = malloc(sizeof(struct VAR1));
if(new == NULL)
FUN3();

new->VAR6 = 1;
new->VAR9 = 0;
new->VAR7 = malloc(sizeof(struct VAR10));
if(new->VAR7 == NULL)
FUN3();

new->VAR7[0].VAR7 = "";
new->VAR7[0].VAR1 = VAR1;
new->VAR7[0].VAR11 = "";
new->VAR7[0].VAR8 = VAR2;
new->VAR7[0].VAR12 = NULL;
return new;
}
}


if(VAR1 && VAR1->VAR6 == 1 && strcmp(VAR1->VAR7[0].VAR7, "") == 0) {
VAR1->VAR7[0].VAR1 = FUN4(VAR1->VAR7[0].VAR1, VAR2, VAR3, VAR4);
return VAR1;
} else
return FUN4(VAR1, VAR2, VAR3, VAR4);
}