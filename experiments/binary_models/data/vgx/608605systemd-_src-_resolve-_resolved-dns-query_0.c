FUN1(VAR1, VAR2, VAR3);

static int FUN2(VAR1 *VAR4) {
VAR5 *VAR6;

assert(VAR4);

if (VAR4->VAR7 && VAR4->VAR7->VAR8)
VAR6 = VAR4->VAR7->VAR9;
else
VAR6 = FUN3(VAR4->VAR10);

for (;;) {
if (!VAR6) 
return 0;

if (!VAR6->VAR11)
break;


VAR6 = VAR6->VAR9;
}

FUN4(VAR4->VAR7);
VAR4->VAR7 = FUN5(VAR6);

return 1;
}