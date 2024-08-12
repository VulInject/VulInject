void FUN1(const char *VAR1)
{
if (!VAR1)
return;

struct stat VAR2 = { 0 };


const bool VAR3 = (FUN2(VAR1, &VAR2) == 0) && FUN3(VAR2.VAR4);
if (!VAR3)
return;

const int VAR5 = open(VAR1, VAR6 | VAR7);
if (VAR5 < 0)
return;

struct stat VAR8 = { 0 };
if ((FUN4(VAR5, &VAR8) != 0) || !FUN3(VAR8.VAR4) ||
(VAR2.VAR9 != VAR8.VAR9) || (VAR2.VAR10 != VAR8.VAR10))
{
close(VAR5);
return;
}

unlink(VAR1);
close(VAR5);
}