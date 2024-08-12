static int FUN1(struct VAR1 *VAR2)
{
struct devlink_resource_size_params VAR3;
struct VAR4 *VAR5 = VAR2->VAR6;
int VAR7;

FUN2(&VAR3, FUN3(VAR5->VAR8),
FUN3(VAR5->VAR8),
1, VAR9);

VAR7 = FUN4(VAR2, "", FUN3(VAR5->VAR8),
VAR10,
VAR11,
&VAR3);
if (VAR7)
goto VAR12;

FUN5(VAR2,
VAR10,
VAR13, VAR5);

return 0;

VAR12:
FUN6(VAR2);
return VAR7;
}