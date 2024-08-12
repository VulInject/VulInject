static int FUN1(struct VAR1 *VAR2, int VAR3,
struct VAR4 *VAR5)
{
struct VAR1 *VAR6 = VAR2;
int VAR7 = 0;

if (!VAR3)
return 0;

FUN2(VAR5, VAR2);

while (!VAR7 && (VAR2 = FUN3(VAR5)))
if (FUN4(VAR2))
VAR7 = FUN5(VAR2, VAR3);

if (!VAR7)
return VAR7;

FUN2(VAR5, VAR6);

while ((VAR6 = FUN3(VAR5))
&& VAR6 != VAR2)
if (FUN4(VAR6))
FUN5(VAR6, -VAR3);

return VAR7;
}