static int FUN1(struct VAR1 *VAR2, char *VAR3,
char **VAR4)
{
int VAR5 = -VAR6;

const struct VAR7 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = FUN3(VAR7);
struct VAR10 *VAR11 = NULL;

if (strcmp(VAR3, "") == 0)
VAR11 = FUN4(VAR9->VAR11);
else if (strcmp(VAR3, "") == 0  && VAR9->VAR12)
VAR11 = FUN4(VAR9->VAR12);
else if (strcmp(VAR3, "") == 0 && VAR9->VAR13)
VAR11 = FUN4(VAR9->VAR13);
else
VAR5 = -VAR14;

if (VAR11)
VAR5 = FUN5(VAR11, VAR4);

FUN6(VAR11);
FUN7(VAR7);

return VAR5;
}