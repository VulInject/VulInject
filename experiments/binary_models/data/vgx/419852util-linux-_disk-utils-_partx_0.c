static void FUN1(const char *VAR1)
{
int VAR2;

if (FUN2(&VAR3, 0))
FUN3(VAR4, FUN4(""));

VAR2 = FUN5(&VAR3);
if (VAR2)
FUN3(VAR4, FUN4(""),
VAR1);

if (VAR5)
FUN6(FUN4(""),
FUN7(&VAR3));

if (FUN8(&VAR3, VAR1))
FUN3(VAR4, FUN4(""), VAR1);

VAR2 = FUN9(&VAR3);

if (VAR2 == -VAR6)
FUN3(VAR4, FUN4(""), VAR1);

VAR7 = 1;
}