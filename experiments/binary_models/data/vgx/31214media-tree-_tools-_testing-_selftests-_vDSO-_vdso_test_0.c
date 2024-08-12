int main(int argc, char **argv)
{
unsigned long VAR1 = FUN1(VAR2);
if (!VAR1) {
FUN2("");
return 0;
}

FUN3(FUN1(VAR2));


typedef long (*VAR3)(struct VAR4 *VAR5, struct VAR6 *VAR7);
gtod_t VAR8 = (VAR3)FUN4("", "");

if (!VAR8) {
FUN2("");
return 1;
}

struct timeval VAR5;
long VAR9 = FUN5(&VAR5, 0);

if (VAR9 == 0) {
FUN2("",
(long long)VAR5.VAR10, (long long)VAR5.VAR11);
} else {
FUN2("");
}

return 0;
}