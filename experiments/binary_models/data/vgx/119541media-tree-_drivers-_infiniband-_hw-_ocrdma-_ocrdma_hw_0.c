static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, u16 VAR5)
{
int VAR6;

VAR6 = FUN2(VAR2, &VAR4->VAR7, VAR8,
sizeof(struct VAR9));
if (VAR6)
return VAR6;

VAR6 = FUN3(VAR2, VAR4);
if (VAR6)
goto VAR10;
VAR4->VAR2 = VAR2;
FUN4(VAR2, VAR4->VAR7.VAR11, true, true, 0);

return 0;
VAR10:
FUN5(VAR2, &VAR4->VAR7);
return VAR6;
}