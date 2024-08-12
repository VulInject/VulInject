bool FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;

if (FUN2(FUN3(VAR2)))
return false;

while (!FUN4(VAR4)) {
struct VAR5 *VAR6 = FUN5(VAR4, VAR4->VAR7);
int VAR8;

VAR8 = VAR2->FUN6(VAR2, VAR6, VAR4->VAR7);
if (VAR8 == -VAR9)
return true;
if (FUN2(VAR8)) {
VAR2->VAR10.VAR11++;
break;
}

FUN7(VAR4, FUN8(VAR6->VAR12.VAR13));
}


FUN9();

FUN10(VAR4);

return !FUN4(VAR4);
}