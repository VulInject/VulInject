int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR5, const char *VAR6)
{
int VAR7;

VAR7 = FUN2(VAR2, VAR4, VAR5);
if (VAR7)
return VAR7;

if (!VAR4->VAR8->VAR9)
return -VAR10;

VAR7 = FUN3(VAR4, VAR5, VAR6);
if (VAR7)
return VAR7;

VAR7 = VAR4->VAR8->FUN4(VAR2, VAR4, VAR5, VAR6);
if (!VAR7)
FUN5(VAR4, VAR5);
return VAR7;
}