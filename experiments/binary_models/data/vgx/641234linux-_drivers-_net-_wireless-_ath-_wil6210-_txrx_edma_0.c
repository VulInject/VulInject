static int FUN1(struct VAR1 *VAR2, u16 VAR3,
int VAR4)
{
struct VAR5 *VAR6 = &VAR2->VAR7;
int VAR8;

FUN2(VAR2, "");

VAR6->VAR9 = VAR3;
VAR6->VAR10 = true;
VAR8 = FUN3(VAR2, VAR6);
if (VAR8)
return VAR8;

VAR8 = FUN4(VAR2, VAR4);
if (VAR8)
goto VAR11;

return 0;
VAR11:
FUN5(VAR2, VAR6);
return VAR8;
}