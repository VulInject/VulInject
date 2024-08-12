static void FUN1(unsigned long VAR1)
{
unsigned long VAR2;

if (VAR3) {
if (VAR1 > 1000000)
FUN2("", ((unsigned int) VAR1/1000000),
((unsigned int) VAR1%1000000));
else if (VAR1 > 100000)
FUN2("", (unsigned int) VAR1);
else if (VAR1 > 1000)
FUN2("", ((unsigned int) VAR1/1000),
(unsigned int) (VAR1%1000));
else
FUN2("", VAR1);
} else {
if (VAR1 > 1000000) {
VAR2 = VAR1%10000;
if (VAR2 >= 5000)
VAR1 += 10000;
FUN2("", ((unsigned int) VAR1/1000000),
((unsigned int) (VAR1%1000000)/10000));
} else if (VAR1 > 100000) {
VAR2 = VAR1%1000;
if (VAR2 >= 500)
VAR1 += 1000;
FUN2("", ((unsigned int) VAR1/1000));
} else if (VAR1 > 1000) {
VAR2 = VAR1%100;
if (VAR2 >= 50)
VAR1 += 100;
FUN2("", ((unsigned int) VAR1/1000),
((unsigned int) (VAR1%1000)/100));
}
}

return;
}