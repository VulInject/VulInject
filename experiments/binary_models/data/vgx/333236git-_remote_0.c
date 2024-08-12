struct VAR1 *FUN1(const struct VAR1 *VAR2,
const struct VAR1 *VAR3,
int VAR4)
{
const struct VAR1 *VAR5;
struct VAR1 *VAR6 = NULL;
struct VAR1 **VAR7 = &VAR6;

if (!VAR2)
return NULL;


if (VAR2->VAR8)
return FUN2(FUN3(VAR3, VAR2->VAR8));


if (!VAR4) {
char *VAR1 = FUN4("",
FUN5(0));

VAR5 = FUN3(VAR3, VAR1);
free(VAR1);
if (VAR5 && FUN6(&VAR5->VAR9, &VAR2->VAR9))
return FUN2(VAR5);


VAR5 = FUN3(VAR3, "");
if (VAR5 && FUN6(&VAR5->VAR9, &VAR2->VAR9))
return FUN2(VAR5);
}


for (VAR5 = VAR3; VAR5; VAR5 = VAR5->VAR10) {
if (VAR5 != VAR2 &&
FUN7(VAR5->VAR11, "") &&
FUN6(&VAR5->VAR9, &VAR2->VAR9)) {
*VAR7 = FUN2(VAR5);
VAR7 = &((*VAR7)->VAR10);
if (!VAR4)
break;
}
}

return VAR6;
}