static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
if (VAR6->VAR7->VAR8 == 0) {
FUN2("");
return -1;
}
int VAR9 = rand() % VAR6->VAR7->VAR8;
VAR1 *VAR10 = VAR6->VAR7->VAR11;
for (int VAR12 = 0; VAR12 < VAR9 && VAR10; ++VAR12) {
VAR10 = VAR10->VAR13;
}
if (!VAR10) {
FUN2("");
return -1;
}
if (FUN3(VAR10, VAR3) < 0) {
FUN2("", strerror(VAR14));
return -1;
}

close(VAR3);
return 0;
}