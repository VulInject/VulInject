static void *FUN1(void *VAR1, void *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *)VAR1;
bool VAR5 = *(bool *)VAR2;
int VAR6, VAR7 = 1;

for (VAR6 = 0; VAR7 && VAR6 < 3; VAR6++)
VAR7 = FUN2(VAR4, VAR5);


if (VAR7) {
FUN3("",
VAR8, VAR7, VAR4->VAR9->VAR10, VAR4->VAR11);
return (void *)VAR4;
}

return NULL;
}