static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
char *VAR5;
int VAR6;
int VAR7;

if (VAR2 == NULL)
return 1;
VAR6 = FUN2(VAR2);
if (VAR6 > VAR8)
return -VAR9;
if (VAR6 < 1)
return -VAR10;
VAR5 = FUN3(VAR6, VAR11);
if (!VAR5)
return -VAR12;
FUN4(VAR5, VAR2, VAR6);
VAR7 = FUN5(VAR5, VAR4);
FUN6(VAR5);
return VAR7;
}