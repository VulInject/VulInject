static int
FUN1(VAR1 *VAR2,
int VAR3,
const VAR4 *VAR5)
{
bool VAR6 = FUN2(VAR5->VAR7, VAR3);

FUN3(VAR2, "",
FUN4(VAR3),
VAR6 ? "" : "");
FUN5(VAR2, 2);

if (FUN6(VAR2, VAR3) < 0)
return -1;

if (FUN7(VAR2, VAR3) < 0)
return -1;

FUN5(VAR2, -2);
FUN8(VAR2, "");
return 0;
}