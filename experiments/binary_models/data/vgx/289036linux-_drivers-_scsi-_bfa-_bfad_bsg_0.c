static int
FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = (struct VAR4 *)VAR3;
struct bfad_hal_comp VAR6;
unsigned long VAR7;

FUN2(&VAR6.VAR8);
FUN3(&VAR2->VAR9, VAR7);
VAR5->VAR10 = FUN4(&VAR2->VAR11.VAR12.VAR13,
VAR14, &VAR6);
FUN5(&VAR2->VAR9, VAR7);
if (VAR5->VAR10 != VAR15) {
FUN6(VAR2, VAR5->VAR10);
return 0;
}
FUN7(&VAR6.VAR8);
VAR5->VAR10 = VAR6.VAR10;
return 0;
}