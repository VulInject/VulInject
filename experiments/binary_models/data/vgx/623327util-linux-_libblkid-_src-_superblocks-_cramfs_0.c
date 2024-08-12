static int FUN1(blkid_probe VAR1, const struct VAR2 *VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2(VAR1, VAR3, struct VAR4);
if (!VAR5)
return VAR6 ? -VAR6 : 1;

int VAR7 = FUN3(VAR3);
int VAR8 = FUN4(VAR7, VAR5->VAR9) & VAR10;

if (VAR8 && !FUN5(VAR1, VAR3, VAR5, VAR7))
return 1;

FUN6(VAR1, VAR5->VAR11, sizeof(VAR5->VAR11));
FUN7(VAR1, FUN4(VAR7, VAR5->VAR12));
FUN8(VAR1, "", VAR8 ? 2 : 1);
FUN9(VAR1,
VAR7 ? VAR13 : VAR14);
return 0;
}