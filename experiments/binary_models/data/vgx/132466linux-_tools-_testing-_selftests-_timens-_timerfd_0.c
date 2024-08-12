int main(int argc, char *argv[])
{
int VAR1, VAR2, VAR3, VAR4;
char VAR5[4096];
pid_t VAR6;
struct timespec VAR7, VAR8;

FUN1();

FUN2();

FUN3(3);

FUN4(VAR9, &VAR8);
FUN4(VAR10, &VAR7);

if (FUN5())
return 1;

VAR3 = snprintf(VAR5, sizeof(VAR5), "",
VAR9, 70 * 24 * 3600,
VAR10, 9 * 24 * 3600);
VAR4 = open("", VAR11);
if (VAR4 < 0)
return FUN6("");

if (write(VAR4, VAR5, VAR3) != VAR3)
return FUN6("");

close(VAR4);
VAR8.VAR12 += 70 * 24 * 3600;
VAR7.VAR12 += 9 * 24 * 3600;

VAR6 = FUN7();
if (VAR6 < 0)
return FUN6("");
if (VAR6 == 0) {
VAR1 = 0;
VAR1 |= FUN8(VAR10, VAR7);
VAR1 |= FUN8(VAR9, VAR8);
VAR1 |= FUN8(VAR13, VAR7);

if (VAR1)
FUN9();
FUN10();
return VAR1;
}

if (FUN11(VAR6, &VAR2, 0) != VAR6)
return FUN6("");

if (FUN12(VAR2))
return FUN13(VAR2);

return 1;
}