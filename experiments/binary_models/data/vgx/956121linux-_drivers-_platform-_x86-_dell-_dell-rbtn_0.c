}
FUN1(VAR1);

int FUN2(struct VAR2 *VAR3)
{
int VAR4;

VAR4 = FUN3(&VAR5, VAR3);
if (VAR4 != 0)
return VAR4;

if (VAR6 && !VAR5.VAR7)
VAR4 = FUN4(&VAR8.VAR9, NULL,
(void *)true, VAR10);

return VAR4;
}