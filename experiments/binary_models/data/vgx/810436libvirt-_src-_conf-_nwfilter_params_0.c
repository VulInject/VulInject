static unsigned int FUN1(const VAR1 *);

void
FUN2(VAR2 *VAR3)
{
size_t VAR4;

if (!VAR3)
return;

switch (VAR3->VAR5) {
case VAR6:
FUN3(VAR3->VAR7.VAR8.VAR9);
break;
case VAR10:
for (VAR4 = 0; VAR4 < VAR3->VAR7.VAR11.VAR12; VAR4++)
FUN3(VAR3->VAR7.VAR11.VAR13[VAR4]);
FUN3(VAR3->VAR7.VAR11.VAR13);
break;
case VAR14:
break;
}
FUN3(VAR3);
}