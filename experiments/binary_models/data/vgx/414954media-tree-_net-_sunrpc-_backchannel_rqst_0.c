struct VAR1 *FUN1(struct VAR2 *VAR3, __be32 VAR4)
{
struct VAR1 *VAR5;

FUN2(&VAR3->VAR6);
FUN3(VAR5, &VAR3->VAR7, VAR8) {
if (VAR5->VAR9 != VAR3->VAR10)
continue;
if (VAR5->VAR11 == VAR4)
goto VAR12;
}
VAR5 = FUN4(VAR3, VAR4);
VAR12:
FUN5(&VAR3->VAR6);
return VAR5;
}