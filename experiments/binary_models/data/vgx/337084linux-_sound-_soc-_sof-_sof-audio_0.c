int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
const char *VAR6;
const void *VAR7;
int VAR8;

VAR6 = VAR5->VAR9->VAR6;
VAR7 = VAR5->VAR9;
VAR8 = sizeof(*VAR5->VAR9);


VAR5->VAR10 =
FUN2(VAR2->VAR11, VAR6,
VAR12, VAR7, VAR8);
if (FUN3(VAR5->VAR10))
return FUN4(VAR5->VAR10);

FUN5(VAR2->VAR11, "",
FUN6(&VAR5->VAR10->VAR11));

return 0;
}