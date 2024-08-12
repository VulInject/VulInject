static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;

FUN2(&VAR4);

if (!VAR5) {
FUN3(&VAR2->VAR6->VAR7, "");
VAR5 = VAR2;
} else
VAR3 = -VAR8;

FUN4(&VAR4);

if (!VAR3 && !FUN5(&VAR2->VAR6->VAR7)) {
VAR3 = FUN6();
if (VAR3)
FUN7(&VAR2->VAR6->VAR7, "");
}
return VAR3;
}