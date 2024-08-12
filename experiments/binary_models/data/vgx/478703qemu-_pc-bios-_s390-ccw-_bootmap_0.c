static int FUN1(block_number_t VAR1)
{
block_number_t VAR2;
block_number_t VAR3 = 0;
block_number_t VAR4 = 0;
VAR5 *VAR6 = (void *)VAR7;
int VAR8;
int VAR9;


memset(VAR7, VAR10, sizeof(VAR7));
FUN2(VAR1, VAR6, "");

memset(VAR11, VAR10, sizeof(VAR11));


for (VAR9 = 0; VAR9 < VAR12; VAR9++) {
VAR2 = FUN3(&VAR6->VAR13[VAR9].VAR14);

if (!VAR2 || FUN4(VAR2)) {
break;
}

FUN2(VAR2, VAR15, "");

if (FUN5(&VAR8)) {

if (VAR3) {
FUN2(VAR3, VAR16,
"");
}

if (VAR9 + 1 < VAR12) {
VAR4 = FUN3(&VAR6->VAR13[VAR9 + 1].VAR14);
}

if (VAR4 && !FUN4(VAR4)) {
FUN2(VAR4, VAR17,
"");
}

return FUN6(VAR15 + VAR8);
}

VAR3 = VAR2;
}

FUN7("");
return 0;
}