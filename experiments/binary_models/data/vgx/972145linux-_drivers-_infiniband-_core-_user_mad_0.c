static int FUN1(struct VAR1 *VAR2, u32 VAR3 *VAR4)
{
struct VAR5 *VAR6 = NULL;
u32 VAR7;
int VAR8 = 0;

if (FUN2(VAR7, VAR4))
return -VAR9;
if (VAR7 >= VAR10)
return -VAR11;

FUN3(&VAR2->VAR12->VAR13);
FUN3(&VAR2->mutex);

VAR7 = FUN4(VAR7, VAR10);
if (!FUN5(VAR2, VAR7)) {
VAR8 = -VAR11;
goto VAR14;
}

VAR6 = VAR2->VAR6[VAR7];
VAR2->VAR6[VAR7] = NULL;

VAR14:
FUN6(&VAR2->mutex);

if (VAR6)
FUN7(VAR6);

FUN6(&VAR2->VAR12->VAR13);

return VAR8;
}