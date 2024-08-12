static FUN1(VAR1, VAR2);

static void *FUN2(void *VAR3)
{
int VAR4;
void *VAR5;

FUN3();
FUN4(&VAR6);

for (VAR4 = 0; VAR4 < 1000000; VAR4++) {
FUN5();
VAR5 = FUN6(&VAR1, 0);
FUN7();
if (VAR5 != &VAR7) {
FUN8("", VAR4, VAR5);
FUN9();
}
}

FUN10();

return NULL;
}