static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
bool VAR4;
u32 VAR5;
int VAR6;

VAR6 = FUN2(VAR2, &VAR5);
if (VAR6)
return VAR6;

if (!VAR2->VAR7->VAR8->VAR9)
return 0;

VAR4 = VAR2->VAR7->VAR8->FUN3(VAR2->VAR7->VAR10.VAR11, VAR2->class,
VAR3);

if (!VAR4)
return 0;

if (!FUN4(VAR2, VAR5))
return -VAR12;

return 0;
}