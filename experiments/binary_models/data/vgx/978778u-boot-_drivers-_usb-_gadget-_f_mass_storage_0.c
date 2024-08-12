int FUN1(void *VAR1)
{
int VAR2;
struct VAR3	*VAR4 = VAR5;

do {
if (FUN2(VAR4)) {
FUN3(VAR4);
continue;
}

if (!VAR4->VAR6) {
VAR2 = FUN4(VAR4);
if (VAR2)
return VAR2;

continue;
}

VAR2 = FUN5(VAR4);
if (VAR2)
return VAR2;

if (!FUN2(VAR4))
VAR4->VAR7 = VAR8;

if (FUN6(VAR4) || FUN7(VAR4))
continue;

if (!FUN2(VAR4))
VAR4->VAR7 = VAR9;

if (FUN8(VAR4))
continue;

if (!FUN2(VAR4))
VAR4->VAR7 = VAR10;
} while (0);

VAR4->VAR11 = NULL;

return 0;
}