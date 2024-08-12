static VAR1 FUN1(struct VAR2 *VAR3,
int VAR4,
imapstate VAR5)
{
struct VAR6 *VAR7 = VAR3->VAR7;
(void)VAR5; 

if(VAR4 == VAR8) {

struct VAR9 *VAR10 = &VAR7->VAR11.VAR10;
VAR10->VAR12 = VAR13;
FUN2(VAR3, "");
}
else if(VAR4 != VAR14) {
FUN3(VAR3, "");
return VAR15;
}

return FUN4(VAR3, VAR7);
}