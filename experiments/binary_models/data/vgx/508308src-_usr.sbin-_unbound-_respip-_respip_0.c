static int
FUN1(struct VAR1* VAR2, const char* VAR3,
const VAR4* VAR5, size_t VAR6)
{
struct VAR7* VAR8;

if(!(VAR8=FUN2(VAR2, VAR3, 1)))
return 0;
if(VAR8->VAR5) {
FUN3("",
VAR3);
}
VAR8->VAR5 = FUN4(VAR2->VAR9, VAR5, VAR6);
if(!VAR8->VAR5) {
FUN5("");
return 0;
}
VAR8->VAR6 = VAR6;
return 1;
}