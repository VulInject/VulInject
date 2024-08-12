int
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR4 *VAR5;

FUN2("");

VAR5 = VAR6;
if (VAR5->VAR7) {
FUN2("");
VAR8 = VAR9;
return -1;
}
FUN3(VAR5, sizeof *VAR5);

VAR10.VAR11 = VAR3;
VAR5->VAR7 = &VAR10;


FUN4(FUN5(VAR3->VAR12),
"", VAR5->VAR13, sizeof VAR5->VAR13) == -1 &&
FUN4(FUN5(VAR3->VAR12),
"", VAR5->VAR13, sizeof VAR5->VAR13);

FUN2("");
return 0;
}