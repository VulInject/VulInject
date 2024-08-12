static VAR1 FUN1(struct VAR2 *VAR3, char *VAR4,
size_t VAR5, loff_t VAR6)
{
struct VAR7 *VAR8 = FUN2(FUN3(VAR3));
int VAR9;

if (VAR6 != 0)
return -VAR10;

VAR9 = FUN4(VAR11, VAR4);
if (VAR9 < 0)
return VAR9;
VAR8->VAR12 = VAR9;
return VAR5;
}