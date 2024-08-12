static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = VAR4->VAR7;
struct VAR8 *VAR8;
char *VAR9;
int VAR10;

VAR8 = FUN2(VAR4);
if (!VAR8)
return -VAR11;

VAR9 = (char *)VAR8->VAR12;

memcpy(VAR9, VAR6->VAR13, VAR6->VAR14);
VAR10 = FUN3(VAR4, VAR8, VAR6->VAR14);
FUN4("", VAR6->VAR14);
return VAR10;
}