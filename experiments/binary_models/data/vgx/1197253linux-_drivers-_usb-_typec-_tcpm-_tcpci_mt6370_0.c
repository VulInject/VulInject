static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = VAR2->VAR4.VAR3;
u16 VAR5;
int VAR6;

VAR6 = FUN2(VAR3, VAR7, &VAR5, sizeof(VAR8));
if (VAR6)
return VAR6;

if (VAR5 != VAR9)
return FUN3(VAR2->VAR10, -VAR11,
"", VAR5);

return 0;
}