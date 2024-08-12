int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *new;
const struct VAR2 *VAR3;
int VAR4;

new = FUN2();
if (!new)
return -VAR5;

VAR3 = FUN3();

FUN4(new, VAR1);

VAR4 = FUN5(new, VAR3);
if (VAR4 < 0)
goto VAR6;

return FUN6(new);

VAR6:
FUN7(new);
return VAR4;
}