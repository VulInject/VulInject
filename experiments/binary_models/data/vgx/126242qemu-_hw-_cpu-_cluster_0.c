static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{

VAR5 *VAR6 = FUN2(VAR2);
VAR7 *VAR8 = FUN3(VAR2);
CallbackData VAR9 = {
.VAR6 = VAR6,
.VAR10 = 0,
};

if (VAR6->VAR11 >= VAR12) {
FUN4(VAR4, "", VAR12);
return;
}

FUN5(VAR8, VAR13, &VAR9);


assert(VAR9.VAR10 > 0);
}