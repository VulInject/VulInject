static struct VAR1 *FUN1(void)
{
static struct VAR1 *VAR2;
static FUN2(VAR3);
struct VAR4 *VAR5;

FUN3(&VAR3);
if (VAR2)
goto VAR6;

VAR5 = FUN4("");
if (!VAR5)
goto VAR6;

VAR2 = FUN5(VAR7, 0, 0, VAR5,
&VAR8, NULL);
if (!VAR2)
FUN6(VAR5);
VAR6:
FUN7(&VAR3);

return VAR2;
}