static void FUN1(VAR1 *VAR2, const char *VAR3)
{
if (!FUN2(VAR2))
FUN3(VAR2, VAR4);

if (VAR3)
VAR2->VAR5->VAR6 = FUN4(VAR3);


if (VAR2->VAR5->VAR6 < 300)
VAR2->VAR5->VAR6 = 300;

if (VAR2->VAR5->VAR6 >= 302)
FUN3(VAR2, VAR7); 

FUN5(VAR2, "", 0);
}