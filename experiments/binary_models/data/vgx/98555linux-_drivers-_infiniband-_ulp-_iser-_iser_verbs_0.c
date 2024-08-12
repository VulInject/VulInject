static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR3;

if (!(VAR4->VAR5.VAR6 & VAR7)) {
FUN2("");
return -1;
}

VAR2->VAR8 = FUN3(VAR4,
VAR9 ? 0 : VAR10);
if (FUN4(VAR2->VAR8))
goto VAR11;

FUN5(&VAR2->VAR12, VAR4,
VAR13);
FUN6(&VAR2->VAR12);
return 0;

VAR11:
FUN2("");
return -1;
}