static bool FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3 = VAR4 + FUN2(VAR5);
struct VAR6 *VAR7;
u8 VAR8 = 0;

if (VAR2->VAR9 < 0 || VAR2->VAR9 >= VAR2->VAR10) {
FUN3(VAR2->VAR11, "");
return false;
}

VAR7 = VAR2->VAR7[VAR2->VAR9];


while (FUN4(VAR4, VAR3)) {
if (!FUN5(VAR7->VAR12, VAR13))
return false;

if (!FUN6(VAR2, &VAR8))
return VAR8 ? true : false;

FUN7(5000, 10000);
}

FUN3(VAR2->VAR11, "");
return false;
}