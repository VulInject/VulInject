static int FUN1(VAR1* VAR2)
{
int VAR3;


VAR3 = FUN2(VAR2, FUN3(VAR2->VAR4), VAR5);
if (VAR3) {
return VAR3;
}

if (!VAR2->VAR6) {
return 0;
}


VAR2->VAR7 = VAR2->VAR8;
VAR2->VAR9 = 0;
VAR3 = FUN2(VAR2, (VAR10*)&VAR2->VAR9, sizeof(VAR2->VAR9));
if (VAR3) {
return VAR3;
}

return 0;
}