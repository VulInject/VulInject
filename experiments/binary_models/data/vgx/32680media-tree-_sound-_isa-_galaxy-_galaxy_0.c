static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
u8 VAR5;
u8 VAR6;
int VAR7;

VAR7 = FUN2(VAR2->VAR8);
if (VAR7 < 0)
return VAR7;

VAR7 = FUN3(VAR2->VAR8, &VAR5, &VAR6);
if (VAR7 < 0)
return VAR7;

if (VAR5 != VAR9 || VAR6 != VAR10)
return -VAR11;

VAR7 = FUN4(VAR2->VAR8, VAR12);
if (VAR7 < 0)
return VAR7;

VAR7 = FUN4(VAR2->VAR8, VAR13);
if (VAR7 < 0)
return VAR7;

VAR7 = FUN5(VAR2->VAR8, VAR4);
if (VAR7 < 0)
return VAR7;

return 0;
}