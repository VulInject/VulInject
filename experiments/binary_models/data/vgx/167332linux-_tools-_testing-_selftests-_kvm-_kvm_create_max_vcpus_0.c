int main(int argc, char *argv[])
{
int VAR1 = FUN1(VAR2);
int VAR3 = FUN1(VAR4);

int VAR5 = VAR3 + 100;
struct rlimit VAR6;

FUN2("", VAR1);
FUN2("", VAR3);


FUN3(!FUN4(VAR7, &VAR6), "");

if (VAR6.VAR8 < VAR5) {
VAR6.VAR8 = VAR5;
if (VAR6.VAR9 < VAR5) {
int VAR10 = VAR6.VAR9;
VAR6.VAR9 = VAR5;

int VAR11 = FUN5(VAR7, &VAR6);
FUN6(VAR11 >= 0,
"",
VAR10, VAR5);
} else {
FUN3(!FUN5(VAR7, &VAR6), "");
}
}


if (!VAR1)
VAR1 = VAR3;

FUN3(VAR1 >= VAR3,
"",
VAR1, VAR3);

FUN7(0, VAR3);

if (VAR1 > VAR3)
FUN7(
VAR1 - VAR3, VAR3);

return 0;
}