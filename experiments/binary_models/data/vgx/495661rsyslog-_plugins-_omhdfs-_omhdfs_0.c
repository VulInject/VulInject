static VAR1
FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
size_t VAR6;
VAR7;

VAR6 = strlen((char*)VAR5);
if(VAR3->VAR8 + VAR6 < sizeof(VAR3->VAR9)) {

memcpy((char*) VAR3->VAR9 + VAR3->VAR8, VAR5, VAR6);
VAR3->VAR8 += VAR6;
} else {
FUN2(FUN3(VAR3->VAR10, VAR3->VAR9, &VAR3->VAR8));
if(VAR6 >= sizeof(VAR3->VAR9)) {
FUN2(FUN3(VAR3->VAR10, VAR5, &VAR6));
} else {
memcpy((char*) VAR3->VAR9 + VAR3->VAR8, VAR5, VAR6);
VAR3->VAR8 += VAR6;
}
}

VAR11 = VAR12;
VAR13:
VAR14;
}