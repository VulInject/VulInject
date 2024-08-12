int FUN1(struct VAR1 *VAR2)
{
struct stat VAR3;
struct strbuf VAR4 = VAR5;

close(VAR2->VAR6);
VAR2->VAR6 = -1;

FUN2(VAR2);

if (VAR2->VAR7 == 416) {
FUN3("");
} else if (VAR2->VAR8 != VAR9) {
if (FUN4(VAR2->tmpfile.VAR10, &VAR3) == 0)
if (VAR3.VAR11 == 0)
FUN5(VAR2->tmpfile.VAR10);
return -1;
}

FUN6(&VAR2->VAR12);
VAR13->FUN7(&VAR2->VAR14, &VAR2->VAR15);
if (VAR2->VAR16 != VAR17) {
FUN5(VAR2->tmpfile.VAR10);
return -1;
}
if (!FUN8(&VAR2->VAR18, &VAR2->VAR14)) {
FUN5(VAR2->tmpfile.VAR10);
return -1;
}
FUN9(VAR19, &VAR4, &VAR2->VAR18);
VAR2->VAR20 = FUN10(VAR2->tmpfile.VAR10, VAR4.VAR10);
FUN11(&VAR4);

return VAR2->VAR20;
}