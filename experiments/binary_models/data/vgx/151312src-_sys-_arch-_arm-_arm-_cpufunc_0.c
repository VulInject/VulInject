void
FUN1(void)
{
int VAR1, VAR2, VAR3;
int VAR4, VAR5;
uint32_t VAR6, VAR7;
uint32_t VAR8, VAR9;
uint32_t VAR10;

VAR4 = VAR11;
VAR5 = VAR12;

VAR7 = VAR13;
VAR6 = VAR14;

FUN2("",
VAR4, VAR5, VAR6, VAR7);

VAR3 = 0; 
VAR9 = 0;
for (VAR1 = 0; VAR1 < VAR4; VAR1++)  {
VAR8 = 0;
for (VAR2 = 0; VAR2 < VAR5; VAR2++) {
VAR10 = VAR8 | VAR9 | VAR3;


__asm volatile(""
: : "" (VAR10));
VAR8 += VAR6;
}
VAR9 += VAR7;
}

FUN3();


}