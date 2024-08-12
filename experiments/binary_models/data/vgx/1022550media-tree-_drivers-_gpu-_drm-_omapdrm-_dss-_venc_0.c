static int FUN1(struct VAR1 *VAR2,
struct VAR1 *VAR3)
{
enum omap_channel VAR4 = VAR2->VAR5;
int VAR6;

VAR6 = FUN2();
if (VAR6)
return VAR6;

VAR6 = FUN3(VAR4, VAR2);
if (VAR6)
return VAR6;

VAR6 = FUN4(VAR2, VAR3);
if (VAR6) {
FUN5("",
VAR3->VAR7);
FUN6(VAR4, VAR2);
return VAR6;
}

return 0;
}