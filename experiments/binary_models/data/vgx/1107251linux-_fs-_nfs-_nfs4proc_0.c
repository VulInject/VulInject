static int FUN1(struct VAR1 *VAR1, long VAR2, struct VAR3 **VAR4,
void **VAR5)
{
struct VAR6 *VAR6 = FUN2(VAR1);
fmode_t VAR7 = VAR2 == VAR8 ? VAR9 : VAR10;
int VAR11;


if (!FUN3(VAR6, VAR7))
return -VAR12;
VAR11 = FUN4(VAR1, VAR2, VAR4, VAR5);
if (VAR11 || FUN3(VAR6, VAR7))
return VAR11;

FUN5(VAR1, VAR5);
return -VAR12;
}