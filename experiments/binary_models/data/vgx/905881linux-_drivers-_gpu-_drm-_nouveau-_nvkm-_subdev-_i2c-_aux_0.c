int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
int VAR5;

FUN2(VAR2, "");
FUN3(&VAR2->mutex);

if (VAR2->VAR6)
VAR5 = FUN4(VAR4, VAR7);
else
VAR5 = -VAR8;

if (VAR5)
FUN5(&VAR2->mutex);
return VAR5;
}