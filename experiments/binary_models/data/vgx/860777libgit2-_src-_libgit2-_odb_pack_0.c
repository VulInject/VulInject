static int FUN1(VAR1 *VAR2)
{
int VAR3;
struct stat VAR4;
git_str VAR5 = VAR6;
struct VAR7 *VAR8 = (struct VAR7 *)VAR2;

if (VAR8->VAR9 == NULL)
return 0;

if (FUN2(VAR8->VAR9, &VAR4) < 0 || !FUN3(VAR4.VAR10))
return FUN4("", NULL, 0);

if (FUN5(VAR8) < 0) {

FUN6();
}


FUN7(&VAR5, VAR8->VAR9);
VAR3 = FUN8(&VAR5, 0, VAR11, VAR8);

FUN9(&VAR5);
FUN10(&VAR8->VAR12);

return VAR3;
}