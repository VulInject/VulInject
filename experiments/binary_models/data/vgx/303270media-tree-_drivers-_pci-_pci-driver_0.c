static long FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR4 *VAR4 = VAR3->VAR5;
struct VAR6 *VAR7 = VAR3->VAR8;
struct VAR9 *VAR5 = &VAR4->VAR5;
int VAR10;


FUN2(VAR5);
VAR4->VAR11 = VAR7;
VAR10 = VAR7->FUN3(VAR4, VAR3->VAR12);
if (!VAR10)
return VAR10;
if (VAR10 < 0) {
VAR4->VAR11 = NULL;
FUN4(VAR5);
return VAR10;
}

FUN5(VAR5, "", VAR10);
return 0;
}