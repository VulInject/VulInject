}
FUN1(VAR1);

int FUN2(struct VAR2 *VAR3, struct VAR4 *VAR5)
{
int VAR6;

if (FUN3(VAR5))
return -VAR7;

VAR6 = FUN4(VAR3, VAR5);
if (VAR6)
goto VAR8;

FUN5(VAR5);
VAR8:
return VAR6;
}