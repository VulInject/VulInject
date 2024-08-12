int FUN1(struct VAR1 *VAR2)
{
int VAR3;

FUN2(&VAR2->VAR4);
if (FUN3(&VAR2->VAR5)) {
VAR3 = -VAR6;
goto VAR7;
}
VAR3 = FUN4(VAR2);
if (VAR3 < 0)
goto VAR7;
return 0;

VAR7:
if (FUN5(&VAR2->VAR4))
FUN6(&VAR2->VAR8);
return VAR3;
}