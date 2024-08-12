static int FUN1(void *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR1;
int VAR6;

if (!VAR5) {
FUN2(VAR7 "");
return -VAR8;
}

VAR6 = FUN3(VAR3, VAR5->VAR9, VAR5->VAR10);
if (VAR6) {
FUN2(VAR7 "", VAR6);
return VAR6;
}


VAR3->VAR11	= &VAR5->VAR12;
VAR3->VAR13		= &VAR14;

VAR3->VAR13->open(VAR3);

return 0;
}