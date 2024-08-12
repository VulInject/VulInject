static char *FUN1(struct VAR1 *VAR1, VAR2 *VAR3)
{
FUN2(VAR4);
struct VAR1 *VAR5 = FUN3(VAR1);
const char *VAR6;
char *VAR7;
int VAR8;

VAR6 = FUN4(VAR5, &VAR4);
if (FUN5(VAR6))
return FUN6(VAR6);

VAR8 = FUN7(&VAR7, VAR3, VAR1->VAR9,
VAR6, strlen(VAR6));
FUN8(&VAR4);
if (VAR8)
return FUN9(VAR8);

return VAR7;
}